#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"


int main(void)
{
	int std_num;

	LIST* L = (LIST*)malloc(sizeof(LIST));
	if(!L){
		printf("L malloc failed\n");
	}
	L->head = NULL;
	L->cnt = 0;

	printf("Number of students: ");
	scanf("%d", &std_num);
	getchar();
	
	get_score(L,std_num);
	average_list(L);

	return 0;
}


