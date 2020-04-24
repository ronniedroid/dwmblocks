//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",      "kbdlayout",	  0,		 9},

	{"",      "brightness",	  0,		 11},

	{"",      "volume",				0,		 10},

	{"",      "clock",				60,		  0},

  /*{"", "~/bin/statusbar/battery",						5,		0},*/

	{"",     "internet",			60,		  0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
