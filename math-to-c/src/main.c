#include <stdio.h>

unsigned int bitMultiply(unsigned int r, unsigned int s) {
	unsigned int a = 0;

	while (s > 0) {
		if (0 == (s & 1)) {
			s >>= 1;
		} else {
			a += r;
			s = (s - 1) >> 1;
		}
		r <<= 1;
	}
	return a;
}

int main(void) {
	int x = 3;
	int y = 7;
	printf("result: %d from, %d * %d\n", bitMultiply(x, y), x, y);
	return 0;
}
