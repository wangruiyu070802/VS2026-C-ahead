//#include <stdio.h>
//
//int main(void) {
//
//	int numbers[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
//	int* ptr = numbers;
//
//	//①计算数组大小：
//	int size = sizeof(numbers) / sizeof(numbers[0]);
//	//只需要知道首地址就能知道整个数组的大小
//
//	printf("size 的值为：%d", size);
//
//	//②输出整个数组元素
//	printf("原始数组\nnumbers[%d] = {", size);
//	for (int i = 0; i < size; i++) {
//		printf(" %d", *(ptr + i));
//	}
//	printf(" }\n\n");
//
//	//③计算数组的距离
//	int* ptr_start = &numbers[0];
//	int* ptr_end = &numbers[size - 1];
//
//	printf("数组的实际距离为：%td", ptr_end - ptr_start);
//
//	//⑤使用指针加法移动指针
//	printf("使用指针加法访问第5个元素：\n");
//	ptr += 4;//四个字节
//
//	printf("numbers[ptr += 4] : %d\n\n", *ptr);
//	
//	//⑥指针之间的减法，计算距离
//	int* start_ptr = &numbers[0];
//	int* end_ptr = &numbers[size - 1];
//
//	//end_ptr - start_ptr : ptrdiff_t
//
//	printf("数组首尾之间的距离是：%td\n\n", end_ptr - start_ptr);
//
//
//	//⑦指针之间的比较
//	puts("比较指针指向的元素：");
//	if (start_ptr < end_ptr) {
//		puts("start_ptr 指向的元素在 end_ptr 所指向的元素之前\n");//--→\n\n
//	}
//
//	//⑧用指针遍历数组
//	printf("使用指针遍历数组\n外部指针遍历*p = { ");
//
//	for (int* p = start_ptr; p <= end_ptr; p++) {
//		printf("%d ", *p);
//	}
//	printf("}\n\n");
//
//
//	//⑨使用指针减法逐个访问数组中的每个元素的方向顺序
//	printf("使用指针减法逐个访问数组中的每个元素的反向顺序\n*p = { ");
//
//	for (int* p = end_ptr; p >= start_ptr; p--) {
//		printf("%d ", *p);
//	}
//	printf("}\n\n");
//
//	//⑩指针加减法访问特定的元素
//	puts("指针加减整数访问特定元素：");
//	int offset = 3;
//	printf("第四个元素（使用加法）：*(start_ptr + offset) = %d\n\n", *(start_ptr + offset));
//	//回退到第三个元素
//	printf("回到第三个元素（从第四个元素开始回退）*(start_ptr + offset - 1) = %d\n\n", *(start_ptr + offset - 1));
//
//	//比较两个指针
//	int* middle_ptr = &numbers[size / 2];
//
//	printf("比较两个指针指向的位置：\n");
//
//	if (start_ptr < middle_ptr) {
//		puts("start_ptr 指向的元素在 middle_ptr 所指向的元素之前\n");
//	}
//	if (start_ptr > middle_ptr) {
//		puts("end_ptr 指向的元素在 middle_ptr 所指向的元素之后\n");
//	}
//
//
//
//	return 0;
//}
