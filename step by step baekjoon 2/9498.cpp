/*
����
���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� ������ �־�����. ���� ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

���
���� ������ ����Ѵ�.
*/
#include<stdio.h>

int main(){
	// �ڵ� ����
	int point;
	scanf("%d", &point);

    switch (point / 10) {

	case 10: case 9:
		printf("%d���� ���� A�Դϴ�.", point);
        break;

    case 8:
        printf("%d���� ���� B�Դϴ�.", point);
        break;

    case 7:
        printf("%d���� ���� C�Դϴ�.", point);
        break;

    case 6:
        printf("%d���� ���� D�Դϴ�.", point);
        break;

    default:
        printf("%d���� ���� F�Դϴ�.", point);
        break;

    }
    return 0;
}


/*
	int p;
	scanf("%d", &p);

	if (p >= 90) {
		printf("A\n");
	}
	else {
		if (p >= 80) {
			printf("B\n");
		}
		else {
			if (p >= 70) {
				printf("C\n");
			}
			else {
				if (p >= 60) {
					printf("D\n");
				}
				else {
					printf("F");
				}
			}
		}
	}*/