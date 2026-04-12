#include <stdio.h>
#include <inttypes.h>

int32_t main() {
	int32_t num = -10;
	int32_t rightNum = num >> 2;
	printf("Original num: %" PRId32 "\n", num);
	printf("RightNum: %" PRId32 "\n", rightNum);

	return 0;
}