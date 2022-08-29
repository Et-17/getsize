#include <stdio.h>
#include "env_getter.h"

int main(int argc, char **argv)
{
	int x, y;
	getsize(&x, &y);
	printf("Width: %d\nHeight: %d\n", x, y);
	return 1;
}