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