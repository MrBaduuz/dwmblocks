#define PATH(script) "/home/mrbaduuz/.local/share/scripts/dwmblocks/"script
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

    { "    ",       PATH("spotify.sh"),  1,              5 },

    { "",       PATH("filesystem.sh"),  1800,              4 },

    { "",       PATH("battery.sh"),  5,              3 },

    { " ",       PATH("keyboard.sh"),  0,              2 },

    { "📅 ",    PATH("date.sh"),     0,                  1 },

    { "🕐 ",    PATH("clock.sh"),   10,                1 },
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static const char *delim = "  |  ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
