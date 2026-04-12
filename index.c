//#include <stdio.h>
//#include <string.h>
//#include <inttypes.h>
//
//int32_t convert(int32_t *a, int x, int y);
//
//int32_t main() {
//	int32_t arr[3][4] = { 0 };
//
//	int32_t m = 0;
//
//    /* print initial value and row addresses */
//    printf("%" PRId32 "\t%p\t%p\n", m, (void*)arr, (void*)(arr+1));
//
//    /* pass pointer to first element (flattened) */
//    m = convert((int32_t*)arr, 3, 4);
//
//    /* print result and first two elements of the flattened array row */
//    printf("%" PRId32 "\t%" PRId32 "\t%" PRId32 "\n", m, arr[0][0], arr[0][1]);
//
//
//
//	return 0;
//}
//
//int32_t convert(int32_t* a, int x, int y) {
//	a[0] = a[1];
//
//	return a[0];
//}