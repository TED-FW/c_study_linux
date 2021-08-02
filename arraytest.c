#include <stdio.h>

int main (){

	unsigned short student_num = 0;
	int score_sum = 0;
	float everage_score = 0.0;

	short i = 0;


	printf("put in number of students: ");
	scanf("%hu",&student_num);


	unsigned short s_score[student_num] = {0};


	while (i < student_num){
		printf("put in student%hd's score : ",i+1);
		scanf("%hu",&s_score[i]);
		
		score_sum += s_score[i];

		i++;
	}

	printf("sum of each score : %d \n", score_sum);

	everage_score = (float)(score_sum) / (float)(student_num);
	printf("everage score : %3.2f \n", everage_score);






	return 1;
}





