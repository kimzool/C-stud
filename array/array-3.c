

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int a[4][3] = { {100,200,300},{10,0,0}, {50,100,150}, {30,40,0} };
	// a[행] [열] 0 ~ 2행 0  ~ 2열 - > 9개 요소 구성
	int i, j;
	int sum = 0;

	for (i = 0; i < 4; i++) { //i 행 의미 ( 0 ~ 2 )
		for (j = 0; j < 3; j++) { // j는 열을 의미 ( 0 ~ 2 )
			printf("%d\t", a[i] [j]);
		// i = 0 , j = 0 1 2
		// i = 1 , j = 0 1 2
		// i = 2 , j = 0 1 2
			sum += a[i][j];
		}
		printf("\n");
	}

	printf("\n합계 : %d", sum);


	return 0;
}