# ��3�� Opteron�Υǡ�������å���ȥ����ɥ��ȥ���˥å�

- 3.1 �ǡ�������å���: 64kB�Υǡ������̡��ǡ��������ɤ�3��������쥤�ƥ�
- 3.2 1�������뤢����2�Ĥ��ɤ߹��ߤޤ��Ͻ񤭹���ȯ��: 8-way�Х󥯥��󥿡��꡼�֡�2-way���åȥ��������ƥ���
- 3.3 �ǡ�������å���ҥå�/�ߥ�����: ����å��奿����primairy TLB
- 3.4 512����ȥ�Υ�����ɥ�٥�TLB
- 3.5 ���顼�����ɤ�����
- 3.6 �����ɥ��ȥ���˥å�: LS1��LS2
- 3.7 �֥ץꥭ��å���ɡץ����ɥ��ȥ���˥å�: LS1
- 3.8 LS2�ؤΥ�����: ����å���ץ����֥쥹�ݥ�
- 3.9 �֥ݥ��ȥ���å���ɡץ����ɥ��ȥ���˥å�: LS2
- 3.10 �����ɡ����ȥ���˥å���Ǥ�̿��꥿�������㳰����
- 3.11 ���ȥ��ե���ǥ��󥰤ȥ����ɥե���ǥ��󥰡���¸��󥯥ե�����
- 3.12 �����ѹ������ɥ����å�: L1 Dcache��L1 Icache�������¾����
- 3.13 �ޥ���ץ����å��ˤ�����ǥåɥ��å��ν���: Exponential back-off
- 3.14 �ޥ���ץ����å��󥰤ȥޥ������åɤˤ��������
- 3.15 ���ɥ쥹���ڡ����ʥ��(ASN)�ȥ������Х�ե饰
- 3.16 TLB�ե�å���ե��륿: CAM
- 3.17 �ǡ�������å��她�̡��ץ��󥿥ե�����
- 3.18 ����å��女�ҡ���󥷤Τ���Υǡ�������å���: MOESI�ץ��ȥ���
- 3.19 ����å��女�ҡ���󥷤Τ���Υǡ�������å���: ���̡��ץ���RAM
- 3.20 L1�ǡ�������å���Υ��̡��ԥ󥰤�LS2�Υ����ȥ�����ǥ��󥰥��ȥ�
- 3.21 ��ͭ����ˤ����븷̩�ʥ��ꥪ������󥰤Τ����LS2���̡��ԥ�
- 3.22 TLB�ե�å���ե��륿CAM�ǤΥ��̡��ԥ�

