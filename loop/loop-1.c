
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {

	int sum = 0;
	int i = 1;

	for (i = 1; i < 10; i += 2) {

		sum = i + sum;
		
	}

	printf("i 값 : %d \n1부터 10까지의 홀수의 합 : %d",i,sum);

	/*int i = 1, sum = 0;


	while (i < 10) {

		sum = i + sum;
		i = i + 2;
		
	}
	printf("1부터 10까지의 홀수의 합 : %d", sum);*/




	return 0;
}