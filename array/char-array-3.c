
#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>


int main(void)
{

    int i;
    char fruits[3][20];


    for (i = 0;i < 3;i++) {

        printf("과일을 입력해주세요(최대20글자)..>>");
        scanf("%s", fruits[i]);
        
         
        printf("\n%d번째 과일 : %s\n",i+1, fruits[i]);


    }

    







    return 0;
}