

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5 // 기호상수 5 ->  STUDENTS


int main() {


	int score[STUDENTS];
	float students = 5.0;
	int sum = 0;
	float avg = 0;


	for (int i = 0; i <= 4;i++) {
		
		printf("학생 %d의 점수를 입력하세요..>>", i + 1);
		scanf("%d", &score[i]);


		if (score[i] == 0) {
			students -= 1;
		}
		else if (score[i] > 100){
			
			--i;
			continue;
		}
		else if (score[i] < 0) {
			
			--i;
			continue;
		}
		else {

		}
		
		sum += score[i];
	}

	for (int a = 0; a <= 4; a++) {
		printf("\n학생 %d의 점수 :  %d", a + 1, score[a]);
		}
	
	if (students > 0) {
		avg = sum / students; // 5. : 실수 계산

		printf("\n%1.f명의 학생들의 합계 : %d", students, sum);

		printf("\n%.0f명의 학생들의 평균 : %.2f", students, avg);

	}
	
	else {
		printf("\n5명 모두 0점을 맞았습니다. 노력이 필요합니다.");
	}





	return 0;
}



	//int score[STUDENTS];
	//int sum = 0;
	//float avg = 0;

	//for (int i = 0;i <= 4;i++) {
	//	printf("학생 %d의 점수를 입력하세요..>>", i + 1);
	//	scanf("%d", &score[i]);
	//	sum += score[i];

	//}

	//for (int a = 0; a <= 4; a++) {
	//	printf("\n학생 %d의 점수 :  %d", a + 1, score[a]);
	//}

	//avg = sum / 5.0; // 5. : 실수 계산

	//printf("\n5명의 학생들의 합계 : %d", sum);

	//printf("\n5명의 학생들의 평균 : %f", avg);

	

	


