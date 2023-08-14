/*
문제
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.*/
#include <stdio.h>

int main(void)
{
	int num;
	printf("별을 몇항까지 찍을까요?:");
	scanf("%d", &num);

	// 사각형 만들기 i,j
	for (int i = 1; i > num; i--) {
		for (int j = 0; j < num; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}