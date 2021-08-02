#include <stdio.h>
#include <stdlib.h>


#define STUDENT_MAX 30

int main (){

	unsigned short student_num = 0;
	int score_sum = 0;
	float everage_score = 0.0;
	float variance_temp = 0.0;
	float variance = 0.0;

	short mean_i = 0;
	short variance_i = 0;

	printf("put in number of students: ");
	scanf("%hu",&student_num);


	unsigned short s_score[STUDENT_MAX] = {0};


	while (mean_i < student_num){
		printf("put in student%hd's score : ",(mean_i+1));
		scanf("%hu",&s_score[mean_i]);
		
		score_sum += s_score[mean_i];

		mean_i++;
	}


	everage_score = (float)(score_sum) / (float)(student_num);
	printf("everage score : %3.2f \n", everage_score);

	
	while (variance_i < student_num){
		variance_temp = 0.0;
		variance_temp = (everage_score - s_score[variance_i]);
		variance_temp *= (everage_score - s_score[variance_i]);
		variance += variance_temp;
		
		variance_i++;
	}
	
	variance = variance / (student_num-1);
	printf("variance of students score : %2.2f \n", variance);


	return 0;
}





