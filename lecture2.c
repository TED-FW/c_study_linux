#include <stdio.h>

float mean(int sum_score, short num_student);
//variance(folat mean_score, 



int main (void) {

	short score_student1 = 0;
	short score_student2 = 0;
	short score_student3 = 0;
	
	short num_student = 0;
	int sum_score = 0;
	float mean_score = 0.0;
	
	//struct student
	//scanf("%d", num_student);
	num_student = 3;

	scanf("%hd %hd %hd", &score_student1, &score_student2, &score_student3);
	sum_score = score_student1 + score_student2 + score_student3;

	mean_score = mean(sum_score, num_student);

	printf("mean of students score: %3.2f \n", mean_score);

	if (num_student > 30 ) {
		printf("error too many student\n");
		
		return 0;
		
		}


}

float mean(int sum_score, short num_student)
{
	float mean_score = 0.0;

	mean_score = ((float)sum_score / (float) (num_student));
	
	return mean_score;

	}

