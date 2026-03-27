

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {



	int a,b,c,d,e,f,g,h,i,j;
	int sum2;
	double sum;

	
	printf("10명의 점수를 입력하세요..>>");
	scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);



	sum2 = (a + b + c + d + e + f + g + h + i + j);

	sum = (a + b + c + d + e + f + g + h + i + j) / 10;
	printf("10명의 합계 : %d", sum2);
	printf("\n10명의 평균 점수 : %f", sum);


	




	return 0;
}