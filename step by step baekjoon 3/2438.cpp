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
	int n;
	printf("별을 몇항까지 찍을까요?:");
	scanf("%d", &n);

	// 사각형 만들기 i,j
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//1. n항까지 항이동 계속 반복 x+1항까지 별찍기 
	/*
	* 5항까지 별을찍을경우
	n=5 x=1 y=x+1까지 
	x=0,x<5 \n
	y=0,y<1*
	y=1,y<2**
	y=2,y<3***
	.....
	.....
	.....
	  */
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < x+1; y++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			printf("*");
			
		}
		printf("\n");
	}
/* i=0 i<n=5
* j=0, j<5-0// 첫줄에서 5개 
* j=1, j<4// 두번째 4개
* .
* .
* .
* 
*/
}
