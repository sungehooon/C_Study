/*
����
n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.

���
1���� n���� ���� ����Ѵ�.
*/
#include <stdio.h>
int main(void) {
	int n;
	int t=0;
	int total;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		t += i;//t=t+i 
		total = t;//t���� total �� ���� ���� ������ n�ױ����� t ���� �� ����;
		
	}
	printf("%d", total);
}