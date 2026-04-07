


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{
	int i = 3000;
	int* p = NULL; // 포인터변수 선언

	p = &i; // i변수의 주소를 p 포인터 변수에 줌

	printf("p = %p\n", p);
	// %p : 주소를 출력하는 서식 문자
	printf("&i = %p\n\n", &i);
	i = 4000;

	printf("i = %d\n", i);
	printf("*p = %d\n", *p);
	// 주소에 저장된 내용에 접근하는 포인터


	*p = 5000; // 위에서 p = %i; 했기 때문에 int i의 주소는 기억되어있는 상태.
	// *p = 5000;을 해서 기억되어있는 주소의 저장되어있는 내용을 바꾸기.
	printf("\n*p = %d\n",*p);
	printf("\ni = %d\n",i);


	int x = 10, y = 20;
	int* pi;

	pi = &x; // 포인터 변수 pi에 정수 x의 주소를 넣는다
	printf("pi = %p\n", pi); // %p = 포인터 pi의 주소를 출력 ( x의 주소 )
	printf("*pi = %d\n", *pi); // 현재 pi가 지정한 주소의 내용을 출력 ( x의 값 )

	pi = &y; // 포인터 변수 pi에 정수 y의 주소를 넣는다 . ( 교체 )
	printf("pi = %p\n", pi); // 현재 담겨있는 포인터 pi의 주소를 출력 ( y의 주소 )
	printf("*pi = %d\n", *pi); // 현재 pi가 지정한 주소의 내용을 출력 ( y의 값 )






	return 0;
}