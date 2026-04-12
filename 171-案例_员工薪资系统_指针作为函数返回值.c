//#include <stdio.h>
//#include <inttypes.h>
//#include <stdlib.h>
//
//#define EMPLOYEES_COUNT 5
//
//void update_salary(uint32_t* salaries, uint32_t uncrement);
//void print_emp(uint32_t* salaries);
//uint32_t calc_bonus(uint32_t salary);
//uint32_t* find_highest_salary(const uint32_t* salaries);
//
//int main(void) {
//	
//	/**
//	*	员工薪资管理系统
//	*	-批量涨工资
//	*	-计算并返回员工的年终奖
//	*	-查找最高薪资的员工
//	* 
//	*/
//	uint32_t salaries[EMPLOYEES_COUNT] =
//	{ 3000, 4000, 3500,4500,3200 };
//
//	print_emp(salaries);
//	//涨薪数量
//	uint32_t increment = 10000;
//
//	/**
//	* int* p = salaries;
//	* int* p = &salaries[0];
//	* update
//	* 
//	*/
//
//	update_salary(salaries, increment);
//	print_emp(salaries);
//	
//	uint32_t* highest_salary = find_highest_salary(salaries);
//	
//	printf("最高薪资：%" PRIu32 "\n", *highest_salary);
//	printf("最高薪资的年终奖是：%" PRIu32 "\n", calc_bonus(*highest_salary));
//	
//	
//	return 0;
//}
//
////每个员工涨薪increment
//void update_salary(uint32_t* salaries, uint32_t increment) {
//	for (size_t i = 0; i < EMPLOYEES_COUNT; ++i) {
//		salaries[i] += increment;
//	}
//
//}
//
////输出所有员工的工资
//void print_emp(uint32_t* salaries) {
//	for (size_t i = 0; i < EMPLOYEES_COUNT; ++i) {
//		printf("%d ", salaries[i]);
//	}
//	printf("\n");
//}
//
//uint32_t calc_bonus(uint32_t salary) {
//	return salary / 10;
//}
//
////找到所有员工中工资最高的
//uint32_t* find_highest_salary(const uint32_t* salaries) {
//	const uint32_t* highest = salaries;
//	for (size_t i = 1; i < EMPLOYEES_COUNT; ++i) {
//		if (salaries[i] > *highest) {
//			highest = &salaries[i];
//		}
//	}
//	return (uint32_t*)highest;
//}