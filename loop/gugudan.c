#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int a, b;


    for (a = 1; a < 13; a+=3) { //a는 단 / 1단부터 13단까지 / a+=3으로 한줄에 3단이 출력되면 다음줄에 4단이 출력되야 하므로 a+=3을 한다
        
        

        printf("\n   %d단", a); // 1단 4단 7단 10단 제목 출력
        printf("\t\t\t   %d단",a+1); // 2단 5단 8단 11단 제목 출력
        printf("\t\t\t   %d단", a+2); // 3단 6단 9단 12단 제목 출력
        
        for (b = 1;b <= 9;++b) { // b는 곱하는 수 / 총 9번 / 1씩 증가

            printf("\n%d * %d = %2d\t", a, b, a * b); // 1*1 = 1
            printf("\t%d * %d = %2d\t", a+1 , b, (a + 1) * b); // 2*1 = 2
            printf("\t%d * %d = %2d\t", a + 2, b, (a + 2) * b); // 3*1 = 3


        }



    }

    return 0;
}