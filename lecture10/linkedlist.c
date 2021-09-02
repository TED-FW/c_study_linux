#include "linkedlist.h"

void append_list(LIST* L){
	NODE* N = (NODE*)malloc(sizeof(NODE));
	if(!N) printf("malloc N fail\n");

	int n = 0;
	scanf("%d",&n);
	getchar(); //for removing \n

	N->data = n;
	N->next = L->head;
	L->head = N;
	L->cnt++;
}


void get_score(LIST* L, int n){
	int i = 0;
	for(i = 0; i<n; i++){
		printf("Score of student #%d: ", (i+1));
		append_list(L);
	}
}

void  get_score_r(LIST* L, int n){
	if(n = 0){
		;
	}
	else{
		get_score_r(L,n-1);
		printf("Score of student #%d",n);
		append_list(L);

	}

	return;
}

float average_list(LIST* L){

	float sum = 0.0;
	NODE* curr = L->head;
	sum = curr->data;
	do{
		curr = curr->next;
		sum += curr->data;
	}while(curr->next != NULL);

	printf("average score: %3.2f", sum/(L->cnt));
}
