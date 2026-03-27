

	

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int i, cnt = 0; // i

	for (i = 1; i <= 100; i++) { // i = 1 / i가 100보다 작거나 같을때 / i 후위연산
		if (i % 3 == 0 && i % 7 == 0) { // 만약 i를 각각 3과 7로 나누었을떄 나머지가 0이라면
			printf("%d*", i); //  printf("%d*",i) 출력 

			// 답 : 21*42*63*84*
		}
	}


	//int i;
	//for (i = 0;i < 10;i++) { // i = 0 / i가 10보다 작을때 / i 후위연산
	//	if (i % 3 == 0) continue; // 만약 i를 3으로 나누었을때 나머지가 0 이라면 continue;
	//	if (i > 5) break; // 만약 i가 5보다 크면 break;
	//	printf("%d", i); // printf로 i 출력

	//	// 답 : 1 2 4 5


		//}
		

	return 0;
}