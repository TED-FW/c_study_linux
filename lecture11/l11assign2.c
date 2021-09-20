#include <stdio.h>
#include <stdlib.h>


typedef struct _NODE{
	int data;
	struct _NODE* next;
} Node;


typedef struct _LIST{
	int cnt;
	struct _NODE* head;
} List;

void push(List*, int);
int	pop(List*);	
void print_stack(List*);


int main(void){		
	List* L = (List*)malloc(sizeof(List));
	if(!L){
		printf("List creation error\n");
		return -1;
	}
	L-> head = NULL;
	L-> cnt = 0;

	push(L, 1);
	push(L, 3);
	push(L, 5);
	push(L, 7);
	print_stack(L);
	
	return 0;
}

void push(List* L, int data){
	Node* N = (Node*)malloc(sizeof(Node));
	if(!N){
		printf("Node allocation failed\n");
	}
	N->data = data;
	N->next = L->head;
	L->head = N;

	L->cnt++;
}

int pop(List* L){
	int data = 0;
	if(L->cnt <= 0){
		printf("No data to pop\n");
		return -1;
	}
	Node* N = L->head;
	data = N->data;

	L->head = N->next;
	L->cnt--;
	free(N);

	return data;
}

void print_stack(List* L){
	if(L->cnt > 0){
		printf("%d\n", pop(L));
		print_stack(L);
	}
}
