#include <stdint.h>
#include "bootpack.h"
#include "file.h"
#include "tek.h"

void file_readfat (int *fat, unsigned char *img)
{
  int i ,j = 0;
  for (i = 0; i < 2800; i+=2) {
    fat[i + 0] = (img[j + 0]      | img[j + 1] << 8) & 0xfff;
    fat[i + 1] = (img[j + 1] >> 4 | img[j + 2] << 4) & 0xfff;
    j += 3;
  }
  return;
}


void file_loadfile (int clustno, int size, char *buf, int *fat, char *img)
{
  int i;
  for (;;) {
    if (size <= 512) {
      for (i = 0; i < size; i++) {
        buf[i] = img[clustno * 512 + i];
      }
      break;
    }
    for (i = 0; i < 512; i++) {
      buf[i] = img[clustno * 512 + i];
    }

    size -= 512;
    buf  += 512;
    clustno = fat[clustno];
  }

  return;
}


char *file_loadfile2 (int clustno, int *psize, int *fat)
{
  int size = *psize, size2;
  struct MEMMAN *memman = (struct MEMMAN *)MEMMAN_ADDR;
  char *buf, *buf2;
  buf = (char *)memman_alloc_4k (memman, size);
  file_loadfile (clustno, size, buf, fat, (char *)(ADR_DISKIMG + 0x003e00));
  if (size >= 17) {
	size2 = tek_getsize (buf);
	if (size2 > 0) {
	  // Tek compression
	  buf2 = (char *)memman_alloc_4k (memman, size2);
	  tek_decomp (buf, buf2, size2);
	  memman_free_4k (memman, (int) buf, size);
	  buf = buf2;
	  *psize = size2;
	}
  }

  return buf;
}


struct FILEINFO *file_search (char *name, struct FILEINFO *finfo, int max)
{
  int i, j;
  char s[12];
  for (i = 0; i < 11; i++) {
    s[i] = ' ';
  }
  j = 0;
  for (i = 0; name[i] != 0; i++) {
	if (j >= 11) { return 0; }   /* Not fould */
    if (name[i] == '.' && j <= 8) {
      j = 8;
    } else {
      s[j] = name[i];
      if ('a' <= s[j] && s[j] <= 'z') {
        // change lower to upper
        s[j] -= 0x20;
      }
      j++;
    }
  }
  // Find file
  for (i = 0; i < 224;) {
    if (finfo[i].name[0] == 0x00) {
      break;
    }
    if ((finfo[i].type & 0x18) == 0) {
	  for (int idx = 10; idx >= 0; idx--) {
		// for (int idx = 0; idx < 11; idx++) {
        if (finfo[i].name[idx] != s[idx]) {
          goto type_next_file;
        }
      }
      return finfo + i;  // Find file
    }
  type_next_file:
    i++;
  }
  return 0;   /* Not fould */
}

