/*
4바이트 -> long int

8바이트 -> long long int

12바이트 -> long long long int


즉 4 의배수가 될때마다 long출력이므로
입력된 n을 4로 나눈 몫만큼 "long "을 출력 후 마지막에 "int"를 출력한다
*/
#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    for (int i = 0; i < n / 4; i++) {
        printf("long ");
    }
    printf("int");

    return 0;
}