#include "include/bench.h"

int main(void) {
	ITER(1024);

	BENCH("segg",
		__attribute__((unused)) int x = 5;
	);

	BENCH("fasz",
		__attribute__((unused)) float f = 5.4;
	);

	return 0;
}
