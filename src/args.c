#include "args.h"

#include <stdio.h>
#include <string.h>

int raw_flag(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
	{
		if (strcmp(argv[i], RAW_FLAG) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int x_flag(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
	{
		if (strcmp(argv[i], X_FLAG) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int y_flag(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
	{
		if (strcmp(argv[i], Y_FLAG) == 0)
		{
			return 1;
		}
	}
	return 0;
}