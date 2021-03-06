// Seach on Flickr and Make Screenshot for CasperJS
// Make CasperJS Object

var casper = require('casper').create();

// Start CasperJS
casper.start();

// Set Display size
casper.viewport(1400, 800);

// Set UserAgent
casper.userAgent('User-Agent: Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome 37.0.2062.120 Safari/537.36');

// Search Cats in Flickr
var text = encodeURIComponent("Cat");
casper.open('http://www.flickr.com/search/?text=' + text);

// Capture screen
casper.then(function() {
	this.capture('flickr-cat.png', {
		top:0, left:0, width:1400, height:800
		    });
    });

casper.run();
