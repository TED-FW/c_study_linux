#include <stdio.h>

#define STACK_SIZE 20

void push(int*, int);
int pop (int*);
void print_stack(int*);

int stk[STACK_SIZE];
int top = -1;

int main(){
	push(stk, 1);
	push(stk, 3);
	push(stk, 5);
	push(stk, 7);
	print_stack(stk);

	return 0;
}

void push(int* stk, int data){
	if(top >= 19){
		printf("Stack Overflow\n");
	}
	else{
		top++;
		*(stk+top) = data;
	}
}

int pop(int* stk){
	int data = 0;
	if(top <= -1){
		printf("Stack Downflow\n");
		return 0;
	}
	else{
		data = *(stk+top);
		top--;
		return data;
	}
}

void print_stack(int* stk){
	if(top >= 0){
		printf("%d\n",pop(stk));
		print_stack(stk);
	}
}
