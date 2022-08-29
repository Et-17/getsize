#include "env_getter.h"

#include <stdio.h>

// Windows code
#ifdef _WIN32
#include <windows.h>

int getsize(int *x, int *y)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	*x = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	*y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
	return 0;
}
#endif

// Unix code
#ifdef unix
#include <sys/ioctl.h>
#include <stdio.h>

int getsize(int *x, int *y)
{
	struct winsize w;
	ioctl(0, TIOCGWINSZ, &w);
	*x = w.ws_col;
	*y = w.ws_row;

	return 0;
}

#endif