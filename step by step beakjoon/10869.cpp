/*����
�� �ڿ��� A�� B�� �־�����. �̶�, A+B, A-B, A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

�Է�
�� �ڿ��� A�� B�� �־�����. (1 �� A, B �� 10,000)

���
ù° �ٿ� A+B, ��° �ٿ� A-B, ��° �ٿ� A*B, ��° �ٿ� A/B, �ټ�° �ٿ� A%B�� ����Ѵ�.
*/
#include <stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("��= %d \n", a+b);
	printf("��= %d \n", a-b);
	printf("��= %d \n", a*b);
	printf("������= %d \n", a/b);
	printf("������ = %d \n", a%b);

	return 0;
}