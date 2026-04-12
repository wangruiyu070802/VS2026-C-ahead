//#include <stdio.h>
//#include <inttypes.h>
//
//int main(void) {
//	int32_t arrays[] = { 10, 20, 30, 40, 50, 60 ,70, 80, 90, 100 };
//	int32_t* ptr = arrays;
//
//	size_t arrays_size = sizeof(arrays) / sizeof(arrays[0]);
//	
//	//输出原始数组
//	printf("原始数组：\narrays[%" PRIu32 "] = { ", (int32_t)arrays_size);
//	for (int32_t i = 0; i < arrays_size; ++i) {
//		printf("%" PRId32 " ", arrays[i]);
//	}
//	printf("}\n\n");
//
//	//通过指针增加数组的每个元素
//	for (int32_t i = 0; i < arrays_size; ++i) {
//		*(ptr + i) += 5;
//	}
//
//	//输出修改后的数组
//	printf("修改过后的数组：\narrays[%" PRId32 "] = { ", (int32_t)arrays_size);
//	for (int32_t i = 0; i < (int32_t)arrays_size; ++i) {
//		printf("%" PRId32 " ", arrays[i]);
//	}
//	printf("}\n\n");
//
//	return 0;
//}