//#include <stdio.h>
//#include <stdint.h>
///*static:限制函数使用周期（只在整个
//程序结束后才释放形式参数）
//使用范围：仅适用于该文件内部 其他文件
//不可跨文件调用该函数；*/
//int32_t main() {
//    void exchange(int32_t * point_1, int32_t * point_2, int32_t * point_3);
//
//    int32_t* p1, * p2, * p3;
//    int32_t a, b, c;
//
//    printf("please enter three integer number:\n");
//    scanf_s("%d %d %d", &a, &b, &c);
//    p1 = &a;
//    p2 = &b;
//    p3 = &c;
//    exchange(p1, p2, p3);
//
//    printf("The order num= %d,%d,%d\n", a, b, c);
//
//
//    return 0;
//}
//void exchange(int32_t* point_1, int32_t* point_2, int32_t* point_3) {
//    void swap(int32_t * Point_1, int32_t * Point_2);
//    if (*point_1 < *point_2)
//        swap(point_1, point_2);
//    if (*point_2 < *point_3)
//        swap(point_2, point_3);
//    if (*point_1 < *point_3)
//        swap(point_1, point_3);
//}
//void swap(int32_t* Point_1, int32_t* Point_2) {
//    int32_t temp;
//    temp = *Point_1;
//    *Point_1 = *Point_2;
//    *Point_2 = temp;
//}