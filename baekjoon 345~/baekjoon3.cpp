/*문제
다음 소스는 N번째 피보나치 수를 구하는 C++ 함수이다.
int fibonacci(int n) {

    if (n == 0) {

        printf("0");

        return 0;

    } else if (n == 1) {

        printf("1");

        return 1;

    } else {

        return fibonacci(n?1) + fibonacci(n?2);

    }

}

fibonacci(3)을 호출하면 다음과 같은 일이 일어난다.

fibonacci(3)은 fibonacci(2)와 fibonacci(1) (첫 번째 호출)을 호출한다.
fibonacci(2)는 fibonacci(1) (두 번째 호출)과 fibonacci(0)을 호출한다.
두 번째 호출한 fibonacci(1)은 1을 출력하고 1을 리턴한다.
fibonacci(0)은 0을 출력하고, 0을 리턴한다.
fibonacci(2)는 fibonacci(1)과 fibonacci(0)의 결과를 얻고, 1을 리턴한다.
첫 번째 호출한 fibonacci(1)은 1을 출력하고, 1을 리턴한다.
fibonacci(3)은 fibonacci(2)와 fibonacci(1)의 결과를 얻고, 2를 리턴한다.
1은 2번 출력되고, 0은 1번 출력된다. N이 주어졌을 때, fibonacci(N)을 호출했을 때, 0과 1이 각각 몇 번 출력되는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다.

각 테스트 케이스는 한 줄로 이루어져 있고, N이 주어진다. N은 40보다 작거나 같은 자연수 또는 0이다.

출력
각 테스트 케이스마다 0이 출력되는 횟수와 1이 출력되는 횟수를 공백으로 구분해서 출력한다.
*/

#include <stdio.h>

int main()
{
	int i, n, t;
	int fibo[41] = { 0, 1 };
	scanf("%d", &t);
	//i변수를 2로 초기화
	i = 2;
	//i가 40이 될때 까지 피보나치 수가 0이면 fibo(i)= fibo[i - 1] + fibo[i - 2] 해준고 아니면 i를 1증가 
	while (i < 41)
	{
		if (fibo[i] == 0)
		{
			fibo[i] = fibo[i - 1] + fibo[i - 2];
		}
		i++;
	}
	//i변수 0으로 초기화 
	i = 0;
	//입력 값보다 i가 작을때 n을 입력 하고 n이 0이면 10으로 출력 아니면 fibo[n - 1], fibo[n]으로 출력하고 i를 1증가 
	while (i < t)
	{
		scanf("%d", &n);
		if (n == 0)
			printf("1 0\n");
		else
			printf("%d %d\n", fibo[n - 1], fibo[n]);
		i++;
	}
}
/*문제풀면서 배운것
* 개념
피보나치 수열을 재귀로 표현했을 때의 결함을 동적 계획법으로 보완한 
사례를 보면서 눈치채신 분도 계실 거예요. 동적 계획법은 문제를 풀 때 
하나의 문제를 여러 하위 문제로 나누어 풀고, 
그것들을 결합해서 최종 목적에 도달하는 방식의 알고리즘이에요

*메모이제이션
위의 코드에서는 하위 문제를 해결할 때 그 해결책을 저장해 두고, 
똑같은 문제가 발생했을 때 저장되어 있던 해결책을 가지고 간단하게 해결했습니다. 
이렇게 동일한 문제를 반복해야 할 경우, 한 번 계산된 결과를 저장해 두었다가
활용하는 방식으로 중복 계산을 줄이는 것을 메모이제이션(Memoization)이라고 합니다.
*/
