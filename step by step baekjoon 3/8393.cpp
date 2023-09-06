/*
문제
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

출력
1부터 n까지 합을 출력한다.
*/
#include <stdio.h>
int main(void) {
	int n;
	int t=0;
	int total;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		t += i;//t=t+i 
		total = t;//t값이 total 로 설정 하지 않으니 n항까지의 t 값이 다 나옴;
		
	}
	printf("%d", total);
}