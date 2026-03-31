
#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <string.h>


int main(void)
{

    int res;
    char a[30];
    char b[30];

    printf("첫번째 문자열을 입력하세요..>>");
    scanf("%s", a); // & : 주소를 의미한다 char a[30]는 배열으로 배열이 곧 주소이기 때문에 &을 붙이지 않아도 된다.
    // 단 , a[3]같은 특정 배열의 위치를 할때에는 &를 붙여 &a[3]를 해야한다.

    printf("\n두번째 문자열을 입력하세요..>>");
    scanf("%s", &b);

    res = strcmp(a, b); // 문자열비교
    // res는 0, 음수, 양수
    if (res < 0) { // 음수이면 문자열1이 문자열2보다 사전순으로 앞에 있음.
        printf("\n%s가 %s보다 앞에 있다.", a, b);
    }
    else if (res == 0) { // 반환값이 0이면 완전히 같다.
        printf("\n%s가 %s와  같다.", a, b);
    }
    else {
        printf("\n%s가 %s보다 뒤에 있다.", a, b);
        // 양수이면 문자열1이 문자열2보다 사전순으로 뒤에 있음.

    }


    return 0;
}