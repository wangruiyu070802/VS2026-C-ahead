//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char arr1[50] = "Hello, World!\n";
//
//	char blank[50];
//
//	const int max_size = 10;
//
//	char arr2[15] = "Fuck Idiot!";
//
//	//sprintf_s();
//	int res = sprintf_s(blank, sizeof(blank), "My name is TylerRay! age: %d", 18);
//
//	if (res) {
//		printf("*sprintf_s*\n%s\n\n", blank);
//	}
//	/*其他编译器可能不会弹出报错框，以防万一做一个报错输出*/
//	else {
//		printf("error! check it again.");
//	}
//	//strncpy_s();
//	strncpy_s(blank, sizeof(blank), arr2, max_size);
//	printf("*strncpy_s*\n%s\n\n", blank);
//
//	//strcpy_s();
//	strcpy_s(blank, sizeof(blank), arr1);
//	printf("*strcpy_s()*\n%s\n\n", blank);
//
//	//strlen();
//	printf("*strlen()*\narr1:%zu, arr2:%zu\n\n", strlen(arr1), strlen(arr2));
//
//	//strcat_s();
//	strcat_s(arr1, sizeof(arr1), arr2);
//	printf("*strcut_s()*\n%s\n\n", arr1);
//
//	//strlen();
//	printf("*strlen()*\narr1:%zu, arr2:%zu\n\n", strlen(arr1), strlen(arr2));
//
//
//
//	return 0;
//}