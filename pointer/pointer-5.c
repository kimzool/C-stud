
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b);
void sub(int a, int b);
int arr_prn(int c[5]);


int main(void) {
	
	int a = 10;
	int b = 20;
	int c[5] = { 1,2,3,4,5 }; // 배열
	int sum, sum1;

	printf("정수 5개 입력\n");
	for (int i = 0;i < 5;i++) {
		scanf("%d", &c[i]);
	}
	
	
	sum = add(a,b);	  // 함수 호출
	sub(b, a); // 함수 호출

	printf("\n더하기 : %d\n", sum);

	sum1 = arr_prn(c); // 함수 호출
	printf("%d", sum1);

	return 0;
}

int add(int a,int b) { // 매개변수 : 형을 선언

	int k = a + b;

	return k; // 30을 돌려보냄


}

void sub(int a, int b) {

	int K = a - b;


	printf("\n뺴기 : %d", K);
}

int arr_prn(int c[5]) {

	int res = 0;

	for (int i = 0;i < 5;i++) {
		printf("%d\n", c[i]);
		if (c[i] % 2 == 0) {
			++res;
		}
	}
	return res;

}