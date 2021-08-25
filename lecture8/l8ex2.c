#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* ,int*);

int main(void)
{
	srand(time(NULL));
	
	int lotto[7] = {0};
	int* p = lotto;
	int i = 0, j = 0, k = 0;

	while(i<6){
		
		*(p+i) = ((rand()%45) +1);

		if(i>0){
			//compare, sort, no overlap
			for(j = 0; j<i; j++){
	
				if(*(p+i)==*(p+j)){
					i--;
					continue;
				}
				else if( *(p+i) < *(p+j) ){
					swap((p+i), (p+j));
				}
			}
		}
		i++;
	}
	while(lotto[k] != 0){
		printf("%d ", lotto[k]);
		k++;
	}
	return 0;
}




void swap(int* a,int* b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

