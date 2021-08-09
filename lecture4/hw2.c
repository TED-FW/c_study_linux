#include <stdio.h>
#include <stdlib.h>

int main()
{

	int astar =0, astar_num=0, space =0;
	int n = 0, n_abs = 0;

	
	do{
		space = 0;
		astar = 0;
		
		//decrease number of space after 5
		if(n>=5) {
			n_abs = abs(8-n);
		}
		else{
			n_abs = n;
		}

		//display space
		while(space < n_abs){
			printf("%c", ' ');
			space++;
		}
	
		//set the number of asterisk
		astar_num = 9 - (2 * space);
	
		//display asterisk
		do{
			printf("%c", '*');
			astar++;
		}while(astar < astar_num);
		

		printf("\n");
		n++;
	}while(n < 9);


	return 0;
}
