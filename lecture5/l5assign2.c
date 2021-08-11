#include <stdio.h>
#include <math.h>


int main()
{
	int decimal = 0;
	int n_max=0;

	printf("change decimal number to binary number\n");
	printf("put in decimal number between 0 to 10000\n");
	scanf("%d",&decimal);


	while( decimal >= pow(2, n_max + 1) ){
	
		n_max++;
	}

	while(n_max >= 0){
		if(decimal >= pow(2,n_max)){
			printf("1");
			decimal = decimal - pow(2,n_max);
		}
		else printf("0");
	
		n_max--;	
	}


	return 0;
}
