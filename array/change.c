

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {


	int price, money, change,jandon,a = 0,b = 0,c = 0,d = 0;

	printf("물건의 값을 입력하세요..>>");
	scanf("%d", &price);

	printf("\n금액을 넣어주세요...>>");
	scanf("%d", &money);
		if (price < money) {
			change = money - price;

			a = change / 5000;
			change = change % 5000;

			b = change / 1000;
			change = change % 1000;

			c = change / 100;
			change = change % 100;

			d = change / 10;
			change = change % 10;
			
			
		} //if 
		else if (price = money) {
			printf("\n물건을 구매하셨습니다. 잔돈은 없습니다.\n");

		} // elif
		else {
			printf("\n입력 오류\n");

		} // else


	printf("자판기를 이용해주셔서 감사합니다.\n");

	printf("\n거스름돈을 반환합니다.\n");
	printf("5000원 : %d장 \n 1000원 : %d장 \n 100원 : %d장 \n 10원 : %d장\n",a, b, c, d);





	return 0;
}