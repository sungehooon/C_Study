/*
����
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���
ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.*/
#include <stdio.h>

int main(void)
{
	int num;
	printf("���� ���ױ��� �������?:");
	scanf("%d", &num);

	// �簢�� ����� i,j
	for (int i = 1; i > num; i--) {
		for (int j = 0; j < num; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}