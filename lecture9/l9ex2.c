#include <stdio.h>
#include <stdlib.h>

typedef struct __node{
	int data;
	struct __node* next;
}node;

typedef struct __list{
	node* head;
	int cnt;
}list;

void clear_list(list*);
void append_node(list*);
void insert_node(list*);
void delete_node(list*);
void print_list(list*);
void reverse_list();
void sort_list();

node* node_move_to(node* N, int idx);

int main(){
	printf("\033[2J\033[H");
	printf("\t**week10 practice**\n");

	list* L = (list*)malloc(sizeof(list));
	if(!L) printf("Failed to Init.\n");
	L->head = NULL;
	L->cnt = 0;

	while(1){
		printf("a : append   i : insert   d : delete\nr : reverse   s : sort   p : print\nq : quit\n");
		printf("Press key : ");
		char c = getchar();
		getchar();
		printf("\033[2J\033[H");
		switch(c){
			case 'a' : append_node(L);	break;
			case 'i' : insert_node(L);	break;
			case 'd' : delete_node(L);	break;
			case 'r' : reverse_list(L); break;
			case 's' : sort_list(L);	break;
			case 'p' : print_list(L);	break;
			case 'q' : clear_list(L);	return 0;
			default : printf("Invalid Key\n");
		}
	
	}
}


void append_node(list* L){
	node* N = (node*)malloc(sizeof(node));
	if(!N){
		printf("Failed to create a node\n");
		return;
	}
	int n;
	printf("Data : ");
	scanf("%d",&n);
	getchar();

	N->data = n;
	N->next = L->head;
	L->head = N;
	L->cnt++;
	printf("\033[2J\033[H");
	printf("\t Append succeeded\n");

}


void delete_node(list* L){
	if(L->cnt == 0){
		printf("Empty\n");
		return;
	}
	int idx;
	node* curr = L->head;
	node* prev = NULL;
	printf("Index(0~) : ");
	scanf("%d", &idx);
	getchar();
	printf("\033[2J\033[H");
	
	if(idx > L->cnt-1 || idx < 0){
		printf("Invalid Index\n");
		return;
	}
	else if(idx == 0){
		L->head = L->head->next;
		free(curr);
	}
	else {
		while(idx--){
			prev = curr;
			curr = curr->next;
		}
		prev->next = curr->next;
		free(curr);
	}

	L->cnt--;
	printf("\t Delete succeeded\n");
}


void insert_node(list* L){

	if(L->cnt == 0){
		printf("Empty\n");
		return;
	}

	node* curr = L->head;
	node* prev = NULL;

	int idx= 0;
	printf("insert idx: ");
	scanf("%d", &idx);
	getchar();
	printf("\033[2J\033[H");
	
	if(idx <0 || idx > (L->cnt)){
		printf("invalid idx num\n");
		return;
	}
	else{
		
		node* N = (node*)malloc(sizeof(node));
		if(!N) {
			printf("failed to creat a node\n");
			return;
		}
		printf("insert data: ");
		scanf("%d", &(N->data));
		getchar();

		if(idx == 0){
			L->head = N;
		}
		else{

			while(idx--){
				prev = curr;
				curr = curr->next;
			}
			prev->next = N;
		}
		N->next = curr;
		
		printf("\033[2J\033[H");
		L->cnt++;
	}
	printf("\t Insert succeeded\n");
}

void print_list(list* L){
	if(L->cnt ==0){
		printf("Empty\n");
		return;
	}
	node* t = L->head;
	while(t){
		printf("%d ", t->data);
		t = t->next;
	}
	printf("\n");
}

void clear_list(list* L){
	while(L->head){
		node* temp = L->head;
		L->head = L->head->next;
		free(temp);
	}
	free(L);
}
 
void reverse_list(list* L){

//data exchange  temp = data1, data1 = data2, data2 = temp;
	for(int i = 0; i < (L->cnt)/2; i++){
		node* curr = NULL;
		node* revr = NULL;
		int tmp = 0;
		
		curr = node_move_to(L->head, i);
		revr = node_move_to(L->head, (L->cnt)-i-1);
		
		tmp = revr->data;
		revr->data = curr->data;
		curr->data = tmp;
	}

}

void sort_list(list* L){
	if(L->cnt < 2){
		printf("nothing to sort\n");
	}

	for(int i = (L->cnt -1) ; i > 0 ; i--){
		node* curr = L->head->next;
		node* prev = L->head;

		for(int j = 0; j < i; j++){
			if(curr->data < prev->data){
				int tmp = 0;
				tmp = curr->data;
				curr->data = prev->data;
				prev->data = tmp;
			}

			prev = curr;
			curr = curr->next;
		}
	}
	printf("sort succeeded\n");

}


node* node_move_to(node* move, int idx){
	if(idx == 0){
		return move;
	}
	else{
		node* prev = NULL;
		while(idx--){
			prev = move;
			move = move->next;
		}	
		return move;
	}

}

