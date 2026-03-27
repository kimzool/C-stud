
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {


	int num, cnt = 0, i;
	printf("원하는 배수 입력 : "); // i는 원하는 배수의 숫자 // 3
	scanf("%d", &i);

	printf("\n배수의 개수 입력 : "); 
	scanf("%d", &num); // 보여지는 배수의 개수 num = 5 입력
					   


	while (cnt++ < num) { // 0 < 5 조건 물어보고 참 = >  다음문장 가기전에 cnt + 1 - > cnt 1이됨
		// scanf에서 배수의 개수를 5라고 입력하였다면 cnt++ < num으로 
		// while(cnt++ < num ) 에서 cnt++은 후위연산이기 때문에 cnt가 num(5) 보다 커질때까지 반복문으로 cnt는 후위연산으로 연산 후 1이 증가하며
		// cnt가 num보다 커질때까지 연산을 반복한다. 최종적으로 cnt가 num보다 커진다면 연산이 끝나게 된다.
		// 0 < 5 조건 물어보고 참 => 다음문장 가기전에 cnt+1 -> cnt 1 이됨
		// 1 < 5 조건 물어보고 참 => 다음문장 가기전에 cnt+1 -> cnt 2 이됨
		// 2 < 5 조건 물어보고 참 => 다음문장 가기전에 cnt+1 -> cnt 3 이됨
		// 3 < 5 조건 물어보고 참 => 다음문장 가기전에 cnt+1 -> cnt 4 이됨
		// 4 < 5 조건 물어보고 참 => 다음문장 가기전에 cnt+1 -> cnt 5 이됨
		// 5 < 5 조건 물어보고 거짓 => 탈출
		printf("%d", i * cnt);
		// 3 + 1
	}


	return 0;
}