#include <stdio.h>

int main()
{

	char op; // 사칙연산 입력 변수
	int num1 = 0; // 1번 정수
	int num2 = 0; // 2번 정수
	int res1 = 0; // 덧셈,뺄셈,곱셈
	double res2 = 0.0; // 나눗셈
	char ask;


	while (1) { // while (1): 계속 반복

		printf("1번 정수의 숫자를 입력해주세요.");
		scanf_s("%d", &num1);

		printf("\n2번 정수의 숫자를 입력해주세요.");
		scanf_s("%d", &num2);



		printf("사칙연산중 하나를 입력해주세요.(+,-,*,/)..>>");
		scanf_s(" %c", &op);

		switch (op) {



		case '+':
			printf("덧셈을 고르셨습니다.\n");
			res1 = num1 + num2; // 정수 num1과 정수 num2를 더한값을 res1에 넣기

			//printf("1번정수와 2번정수의 덧셈값 : %d", res1);
			break;

		case '-':
			printf("뺄셈을 고르셨습니다.\n");
			res1 = num1 - num2; // 정수 num1과 정수 num2를 뺀값을 res1에 넣기

			// printf("1번정수와 2번정수의 뺄셈값 : %d", res1);
			break;

		case '*':

			printf("곱셈을 고르셨습니다\n");
			res1 = num1 * num2; //정수 num1과 정수 num2를 곱한값을 res1에 넣기

			// printf("1번정수와 2번정수의 곱셈값: %d", res1);
			break;

		case '/':
			printf("나눗셈을 고르셨습니다\n");
			res2 = (double)num1 / num2;//정수 num1을 (double)num1로 실수로 바꾸고 실수 num1과 정수 num2를 나눈값을 res2에 넣기

			// printf("1번정수와 2번정수의 나눗셈값: %.2f", res2);
			break;

			//default:
			   // printf("입력 오류");
			   // break;
		}

		if (op == '+' || op == '-' || op == '*') { // op가 +이거나 -이거나 *이라면
			printf("사용자가 고른 사칙연산 : %c\n", op);

			printf("연산 결과: %d", res1);
		}

		else if (op == '/') {
			printf("사용자가 고른 사칙연산 : %c\n", op);

			printf("연산 결과: %.2f", res2);

		}
		else {
			printf("입력오류");
		}
		printf("\n\n\n\n\n\n===================\n");
		printf("연산을 종료하시겠습니까? (예: y / 아니오 : n ) >>");
		printf("===================\n");
		scanf_s(" %c", &ask);
		if (ask == 'y' || ask == 'Y') { // 만약 ask가 Y또는 y라면
			printf("연산을 종료합니다.");
			break;
		}
		else if (ask == 'n' || ask == 'N') { // 만약 ask가 n 또는 N 이라면
			printf("연산을 계속합니다.\n");
		}

	}





	return 0;
}