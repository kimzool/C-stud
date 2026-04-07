




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 포인터의 증감 연산 ( increment/decrement )



int main() {
	
	int  i = 10;
	int a = 10;
	int* pi = &i; // i의 주소를 포인터변수 pi에게 보냄 , pi는 i의 주소를 가르킴
	int* pi2 = &a;
	

	printf("i = %d, pi = %p\n", i, pi); // %p는 주소를 출력할때 필요한 주소 지정자
	// 메모리 주소는 2진수 ( 16진수로 보여줌 )

	(*pi)++; // pi가 가리키는 위치의 값을 증가한다.
	// 괄호가 먼저이면 pi가 가리키는 주소의 내용,즉 i의 값을 1 증가시킨다 . ( i의 값이 1 증가 )
	printf("i = %d , pi = %p\n", i, pi); // 출력문 : i = 11 , pi = ~~~~~~4

	*pi++; // pi가 가리키는 위치에서 값을 가져온 후에 포인터 pi를 증가한다
	// *pi - > i를 가르키는데 그 값(* 있으므로 ) - > 11 -> ++는 주소 증가
	printf("i = %d, pi = %p\n", i, pi); // 출력문 : i = 11 , pi = ~~~~~~8

	printf("a의 주소값 : %p\n", &a);
	printf("a의 주소값 : %p\n", pi2);

	
	



	return 0;
}