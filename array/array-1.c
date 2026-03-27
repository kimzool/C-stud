

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int num[5] = { 10,20,30,40,50 };
	int num2[] = { 10, 20, 30 }; // 배열 , 초기값 : 3개 [] - > 3 생략

//	printf("%d",num[2]); // 30 출력 배열은 0부터 시작 0,1,2,3,4,5 ~~

	int num3[5] = { 1,2 }; // { 1, 2, 0, 0, 0 } 
	int num4[5] = { 4 }; // { 4, 0, 0, 0, 0 }
	int num5[5] = { 0 }; // { 0, 0, 0, 0, 0 }

	int num6[5];
	num6[0] = 100;
	num6[1] = 200;
	num6[2] = 300;
	num6[3] = 400;
	num6[4] = 500;
	for (int i = 0; i <= 4;i++) {
		printf("%d\n", num6[i]); // 배열 num6[i(0~4)] 출력

	}




	return 0;
}