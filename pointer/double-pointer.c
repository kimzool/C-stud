

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// double-pointer.c 이중 포인터


int main(void) {

	int* numPtr1; // 단일 포인터 선언
	int** numPtr2; // 이중 포인터 선언
	int num1 = 10;

	numPtr1 = &num1; // num1의 메모리 주소 저장
	numPtr2 = &numPtr1; // numPtr1의 메모리 주소 저장
	printf("%p\n", &num1);
	printf("%p\n", numPtr2);
	// 포인터를 두번 역참조하여 num1의 메모리 주소의 접근

	return 0;
}

