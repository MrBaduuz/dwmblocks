#define PATH(script) "$HOME/.local/share/scripts/dwmblocks/"script
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

    { "  ",       PATH("spotify.sh"),  1,              7 },

    { " ",       PATH("packages.sh"),  0,              6 },

    { "",       PATH("battery.sh"),  5,              5 },

    { " ",       PATH("keyboard.sh"),  0,              4 },

    { "",       PATH("volume.sh"),  1,              3 },

    { " ",    PATH("date.sh"),     0,                  1 },

    { " ",    PATH("clock.sh"),   10,                1 },
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static const char *delim = "  |  ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
