#include "linkedlist.h"

void append_list(LIST* L){
	NODE* N = (NODE*)malloc(sizeof(NODE));
	if(!N) printf("malloc N fail\n");

	N->data = 0;
	N->next = L->head;
	L->head = N;
	L->cnt++;
}

void insert_data_node(LIST* L, int input_data, int idx){

	NODE* N = L->head;
	N->data = 0;

	while(idx>0){
		N = N->next;
		idx--;
	}

	N->data = input_data;
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


void convert_int2binary(LIST* L, int num_int, int bit){
	int tmp_arr[32] = {0};


	for(int i = 0; i<bit; i++){
		tmp_arr[i] = num_int%2;
		num_int/=2;
	
	}
	//reverse input
	for(int j = 0; j<bit; j++){
		insert_data_node(L,tmp_arr[31-j] , j);
		
	}
}

void print_32bit(LIST* L){
	NODE* N = L->head;
	for(int i = 0; i<4; i++){
		for(int j = 0; j<8; j++){
			printf("%d",N->data);
			N = N->next;
		}
		printf(" ");

	}
	printf("\n");
}

void circular_right_shift(LIST* L, int n_shift){
	
	int tmp_arr[32] = {0};
	NODE* N = L->head;

	
	for(int j = 0; j < L->cnt; j++){
		tmp_arr[j] = N->data;	
		N = N->next;
	}
	
	N = L->head;

	for(int i = 0; i<n_shift; i++){
		N = N->next;
	}

	for(int k = 0; k < L->cnt; k++){
	
		if(N->next == NULL){
			N->next = L->head;
		}
		N->data = tmp_arr[k];
		N = N->next;
	}

}



