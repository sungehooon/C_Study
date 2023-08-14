/*
문제
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

출력
시험 성적을 출력한다.
*/
#include<stdio.h>

int main(){
	// 코드 수정
	int point;
	scanf("%d", &point);

    switch (point / 10) {

	case 10: case 9:
		printf("%d점은 학점 A입니다.", point);
        break;

    case 8:
        printf("%d점은 학점 B입니다.", point);
        break;

    case 7:
        printf("%d점은 학점 C입니다.", point);
        break;

    case 6:
        printf("%d점은 학점 D입니다.", point);
        break;

    default:
        printf("%d점은 학점 F입니다.", point);
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