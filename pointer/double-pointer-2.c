

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// double-pointer.c 이중 포인터

//void change(int* p) {
//	int b = 20;
//	p = &b;
//}
//
//
//int main(void) {
//
//
//	int a = 10;
//	int* p = &a;
//
//	change(p); // 포인터여도 주소값 복사 ( 값 전달 , call by value )
//
//	printf("%d\n", *p);
//
//	return 0;
//}






void change(int** pp) {
	int b = 20;
	*pp = &b;
}


int main(void) {


	int a = 10;
	int* p = &a;

	change(&p); // 포인터여도 주소값 복사 ( 값 전달 , call by value )

	printf("%d\n", *p);

	return 0;
}