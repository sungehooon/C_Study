/*
4����Ʈ -> long int

8����Ʈ -> long long int

12����Ʈ -> long long long int


�� 4 �ǹ���� �ɶ����� long����̹Ƿ�
�Էµ� n�� 4�� ���� ��ŭ "long "�� ��� �� �������� "int"�� ����Ѵ�
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