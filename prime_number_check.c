//#include <stdio.h>
//#include <inttypes.h>
//#include <math.h>
//#include <string.h>
//
//int32_t function(int32_t num1, int32_t num2);
//
//int main() {
//	//输入两个数a,b(1<a<b<1000)，找出a-b之间所有的素数并输出
//	int32_t num1, num2;
//
//	scanf_s("%d %d", &num1, &num2);
//	function(num1, num2);
//
//	return 0;
//}
//
//int32_t function(int32_t num1, int32_t num2) {
//	int32_t num = 0;
//	int32_t i;
//	int32_t isprime;
//
//	if (num1 > num2) {
//		num = num1;
//		num1 = num2;
//		num2 = num;
//	}
//
//	for (num = num1; num < num2; ++num) {
//		isprime = 1;
//
//		if (num < 2) {
//			isprime = 0;
//		}
//		for (i = 2; i <= sqrt(num); ++i) {
//			if (num % i == 0) {
//				isprime = 0;
//				break;
//			}
//		}
//		if (isprime) {
//			printf("%d ", num);
//		}
//	}
//	puts("");
//}