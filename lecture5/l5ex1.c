#include <stdio.h>

int main ()
{
	int days[31];

	printf("AUGUST\nSU MO TU WE TH FR SA\n");
	
	for(int i=0; i<31; i++){
		days[i] = i+1;
	}


	for(int day = 0; day <33; day++){
		if(day%7==0 && day != 0){
				printf("\n");
			}
	
		
		switch(day)
		{
			case 0:
				;
			case 1:
				printf("  ");
				break;
				
			default:
				if(days[day-2]<10){
					printf(" ");
				}
				printf("%d", days[day-2]);
				break;
		}
		printf(" ");
	}

	return 0;

}
