#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"


int main (void)
{
	int a = 0;

	LIST* L2 = (LIST*)malloc(sizeof(LIST));
	if(!L2) printf("L2 malloc failed\n");

	for(int i = 0; i<32; i++){
		append_list(L2);
	}

	LIST* L16 = (LIST*)malloc(sizeof(LIST));
	if(!L16) printf("L16 malloc failed\n");
	
	for(int i = 0; i<8; i++){
		append_list(L16);
	}

	printf("n: ");
	scanf("%d",&a);
	getchar();

	convert_int2binary(L2, a, 32);
	printf("<binary num>\n");
	print_32bit(L2);
	printf("\n");


	printf("<hex num>\n");
	binary_2_hex(L2, L16);
	print_hex(L16);
	return 0;
}
