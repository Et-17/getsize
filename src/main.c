#include <stdio.h>
#include "env_getter.h"
#include "args.h"

int main(int argc, char **argv)
{
	int x, y;
	getsize(&x, &y);
	int xarg = x_flag(argc, argv);
	int yarg = y_flag(argc, argv);
	int raw = raw_flag(argc, argv);
	if (!(xarg || yarg))
	{
		xarg = 1;
		yarg = 2;
	}
	if (xarg < yarg)
	{
		if (xarg)
			printf(raw ? "%d" : "Width: %d\n", x);
		if (yarg)
			printf(raw ? (xarg ? " %d" : "%d") : "Height: %d\n", y);
	}
	else if (xarg > yarg)
	{
		if (yarg)
			printf(raw ? "%d" : "Height: %d\n", y);
		if (xarg)
			printf(raw ? (xarg ? " %d" : "%d") : "Width: %d\n", x);
	}
	if (raw)
		printf("\n");
	return 1;
}