#include <stdio.h>
#include "env_getter.h"
#include "args.h"

int main(int argc, char **argv)
{
	int x, y;
	getsize(&x, &y);
	char *fmt = raw_flag(argc, argv) ? "%d %d\n" : "Width: %d\nHeight: %d";
	printf(fmt, x, y);
	return 1;
}