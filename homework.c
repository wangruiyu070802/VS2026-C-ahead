//#include <stdio.h>
//#include <inttypes.h>
//int main() {
//	int32_t i, j, total;
//	int32_t arr[3][4] = {
//		{0},
//		{0},
//		{0},
//	};
//	int32_t(*ptr_index)[4] = arr;
//	
//	for (i = 0; i < 3; ++i) {
//		for (j = 0; j < 4; ++j) {
//			scanf("%d ", &ptr_index[i][j]);
//		}
//	}
//
//
//	total = 0;
//	for (i = 0; i < 3; ++i) {
//		for (j = 0; j < 4; ++j) {
//			if ((i == 1) && ((j == 1) || (j == 2))) {
//				continue;
//			}
//			total += ptr_index[i][j];
//		}
//	}
//
//	printf("%d", total);
//
//
//
//
//
//	return 0;
//}