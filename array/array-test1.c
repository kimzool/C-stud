


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {


	char s[] = "ABCD";
	int a = 0, b = 3;
	char t;

	while (a < b) { // 0 3 번째 교환 - > 1  2 번째 교환
		t = s[a];
		s[a] = s[b];
		s[b] = t;
		a++;
		b--;

	}

	printf("%s", s);
	


	return 0;
}