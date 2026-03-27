

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int num1,sum;
	int num2 = 1;
\


	printf("출력하고싶은 단은 ?..>>");
	scanf("%d", &num1);

	while (num2 < 10) {
		sum = num1 * num2;
		printf("%d * %d = %d\t",num1,num2,sum);
		++num2;
	}
	

	return 0;
}