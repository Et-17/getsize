#include "args.h"

#include <stdio.h>
#include <string.h>

#define FLAG_FUNC(n, f)                          \
	int n(int argc, char **argv)             \
	{                                        \
		for (int i = 0; i < argc; i++)   \
			if (!strcmp(argv[i], f)) \
				return 1;        \
		return 0;                        \
	}

FLAG_FUNC(raw_flag, RAW_FLAG);
FLAG_FUNC(x_flag, X_FLAG);
FLAG_FUNC(y_flag, Y_FLAG);