![Opteron's DataCache & Load/Store Units](Opteron_Data_Cache.jpg)

## 3.1 �ǡ�������å���: 64kB�Υǡ������̡�3��������쥤�ƥ󥷤Υǡ���������

Opteron�����Ū�礭���L1�ǡ�������å��奵��������äƤ��ꡢ�֥����ɥ桼���쥤�ƥ󥷡פ�3�����å���������Ǥ��롣
�ºݤˤϡ�����å��������֤˥�����������Τˤ�2���3�������뤷��ɬ�פʤ���
�ǽ�Υ��������x86���ꥢ�ɥ쥹��׻����뤿��ˡ�3�Ĥ�AGU�Τ�����Ĥ����Ѥ��ƥ��ɥ쥹�׻����Ԥ��롣
AGU�ˤ��׻����줿���ɥ쥹��2���������ܤǥ��ꥢ�쥤��ž�����졢�֥ǥ����ɤ����ס�
����ˤ��2���������ܤκǸ�˥ǡ�����¸�ߤ�����Ρ֥�ɥ饤��פ����Ф���롣

![Likely Memory Organization](Opteron_DataCacheTile.jpg)

3���������ܤˡ���������ɤ�ͭ��������롣
���ꥢ�쥤��ǥ��ꥢ��������ȯ�����������ѥ��ץ饤����ư�������ѥ��ץ饤��˥ǡ�����ž������롣
�ʲ���ŵ��Ū������x86̿��Ǥ���F(reg,mem)�ˤ����륿���ߥ󥰤ξܺ٤Ǥ��롣
���Υ����פ�̿��Ϻǽ�˥ǡ�������꤫������ɤ������Υǡ��������Ѥ��Ʊ黻��Ԥ���

̿�᤬�������塼����Ф��ƥǥ����ѥå������Ȥ��ˡ��֥ץꥭ��å���ɥ����ɥ��ȥ���˥å�(LS1)�פ��Ф��Ƥ�ǥ����ѥå�����뤳�Ȥ򸫤롣
���Υ�˥åȤ�̿�᤬���������ȡ�LS2����äƥ���å��奢��������Ԥ���
LS1���̿���ͭ���ʥ��ꥢ�ɥ쥹��������ޤ��Ԥ�ɬ�פ����뤿�ᡢAGU�Υꥶ��ȥХ���ƻ뤹�롣
LS1���̿��ϡ��ɤ�AGU�����ɥ쥹�򶡵뤹�뤫���ΤäƤ��롣
����Ū��̿���1�����������˶��뤵���ꥪ�����Хåե�����������å����롣
����Ū�ˡ�LS1���̿��ϥ��ɥ쥹��ե��å���������å��夬�ץ����֤����Τ��Ԥġ�

![Likely Memory Organization](Datacache_Timing.JPG)

̿��ϡ�¾��̿�᤬�ԤäƤ��ʤ��¤ꡢ���ɥ쥹��׻�����Ȥ����ͤ򤹤��˥���å���ž�����롣
�嵭����ˤϡ�2�ĤΥ�������¸�ߤ��롣
�ɤΤ褦�ʥ������ˤ����Ƥ⡢��̿��ϰʹߤΥ��������������ƥ��ɥ쥹���ݻ����롣
���ɥ쥹��AGU�Υꥶ��ȥХ�����ǡ�������å���Υ��ɥ쥹�ǥ�������ľ��ž������롣
�ǡ����ϥ��꤫��1����������֤��������ѥ��ץ饤����Ϥ���롣
LS1�ϥǡ�������å���Υꥶ��ȥ����Х��򡢥ǡ��������夹��1�����������˥ꥪ�����Хåե����֤���
�������äơ�����ALU�������塼��ϥ����ɥǡ����˰�¸����Ǥ�դ�̿��򥹥����塼��󥰤��뤳�Ȥ��Ǥ���褦�ˤʤ롣

## 3.2 1�������뤢����2�Ĥ��ɤ߹��ߤޤ��Ͻ񤭹���ȯ��: 8-way�Х󥯥��󥿡��꡼�֡�2-way���åȥ��������ƥ���

Opteron�Υ���å����64bit�Υݡ��Ȥ�2�Ĥ�äƤ��뤿�ᡢ1���������2�ĤΥ���������ȯ�ԤǤ��롣
�ɤΤ褦���ɤ߹��ߤȽ񤭹��ߤΥڥ���¹Բ�ǽ����
�ǥ奢��ݡ��Ȥε����ϡ��Х󥯵��������Ѥ��Ƽ�������Ƥ���: ����å����8�Ĥ���Ω�����Х󥯤���äƤ��ꡢ���줾��ñ��Υݡ��Ȼ��äƤ��롣
2�ĤΥ��ꥢ�������ϰۤʤ�Х󥯤Ǥ����Ʊ���˽�����ǽ�Ǥ��롣

![L1�ǡ�������å�������Ѥ��벾�ۥ��ɥ쥹�ӥå�](virtual_address_l1cache.JPG)

64�Х��ȤΥ���å���饤��ϡ�8�Ĥ���Ω����64bit�ΥХ󥯤�ʬ�䤵��롣
2�ĤΥ��ɥ쥹���ۤʤ�Х󥯥ե�����ɤ򼨤��Ƥ���С��ۤʤ�Х󥯤��Ф���ȯ�Ԥ���롣
���ΥХ󥯥ե�����ɤ�3�ӥå��ܤ���5�ӥå��ܤǤ��롣
�֥ǡ����ɽ����פθ����ˤ�ꡢ���ι���������ʤ�ư���褦�ˤʤäƤ��롣

64kByte�Υ���å����2-way���åȥ��������ƥ��֤ι����Ǥ��롣
����å����2�Ĥ�32kByte�Υ�������ʬ�䤵��Ƥ��ꡢ�����ϲ��ۥ��ɥ쥹�ӥå�[14: 0]�ˤ�����򤵤�롣
ʪ�����ɥ쥹����[39:12]��2�ĤΥ������Τ����ɤ��餫�˥ҥåȤ������򸡽Ф��롣
����å���饤�����°���Ƥ���ӥå�[39:12]���ΰ��ʪ�����ɥ쥹��[39:12]��Ʊ��Ǥ��롣
���ۥ��ɥ쥹����ʪ�����ɥ쥹���Ѵ���TLB(Translation Look aside Buffers)���Ϥ�ڤ�ƹԤ��롣
2-way�ǤΥݡ��ȥ������������2�ĤΥ�������Ӥ��Ѵ��������ɥ쥹��ȤäƹԤ��롣
�ƥݡ��Ȥϥ��ɥ쥹�Ѵ���Ԥ�����θġ���TLB����äƤ��롣

���곬�ؤˤ����ƥ���å���饤��θ򴹻��ˤ�2�Ĥ�64bit�ݡ��Ȥ����Ѥ���롣
�Ĥޤ�����L2����å��夫��L1�ǡ�������å���ؤΥ���Х���128bit���Ǥ��롣
����������å���饤��ɬ�פʻ��ϡ��ޤ��ǽ��4������������Ѥ��ƥ���å���饤����ݤ��Ф����Ԥ�졢�����4��������ǿ���������å���饤�󤬥����ɤ���Ƥ��롣

## 3.3 �ǡ�������å���ҥå�/�ߥ�����: ����å��奿����primairy TLB

L1�ǡ�������å���ϡ�40�ӥåȤ�ʪ�����ɥ쥹���֡��Ĥޤ�17,179,869,184����å���饤��Τ�����1024����å���饤����Ǽ���������ǽ�Ϥ���ġ�
����å���ϥ���������������꤬������å���饤�����¸�ߤ��Ƥ��뤫�ɤ������ǧ����ɬ�פ����롣
���Τ����ʪ�����ɥ쥹�ξ��¦���ݻ����뤿��Ρ��ƥ���å���饤�����°����TagRAM��Ȥ���
2�Ĥ�Ʊ������������¸����뤿�ᡢTagRAM��Ʊ����Τ�2���ݻ����Ƥ��롣

TagRAM�ϲ��ۥ��ɥ쥹��[14:6]�ӥåȥե�����ɤ��Ѥ��ƥ�����������롣
��TagRAM��2-way���åȥ��������ƥ��֥���å���Τ������ҥåȤ���way���ֹ���֤���
�ߤ�������å���饤��Ϥ��Τɤ��餫�����äƤ��롣
TagRAM��ʪ�����ɥ쥹���ݻ����Ƥ��롣
ʪ�����ɥ쥹�ϡ����Τ�ʬ�������ƥ�������ǥ�ˡ����ʥ���ξ�����ꤹ��Τ����Ѥ���롣

�������ץ������ϥ���å�����Ф��Ʋ��ۥ��ɥ쥹���Ѥ��ƥ���������ȯ�����롣
���ۥ��ɥ쥹�ϥץ������Υ���ƥ�������Ǥ�����̣������ʤ���
�Ĥޤꡢʪ�����ɥ쥹�Υ���������å����뤿��ˤϡ��ֲ��ۥ��ɥ쥹����ʪ�����ɥ쥹�ؤ��Ѵ��פ�ɬ�פˤʤ롣
�����Ѵ���4�ĤΥ������¸�ߤ���4�ĤΥơ��֥��õ�����������ɬ�פˤʤ롣
���ۥ��ɥ쥹�ե������[47:12]��4�Ĥ�Ʊ��Ĺ���Υե�����ɤ�ʬ�䤵�졢�ƥե�����ɤ�4�ĤΥơ��֥�Υ���ǥå����Ȥʤ롣
�ƥơ��֥�ϡ����Υơ��֥�ؤΥݥ��󥿤��ݻ����Ƥ��롣
�Ǹ�Υơ��֥뤬�ڡ����ơ��֥�Ǥ��ꡢ�ǽ�Ū���Ѵ����ɥ쥹���ݻ����Ƥ��롣

![Virtual Address to Physical Address Translation:  The Table Walk.](TableWalk.JPG)

�̾Υơ��֥륦�������ȸƤФ�뤳�ν���������Ĺ�����֤�ɬ�פȤ��롣
�������ä�Opteron��Translation Look aside Buffers(TLB)�����Ѥ��ơ��Ƕ��Ѵ�����40�Ĥ��Ѵ���Ͽ���ݻ����Ƥ��롣
���Τ���32����ȥ꤬�嵭�ε��������Ѥ�����4k�ڡ����פ��Ѵ��Ǥ��롣
�Ĥ��8�Ĥϡ���2M/4M�ڡ����פ��Ѵ��Τ�������Ѥ��졢�Ǹ�Υơ��֥뻲�Ȥ򥹥��åפ��뤳�Ȥ�2MB���礭�ʥڡ����򻲾Ȥ��뤿������Ѥ���롣
(4MB�ڡ����ϲ��Υץ����å��ȸߴ�������Ĥ�������Ѥ����)��

���ۥ��ɥ쥹[47:12]��TLB��40����ȥ�Τ��٤Ƥ���Ӥ��졢����ˤ�3�����å���������ɬ�פǤ��롣
2���������ܤκǸ�ˤϡ����٤ƤΥ���ȥ�Τ����ɤ줫��Ĥǥޥå��������ɤ�����ʬ���롣
�ƥ���ȥ�ϲ��ۥ��ɥ쥹�˷���դ�ʪ�����ɥ쥹[39:12]���ݻ����Ƥ��롣
����å���ҥåȤ����ʤ�С������Υ��ɥ쥹��3���������ܤǼ�������ʪ����������Ӥ��롣

## 3.4 512����ȥ�Υ�����ɥ�٥�TLB

�ץ饤�ޥ�TLB��40����ȥ�Τ����٤Υ饤��ˤ�ҥåȤ��ʤ��ä���硢�ݡ��ȤǶ�ͭ���Ƥ����٥롾2 TLB�˥ҥåȤ����ǽ�������롣
�ơ��֥�ˤ�512�ĤΥ��ɥ쥹�Ѵ����Ǽ���뤳�Ȥ��Ǥ��롣
�����礭�ʥơ��֥�ϥץ饤�ޥ�TLB��鷺���ʻ��֤ǥ��åץǡ��Ȥ��뤳�Ȥ��Ǥ��롣
���Υơ��֥�ϰۤʤ���ˡ�ǹ�������Ƥ��롣
512����ȥ��4-way���åȥ��������ƥ��֤Ǥ��롣

����ϤĤޤꡢ4�Ĥ��Ѵ���128���ݻ����Ƥ��뤳�Ȥ�Ʊ���Ǥ��롣
���ۥ��ɥ쥹�ӥå�[18:12]��128���åȤΤ����ɤΥ���ȥ�򻲾Ȥ��뤫����ꤹ�롣
1�ĤΥ���ȥ꤫��4�Ĥ��Ѵ������������뤳�Ȥˤʤ롣
���Ѵ��ˤϲ��ۥ��ɥ쥹�λĤ���ΰ�Ǥ���[47:19]���ޤޤ�롣
���Υ��ɥ쥹�ȥơ��֥���Υ��ɥ쥹����Ӥ��Ƴ��������Ѵ���¸�ߤ��뤫�����å����롣
�ޥå��󥰤����ʤ�С���˾����ʪ�����ɥ쥹�ե������[39:12]�������롣

## 3.5 ���顼�����ɤ�����

L1�ǡ�������å����ECC(Error Coding and Correction)�ˤ���ݸ��Ƥ��롣
64bit���8�ӥåȤ����������ɤ���°���Ƥ��ꡢ1�ӥåȥ��顼�Ǥ���н������뤳�Ȥ��Ǥ���2�ӥåȥ��顼�ʤ��ȯ�����뤳�Ȥ��Ǥ��롣
����ˤ�64bit�Υϥߥ�SED/DED(Single Error Detection/Double Error Detection)�ι��������Ѥ��Ƥ��롣
���顼�ӥåȤΰ��֤����ꤹ�뤿��ˤϡ�6�ӥåȤΥѥ�ƥ��ӥåȤ�ɬ�פǤ��롣

![64 bit Hamming SED/DED error location retrieval](hamming_sed_ded.JPG)

6�ӥåȤΥѥ�ƥ��ӥåȤϾ�ޤκ�¦�˼�����Ƥ��롣
1�ϥ��顼�����Ф��줿���Ȥ򼨤��Ƥ��롣
6�ӥåȤ�32�Ĥλ�ΥӥåȤΥѥ�ƥ��򼨤��Ƥ��롣
�ѥ�ƥ����顼�ϥ��顼�ս�򼨤�6�ӥåȤΥ���ǥå����ȤʤäƤ��롣
����ˡ��ѥ�ƥ��ӥåȤ�2�ӥåȥ��顼�������ȡ��ѥ�ƥ��ӥåȼ��ȤΥ��顼������Ԥ����Ȥ��Ǥ��롣

## 3.6 �����ɥ��ȥ���˥å�: LS1��LS2

�����ɥ��ȥ���˥åȤϥǡ�������å���ؤΥ���������������롣
���Υ����פΥ�˥å�����Υ����ȥ��֥������ץ����å��ˤ����ƽ��פ�������Ĥ褦�ˤʤäƤ��롣
�����ΰ�ϡ��������������ƥ�����ˤʤ�ˤĤ�ơ����ʣ���ʵ�ǽ����������Ѥ�޷�����ä��Ƥ�����ͽ�ۤ���롣
Opteron�Υ����ɥ��ȥ���˥åȤ�Ĵ������Τˤϡ��⤦��Ĥ���ͳ�����롣
LS1��LS2��˥åȤϡ����Ф���LS1��L1�ǡ�������å���Ǥ��ꡢLS2��L2����å���Ǥ������������뤳�Ȥ�¿����
����������������ΤǤϤʤ��ɤ��������ºݤˤϸ���Ǥ��롣
�����Υ�˥åȤˤĤ��Ƥ��ܺ٤˸��Ƥ�����

![Opteron's Load Store Unit](Opteron_Load_Store_Ill.JPG)

## 3.7 �֥ץꥭ��å���ɡץ����ɥ��ȥ���˥å�: LS1

�ץꥭ��å���ɤʥ����ɥ��ȥ���˥å�(LS1)��AGU(Address Generator Unit)�ˤ���������줿���ɥ쥹���ԤĤ����ȯ�Ԥ��줿̿��ˤ�ꥢ����������롣
LS1��12����ȥ����������ꥢ�������������������塼�餫��ǥ����ѥå�����뤬��LS1�Υ���ȥ�ˤ�ǥ����ѥå�����롣
AGU�˽�°���Ƥ���ꥪ���������Х���ɬ�פʥ��ɥ쥹��AGU�Х��μ��Υ�������������ǽ�Ǥ��뤳�Ȥ򼨤�����Τ�ΤǤ��롣

����̿��Υ��ɥ쥹�����Ǥ����ꤵ��Ƥ���ʤ�С����Υǡ����ϥ���å����õ�����롣
2�ĤΥ��������ݡ��Ȥ�¸�ߤ��롣
LS1�ˤ�2�ĤΥ��������ݡ��Ȥ�¸�ߤ��롣
LS1���Ф���Ǥ�Ť�2�ĤΥ��������ϡ�����å���򸡺����뤳�Ȥ����Ĥ���롣
�����ɤȥ��ȥ�̿��Τɤ���⥭��å����Ĵ�����롣
�����ɤϼºݤˤϥ����ɥǡ�����������뤿��˥���å���˥����������롣
���ȥ��ϥ��ɥ쥹������Ǥ��Ƥ⡢���λ����Ǥ�LS1�˽񤭹��ߤ򵯤����ʤ���
���ȥ�̿��ϥ��ȥ�����ǡ����������������̿�᤬�꥿�������Ƥ�����ƽ񤭹��ߤ�»ܤ��롣

���ȥ�̿��ϡ����ȥ�̿�Ἣ�Ȥ��굡Ū�Ǥ��ꡢ�Τ����˴�������ǽ�����θ���ơ��ޤ��ǽ�˥꥿��������ɬ�פ����롣
�㤨�С�Microsoft���Хåե������Хե����μ����������뤿��˥Хåե������Хե����Υƥ��Ȥ򤹤�ѥå������Ƥ��Ȥ��褦��
���Υƥ��Ȥϥ����Хե�����ȯ�������Ȥ��˥Хåե��ؤν񤭹��ߤ��ɤ�����ξ��ʬ�������äƤ���Ϥ�����
�����Хե����ϴ���Ū��ȯ�����ʤ��Τǡ�ʬ��ͽ¬����ʬ�����ʤ������ؾ��ͽ¬���롣
����ϥ����Хե�����ȯ�������Ȥ��ˤ�Ʊ�������Ǥ��롣�Хåե��ؤν񤭹��ߤ��굡Ū�˼¹Ԥ����ΤǤ��롣

�������äơ��ºݤΥ���å���ؤν񤭹��ߤϡ����ȥ�̿�᤬�꥿��������ʬ��ͽ¬�������������Υ��ȥ�̿�᤬�������¹Ԥ���뤳�Ȥ�ʬ���äƤ���¹Ԥ���롣
�������������ٱ䤷�����ȥ������ϡ��ºݤ��ٱ��ȯ�������ʤ���
����å���إ����������롾������̿���LS1��LS2������å����������ɤ��������ؤν񤭹��ߤ��ڥ�ǥ��󥰤���Ƥ��뤫�ɤ���������å����롣
�⤷�ڥ�ǥ��󥰤�ȯ�������ʤ�С�������̿���LS1��LS2����ľ�ܥǡ������ɤ߹��ߡ������ɤ��ٱ䤬ȯ������Τ��ɤ���

LS1�ؤΥ��ȥ��ˤϡ��ºݤˤϥ���å���Υҥåȡ��ߥ��θ���������ɬ�פˤʤ롣
����å���饤��¸�ߤ��ʤ����Ȥ�ʬ����С�������L2����å���⤷���ϥ����ƥ���꤫��ǡ���������ɤ��롣
����ϡ���³�Υ����ɤ�Ʊ��Υ���å���饤����׵᤹�뤳�Ȥ�¿�����Ȥ��顢���פʥ���󥹤Ǥ��롣
���ȥ��ϥ���˽񤭹��ߤ����ǡ������������LS1�ϥǡ��������夹��ޤ��Ԥġ������Ǥʤ���С�LS2�˰�ư���ǡ�����������롣

## 3.8 LS2�ؤΥ�����: ����å���ץ����֥쥹�ݥ�

LS1��ǥ���å���Υ����å��򤷤����٤ƤΥ��������ϡ��ݥ��ȥ���å�������ɥ��ȥ���˥å�(Post-Cache Load/Store Unit(LS2))�˰�ư���롣

���٤ƤΥ��ꥢ�������ϡ������ɡ����ȥ��������ɥ��ȥ�(�ǽ�˥����ɤ���Ʊ�����˷�̤򥹥ȥ�����)�Τ����줫�Ǥ��롣
LS1�������夷�����٤ƤΥ��������ϡ��ޤ�����å�������å��η�̤��Ԥġ�����ϥҥåȤ��ߥ��Τɤ��餫�Ǥ��롣
����å���Υѥ�ƥ����顼��ȯ�������ǽ���⤢�롣
����TLB�ˤ�겾�ۥ��ɥ쥹�����ִԤ���ʪ�����ɥ쥹�������롣
ʪ�����ɥ쥹�ˤϡ��ڡ����򥭥�å��󥰲�ǽ���ɤ����򼨤��ڡ�����°���ξ�����ղä���Ƥ��롣

����å���ߥ���ȯ������ȡ�̿��ϼ��Υ��������MAB����(Missed Address Buffer Tag)�ȸƤФ�륿���������롣
���Υ����ϸ��L2�⤷���ϥ����ƥ���꤫��ߥ���������å���饤�����夷���Ȥ������Ѥ���롣
MAB�����ϰ���Ū�˻��Ѥ����ꥪ�����Хåե���������������Ѥ���롣
ʣ���Υ����ɤȥ��ȥ���Ʊ��Υ���å���饤��˰�¸���Ƥ���ȡ�Ʊ���MAB�����Ȥʤ롣
���٤ƤΤ��Τ褦�ʥ��������ϥߥ�Ƚ��ȤʤꡢƱ���MAB�����������뤳�Ȥˤʤ롣

�Х����󥿥ե�������˥å�(Bus Interface Unit: BUI)��L2����å���⤷���ϥ����ƥ���꤫��ߥ���������å���饤�������ɤ����ǡ�������å�������롣
���λ���Fill�����Ȥ���������LS2�����Ϥ���롣
Fill�����Ϥ��٤ƤΥߥ�Ƚ�ꤵ�줿���ꥢ��������MAB��������Ӥ���롣
Fill�����ȥޥå�����MAB�����ϡ��ߥ�Ƚ�꤫��ҥå�Ƚ��ؤ��ѹ�����롣

## 3.9 �֥ݥ��ȥ���å���ɡץ����ɥ��ȥ���˥å�: LS2

LS2�Ϥ�����֥ݥ��ȥ���å�������ɥ��ȥ���˥åȡפȸƤФ졢32����ȥ����äƤ��롣
���Υ�˥åȤϥ��եȥ쥸�����ǹ������졢�ǸŤΥ����ȥ�����ǥ��󥰥��������ϥ���ȥ�0����ã���ƾõ��롣
��32����ȥ�Ϥ����Ĥ��Υե�����ɤ���äƤ��롣
�����Υե�����ɤ�¿���ϡ�����ξ��˥ޥå����뤫������å����뤿�����Ӵ��¾����������°���Ƥ��롣
���٤ƤΥ��������ϥ꥿��������ޤ�LS2���ںߤ��롣
����å���ߥ���ȯ���������ˤϤ��Υ���������LS2��ǥ���å���饤�󤬥��곬�ؤ������夹����Ԥġ�
LS2���ԤäƤ��뤹�٤ƤΥ��ȥ����������ϡ��꥿�����������ԤäƤ��ꡢ�꥿��������λ����ȥ���˽񤭹��ߤ�Ԥ���

![���ޤ��ޤ�LS2�Хåե�����ȥ�](LS2_BufferEntry.JPG)

LS2��Υ��ȥ�̿�᤬�꥿��������ȡ��ҥåȡ��ߥ��ե饰���ҥåȤ˥��åȤ��졢LS1�Υ��ȥ���Ĵ���ȡ�Ʊ���פ˥���å���ݡ��Ȥ����Ѥ���롣
LS2�Υ꥿�����������ȥ������ϥǡ�������å��弫�Ȥ˽񤭹��ޤ�뤬���ҥåȡ��ߥ������ϻ��Ѥ��ʤ���
LS1����Υ��ȥ���Ĵ���Ǥϥҥåȡ��ߥ���������Ѥ�����������ǡ�������å��弫�Ȥˤϥ����������ʤ���
���ζ��Ѥˤ����פ���ǽ���夬ã���Ǥ��롣�������ʤ���С�1�ĤΥ��ȥ��ˤ�ꥭ��å���Υݡ��Ȥ�2�Ļ��Ѥ��뤳�Ȥˤʤ뤫��Ǥ��롣
����ܤ�LS1�ˤ������å��Ǥ��ꡢ2���ܤ�LS2�ˤ��꥿������ν񤭹��ߤǤ��롣
����ˤ��L1�ǡ�������å���ΥХ������Ⱦʬ���ޤ����Ƥ��ޤ���

## 3.10 �����ɡ����ȥ���˥å���Ǥ�̿��꥿�������㳰����

���٤ƤΥ��ꥢ������̿�ᡢ�����ɤȥ��ȥ�̿��ϡ�����̿�᤬�꥿��������ޤ�LS2���ںߤ��롣
������̿��ϥ꥿��������ȡ�������̿��Τ���ˤ�����LS2��������롣
���ȥ�̿��ϥǡ���������˽񤭹��ޤ��ޤ��ںߤ��Ƥ���ɬ�פ����롣
���ȥ�̿��Ϥ���̿�᤬�㳰��ȯ�����ʤ�����ʬ��ͽ¬�ߥ���ȯ�����ʤ����Ȥ�ʬ����ޤǤϥ꥿�������ʤ���
����˥ǡ��������ߥåȤ��줿�Τ��ˡ����ȥ�̿���LS2��������롣

LS2�ϥꥪ�����Хåե��ȤΥ꥿���������ѤΥ��󥿥ե���������äƤ��롣
�ꥪ�����Хåե���LS2����꥿���������̿��Υ�����ޤ�饤����ݻ����Ƥ��롣
�饤�����¸�ߤ���3�Ĥ�̿��Τ��������ϰ�Ĥ���ɬ�פʤ���
�ʤ��ʤ�С������ϥ졼��0,1,2���̤��륵�֥���ǥå����ʳ���Ʊ��Υ��������Ѥ��Ƥ뤫��Ǥ��롣
LS2�����ƤΥ꥿�����ѥ����ȡ�̿�᥿������Ӥ����פ�����Τ��Ф��ơ֥꥿�����ե饰�פ�Ω�Ƥ롣
�꥿��������������̿��Ϥ�������LS2����������롣

�ꥪ�����Хåե���Υ꥿����������ϩ��ʬ��ͽ¬�ߥ��⤷�����㳰�򸡽Ф���ȡ�
��������꥿�������������̿��ȡ���³��̿�᤬LS2��������롣
���λ���LS2����ǽ����ʤ��Τϡ��ǡ���������˥��ߥåȤ����Τ��ԤäƤ���̿��ΤߤǤ��롣