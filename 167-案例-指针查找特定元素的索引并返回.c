//#include <stdio.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main() {
//
//	uint64_t arrays[] = { 10, 20, 30, 40, 50 };
//	uint64_t index = 0;
//	uint64_t* start_ptr = arrays;
//	uint64_t* target_ptr = NULL;
//	uint64_t target_value = 50;
//	bool found = false;
//
//
//	//计算数组的大小
//	size_t arrays_size = sizeof(arrays) / sizeof(arrays[0]);
//
//	//查找数值50并返回下标
//	for (size_t i = 0; i < arrays_size; ++i) {
//		//判断是否为所要查找的值
//		if (*(start_ptr + i) == target_value) {
//			target_ptr = start_ptr + i;
//			found = true;
//			index = i;
//			break;
//		}
//	}
//
//	//找到并输出
//	if (found == true) {
//		printf("已找到目标值：%" PRIu64 "\n下标为：%" PRIu64 "，即第%" PRIu64 "个数字\n", *target_ptr, index, index + 1);
//	}
//	//没找到告知用户
//	if (found == false) {
//		printf("未找到目标值，请重试！");
//	}
//
//
//	return 0;
//}