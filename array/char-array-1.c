

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{

    char str[30] = "C language"; // 문자배열 30자
    int i = 0;

    while (str[i] != '\0')  // str[i] != '\0' 이 만족할때 반복
                            // != : 다르다 \0는 null값
                            // 문자열 내용 끝나는 시점 반드시 null값이 들어감.,
        i++;

    printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
    return 0;
}