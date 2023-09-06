/*
문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
입력은 여러 개의 테스트 케이스로 이루어져 있다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

입력의 마지막에는 0 두 개가 들어온다.// 이게 무슨말?? 

출력
각 테스트 케이스마다 A+B를 출력한다.
*/
/* 1번째 int a, b;
	while (scanf("%d %d", &a, &b)) {
        if (a == 0 && b == 0) {
            printf("%d\n", a + b);
        }
   
   2번째 int a, b;
	while (1) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) {
            printf("%d\n", a + b);
        }
    둘다 결과 값이 안나온다 0 0 입력시 0의 결과값만 나옴 
       */

#include <stdio.h>
    int main() {
        int A, B;
        while (1) {
            scanf("%d %d", &A, &B);
            if (A == 0 && B == 0) break;
            /*
            * break 소속코드블록 탈출
            * continue 잔여 코드 블록 무시및 반복문 조건식을 회기
            * return 소속함수 탈출
         -->break문과 결과가 비슷해 보이지만, break문은 소속된 반복문 또는 조건문 블록 범위만 탈출하며,
            함수의 소속은 유지합니다.
            */
            printf("%d\n", A + B);
        }
        return 0;
    }

    /* break문 
    * #include<stdio.h>
void main() {
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i == 31) //i가 31과 같지 않을 경우 반복문을 계속 실행
			break; //i가 31과 같아질 경우 for문을 탈출

		printf("%d \n", i);
	}
}
결과 0~30까지만 출력되고 종료

continue문
#include<stdio.h>
void main() {
    int i;

    for (i = 0; i <= 10; i++) { if (i > 3)
            continue; //i가 3보다 큰 정수가 되면 하단의 printf를 건너뛰고 for (조건식)으로 돌아갑니다.

        printf("%d \n", i);
    }
}
결과 0~10을 한 줄씩 출력하는 반복문에서 i가 3보다 크면 하단의 출력 블록이 무시되고, 조건식으로 계속 돌아갑니다. i가 10이 되면 종료됩니다.

return문
#include<stdio.h>
void main() {
    int i;

    for (i = 0; i <= 10; i++) { if (i > 3)
            return; //main () 함수 자체를 빠져나갑니다.

        printf("%d \n", i);
    }
}
결과 C언어 return문은 소속된 함수 블록을 탈출합니다. 현재 코드는 main() 함수에 소속되었으므로 return을 만나면 main() 함수 자체를 빠져나갑니다.
--0,1,2,3)
    */
   
