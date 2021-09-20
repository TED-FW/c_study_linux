#include <stdio.h>

#define NUM_STUDENT 10

int main(){
	int score[NUM_STUDENT] = {0};
	int sum = 0;

	FILE* fin = fopen("score.txt", "r");
	for(int i = 0; i< NUM_STUDENT; i++){
		fscanf(fin, "%d", &score[i]);
		sum += score[i];
	}
	printf("average score: %3.2f", sum/((float)NUM_STUDENT)); 
	fclose(fin);
}
