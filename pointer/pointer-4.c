
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int count_event(int ar[10]);
void print_cnt(int r);

int main(void) {

	int res = 0;
	int ar[10]; // 10개의 배열 (0~9)
	printf("정수 10개 입력 :");

	for (int i = 0; i < 10;i++) {
		scanf("%d", &ar[i]);
	}

	res = count_event(ar); // 함수 호출
	print_cnt(res);

	return 0;
}

// 함수 정의
int count_event(int ar[10]) {
	int cnt = 0;

	for (int i = 0; i < 10;i++) {

		if (ar[i] % 2 == 0) {
			++cnt;
		}

		return cnt; // 반환되는 값 ( 짝수개수 )

	}
}


// 함수 정의

void print_cnt(int r) { // 매개변수 정수형 res -> r

	printf("%d", r);

}
