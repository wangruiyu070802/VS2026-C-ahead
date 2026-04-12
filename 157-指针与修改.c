//#include <stdio.h>
//#include <inttypes.h>
//
//int main() {
//
//	int building_floors[5] = { 101, 102, 103, 104, 105 };
//
//	int target_floor = 103;
//
//	int* ptr_floor_103 = &building_floors[2];
//
//	int* ptr_floor_102 = &building_floors[1];
//
//	printf("&building_floors[2]的地址是%p\n", &building_floors[2]);
//	printf("ptr_floor_103指针变量保存的地址是：%p\n", (void*)ptr_floor_103);
//
//	printf("building_floors[2] = %d\n", building_floors[2]);
//
//	printf("快递员通过(指针相当于一个地图工具), 它带着ptr_floor_103这个指针变量(它储存了业主的地址)去寻找....\n");
//	printf("于是它找到了业主的门牌号%d\n", *ptr_floor_103);
//	printf("于是它找到了业主的门牌号%d\n", building_floors[2]);
//
//	//此时你搬家了
//	int* ptr_new_106 = ptr_floor_103;
//
//	//building_floors[2] = 106;
//	*ptr_new_106 = 106;
//
//	printf("building_floors[2] = %d\n", building_floors[2]);
//
//	return 0;
//}