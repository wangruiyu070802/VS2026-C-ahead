//#include <stdio.h>
//#include <inttypes.h>
//
//
//int32_t main(void) {
//
//	printf("Enter your seach room number im mind");
//
//
//}
//
//
///**
//* Calculates the sum of two integers.
//*
//* - num1:The first integer for the sum.
//* - num2:The second integer for the sum.
//*
//* Returns:
//* - The sum of num1 and num2 as an int32_t.
//*
//* Notes:
//* -The function uses int32_t to ensure the calculation is compatible across different platforms.
//* - This is a basic example intended for beginners who are familiar with pointer.
//*
//* Name:
//* - Ray (王睿雨)
//* - email: g18305612655@gmail.com/1289399626@qq.com
//* - 2026年3月11日15点24分
//*
//*
//*/
//int32_t add_two_numbers(int32_t num1, int32_t num2) {
//	return num1 + num2;
//}
//
///**search room number function:
//* - the "room[]" is all client's address.
//* - the room_num is will search of address.
//* 
//* 
//* Name:
//* - Ray (王睿雨)
//* - email: g18305612655@gmail.com/1289399626@qq.com
//*
//*/
//int32_t search_room_number(int32_t room_num) {
//	int32_t room[] = { 101, 102, 103, 104, 105 };
//
//	printf("用户查找中0.1.2...");
//
//	for (int i = 0; i < 5; i++) {
//		
//		if (room_num == room[i]) {
//			
//			printf("用户 %d 的地址为：%p", room_num, &room[i]);
//
//		}
//	}
//}