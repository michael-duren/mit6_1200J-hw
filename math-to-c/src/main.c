#include <stdio.h>

unsigned int multiply(unsigned int x, unsigned int y) {
	unsigned int r = x;
	unsigned int s = y;
	unsigned int a = 0;

	while (s > 0) {
		if (s & 1) {	// s is odd (low bit set)
			a = a + r;	// accumulate
			s = s >> 1; // s = (s - 1) / 2
		} else {		// s is even
			s = s >> 1; // s = s/ 2
		}
		r = r << 1; // r = 2r, done in both branches
	}

	return a;
}

int main(void) {
	int x = 3;
	int y = 7;
	printf("result: %d from, %d * %d\n", multiply(x, y), x, y);
	return 0;
}
