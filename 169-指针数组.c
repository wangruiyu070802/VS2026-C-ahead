//#include <stdio.h>
//#include <inttypes.h>
//int main() {
//	int32_t department1[] = { 0000, 1234, 1092, 3897, 1975, 1037 };
//	int32_t department2[] = { 981, 721, 16, 15, 12, 23 };
//	int32_t department3[] = { 5, 4, 1092, 89745, 1, 1037 };
//	int32_t department4[] = { 61, 58, 32, 5, 1975, 90 };
//	int32_t department5[] = { 50017840, 582435, 172392, 3245897 };
//
//	int32_t i, j;
//
//	int* ptr[5] = { department1, department2, department3, department4, department5 };
//
//	int32_t department_size[] = {
//		sizeof(department1) / sizeof(department1[0]),
//		sizeof(department2) / sizeof(department2[0]),
//		sizeof(department3) / sizeof(department3[0]),
//		sizeof(department4) / sizeof(department4[0]),
//		sizeof(department5) / sizeof(department5[0])
//	};
//
//	//caculate size of arrs
//	for (i = 0; i < 5; ++i) {
//		printf("department%" PRId32 "[] = {", i+1);
//		for (j = 0; j < department_size[i]; ++j) {
//			printf(" %" PRId32, ptr[i][j]);
//		}
//		printf(" }\n\n");
//	}
//
//	return 0;
//}