/*문제
평면 상에 N개의 점이 찍혀있고, 그 점을 집합 P라고 하자. 
집합 P의 벡터 매칭은 벡터의 집합인데, 모든 벡터는 집합 P의 한 점에서 시작해서, 
또 다른 점에서 끝나는 벡터의 집합이다. 또, P에 속하는 모든 점은 한 번씩 쓰여야 한다.
벡터 매칭에 있는 벡터의 개수는 P에 있는 점의 절반이다.
평면 상의 점이 주어졌을 때, 집합 P의 벡터 매칭에 있는 벡터의 합의 길이의 최솟값을 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 다음과 같이 구성되어있다.
테스트 케이스의 첫째 줄에 점의 개수 N이 주어진다. N은 짝수이다.
둘째 줄부터 N개의 줄에 점의 좌표가 주어진다.
N은 20보다 작거나 같은 자연수이고, 좌표는 절댓값이 100,000보다 작거나 같은 정수다. 모든 점은 서로 다르다.

출력
각 테스트 케이스마다 정답을 출력한다. 절대/상대 오차는 10-6까지 허용한다.
*/
//https://cocoon1787.tistory.com/80
#include<stdio.h>
#include<math.h>

// 기본 아이디어 : 벡터를 그려보던 중 모든점들 중에서 N/2개는 서로 덧셈을 하고 N/2개는 서로 뺄셈을 한다는 사실을 알게되었습니다.
//재귀로 조합을 구하고, 조합들이 저장된 a배열을 통해 a[i]의 값을 인덱스로 사용해 N/2개의 점을 골라 벡터의 합의 길이의 최소값을 구하였습니다.  

int a[20]; // 조합 저장 (뺄셈을 해줄 점들을 선별하는 배열)
double const max = 9223372036854775807; // 최대값
double temp, ans; // 임시값, 정답
int x[20], y[20]; // x좌표, y좌표
int sum_x, sum_y; // 입력받을 때 좌표 값의 합계
int T, N, R; // 테스트케이스,점 갯수, 점 갯수의반틈

void combination(int N, int R, int q) // N : 점 갯수, R : 점 갯수의 반틈(N/2), q : 뺄셈을 해줄 점들의 갯수 
{
	if (R == 0)
	{
		int sum_x_temp = sum_x; // 벡터의 합의 길이 (X)
		int sum_y_temp = sum_y; // 벡터의 합의 길이(Y)
		for (int i = 0; i < q; i++)
		{
			sum_x_temp -= 2 * x[a[i]];
			sum_y_temp -= 2 * y[a[i]];
			//(ex : 좌표값의 sum = A+B+C+D 라고 하면 => sum_temp = A-B+C-D or A+B-C-D 등등으로 바꿔주는 작업)
			//(ex : A+B-C-D = A+B+C+D - 2*C - 2*D )
		}

		temp = sqrt(pow(sum_x_temp, 2) + pow(sum_y_temp, 2)); // 벡터의 합의 길이

		if (temp < ans) ans = temp; // 최소값 선별

	}
	else if (N < R) return; // N보다 R이 더 크게 입력되는 오류 방지

	else
	{
		a[R - 1] = N - 1; // 조합 저장
		// nCr = (n-1)C(r-1) + (n-1)C(r) 을 이용한 재귀함수
		combination(N - 1, R - 1, q);
		combination(N - 1, R, q);
	}
}

int main(void)
{

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		sum_x = 0;
		sum_y = 0;
		ans = max; // 최대값 설정
		scanf("%d", &N);
		for (int j = 0; j < N; j++)
		{
			scanf("%d %d", &x[j], &y[j]);
			sum_x += x[j]; //x좌표의 합계
			sum_y += y[j]; //y좌표의 합계
		}

		combination(N, N / 2, N / 2); // 조합을 이용한 경우의 수 탐색
		printf("%.12f\n", ans); // 정답출력
	}

}