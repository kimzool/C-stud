#include <stdio.h>

int digit(int n) {
	if (n < 10) return n; // 만약 호출한 n의 값이 10보다 작다면 그대로 돌려보냄.
	return (n % 10) + digit(n / 10); // 위 if문에서 호출한 int digit함수의 n의 값이 10보다 크다면 (n%10) + digit(n/10); 을 한 후 다시 함수를 연산함.
}



int main() {

	printf("%d", digit(235));
	// 235를 입력 if( 235 < 10 ) 235가 10보다 크니 ( 235 % 10 ) + digit(235 / 10); 
	// (235%10) + digit(235 / 10) = 5 + digit(23) 
	// 23 < 10 23이 10보다 크니 
	// (23%10) + digit(23/10) = 3 + digit(2)
	// 2 < 10 == true 
	// 2 + 3 + 5 = 10
	// printf의 값으로 10이 나옴 

	return 0;
}