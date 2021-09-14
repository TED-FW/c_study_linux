#include "linkedlist.h"

void append_data(LIST* L, char data){
	NODE* N = (NODE*)malloc(sizeof(NODE));
	if(!N) printf("malloc Node fail\n");
	
	N->data = data;
	N->next = L->head;
	L->head = N;
	L->cnt++;

}

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

void binary_2_hex(LIST* L2, LIST* L16){
	NODE* N2 = L2->head;
	NODE* N16 = L16->head;
	int temp_2to16 = 0;
	for(int j = 0; j < L16->cnt; j++){
		temp_2to16 = 0;	
		for(int i=0; i<4; i++){
			if(N2->data == 1) temp_2to16 += ( pow_ted(2,3-i) * (N2->data) );
			N2 = N2->next;
		}
		N16->data = temp_2to16;
		N16 = N16->next;	
		
	}
}

void print_hex(LIST* L16){
	char c = 0;
	NODE* N = L16->head;
	for(int i = 0; i < L16->cnt; i++){
		switch(N->data){
			case 0: c = '0';
					break;
			case 1: c = '1';
					break;
			case 2: c = '2';
					break;
			case 3: c = '3';
					break;
			case 4: c = '4';
					break;
			case 5: c = '5';
					break;
			case 6: c = '6';
					break;
			case 7: c = '7';
					break;
			case 8: c = '8';
					break;
			case 9: c = '9';
					break;
			case 10: c = 'a';
					break;
			case 11: c = 'b';
					break;
			case 12: c = 'c';
					break;
			case 13: c = 'd';
					break;
			case 14: c = 'e';
					break;
			case 15: c = 'f';
					break;
			default: printf("wrong data in L16\n");
		}
		printf("%c", c );
		N = N->next;
	}
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



