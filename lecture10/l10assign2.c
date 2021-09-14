#include <stdio.h>
#include "linkedlist.h"

int main (void){
	char c = 0;
	int input1 = 0, input2 = 0;
	int larger_cnt = 0, shorter_cnt = 0;
	int result = 0;
	NODE* N1 = NULL;
	NODE* N2 = NULL;

	LIST* L1 = (LIST*)malloc(sizeof(LIST));
	if(!L1){
		printf("L1 malloc fail\n");
	}
	LIST* L2 = (LIST*)malloc(sizeof(LIST));
	if(!L2){
		printf("L2 malloc fail\n");
	}
	
	printf("input1 : ");
	while((c = getchar()) != '\n'){
		append_data(L1,c);
	}

	printf("input2 : ");
	while((c = getchar()) != '\n'){
		append_data(L2,c);
	}

	if(L1->cnt >= L2->cnt){
		N1 = L1->head;
		N2 = L2->head;
		larger_cnt = L1->cnt;
		shorter_cnt = L2->cnt;
	}
	else if(L2->cnt > L1->cnt){
		N1 = L2->head;
		N2 = L1->head;
		larger_cnt = L2->cnt;
		shorter_cnt = L1->cnt;
	}
	else{
		printf("error\n");
	}



	for(int i = larger_cnt; i > 0; i--){
		if(N1->data ==1){
			input1 += pow_ted(2,i-1) * N1->data;
		}
		N1 = N1->next;

		if(i <= shorter_cnt){
			if(N2->data ==1 ){
				input2 += pow_ted(2,i-1) * N2->data;
			}
			N2 = N2->next;
		}

	}
	printf("%d %d", input1, input2);


	printf("Result: : ");
	result = input1 + input2;
	/*
	while(result){
		printf("%d", result%2);
		result/2;
	}
	*/
	printf(" (%d)\n", (input1 + input2));

	return 0;
}
