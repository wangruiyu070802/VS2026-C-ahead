//#include <stdio.h>
//#include <stdint.h>
//int main() {
//	static fun(int32_t x, int32_t y);
//	int32_t a, b;
//
//	printf("Please enter tow integer num(num1 / num2):\n");
//	scanf("%d %d", &a, &b);
//	if (b == 0) {
//		printf("error!");
//		return 0;
//	}
//	fun(a, b);
//
//	return 0;
//}
//static fun(int32_t x, int32_t y) {
//	int16_t i = 0;
//
//	if (x > y)
//		for (; x > y;) {
//			x -= y;
//			i++;
//		}
//	else if (x == y) {
//		i += 1;
//		x = 0;
//	}
//	printf("商为：%d\n", i);
//	printf("余数为:%d\n", x);
//}