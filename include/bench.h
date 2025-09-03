#ifndef BENCH_H
#define BENCH_H

#include <stdio.h>
#include <time.h>

#define ITER(num)\
	const unsigned long g_iter = (num)

#define BENCH(name_string, task)\
{\
	clock_t start = clock();\
	for (size_t i = 0; i < g_iter; i++) {\
		task\
	}\
	clock_t end = clock();\
	printf("%s:\t%.3f milliseconds.\n", (name_string), (((double)end - (double)start) / CLOCKS_PER_SEC) * 1000);\
}

#endif
