///*
//欧几里得算法实践
//*/
//#include <stdio.h>
//int main() {
//	int num1, num2;
//	int gcd_recursive(int x, int y);
//
//	printf("Please enter two num: ");
//	scanf_s("%d %d",&num1, &num2);
//
//	printf("%d",gcd_recursive(num1, num2));
//
//	return 0;
//}
//int gcd_recursive(int x, int y) {
//	int temp = 0;
//	while (y != 0) {
//		temp = y;
//		y = x % y;
//		x = temp;
//	}
//	return x;
//}