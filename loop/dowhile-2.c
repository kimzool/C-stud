

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {

	int i = 0;




	do {

		printf("1,2,3중 입력하세요..>>");
		scanf("%d",&i);

		if (i == 1)
			printf("새로 만들기\n");
		else if (i == 2)
			printf("파일열기\n");
		else if (i == 3)
			printf("파일닫기\n");
		else {
			printf("다시입력\n");
		}
		

	} while (i < 1 || i > 3 );
	printf("선택메뉴는 : %d", i);


	return 0;
}