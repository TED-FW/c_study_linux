#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

int main(void){
	
	int a = 0, n = 0;
	
	//init linkedlist
	LIST* L = (LIST*)malloc(sizeof(LIST));
	if(!L){
		printf("list malloc failed\n");
		return 0;
	}
	L->head = NULL;
	L->cnt = 0;
	
	//append list for 32bit
	for(int i = 0; i<32; i++){
		append_list(L);
	}

	//input number to convert from int to binary
	printf("a: ");
	scanf("%d",&a);
	getchar();

	//input number for shifting bit
	printf("n: ");
	scanf("%d",&n);
	getchar();
	

		
	//convert int 2 binary convert_int2binary(L,a,32)
	//L->data=a&2
	//
	convert_int2binary(L,a,32);

	printf("<Original bit>\n");
	//original bit print
	print_32bit(L);

	//
	//shift bit to right with given number
	circular_right_shift(L, n);
	
	printf("<4 circular shifted bit>\n");
	print_32bit(L);


	return 0;
}





