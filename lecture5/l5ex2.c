#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 'O'
#define SCISSOR 'X'
#define PAPER '#'

int rockPaperScissor(char user, char comp);

int main()
{
	char user = 0, comp = 0;
	int comp_temp = 0;
	int result = 0 ;
	printf("Game start!\n");

	
	srand(time(NULL));
	
	result = 1;
	while(result)
	{

	comp_temp = rand()%100;
	(comp_temp <33)? (comp = ROCK) : ((comp_temp <66) ? (comp = SCISSOR) : (comp = PAPER));


	do{
	printf("Choose Rock(O), Scissor(X), Paper(#)\n");
	printf("What is your choice: ");
	scanf(" %c", &user);
	printf("\n");
	}while(!(user == 'O' || user == 'X' || user == '#' ));

	printf("user: %s, computer: %s\n\n", ((user== 'O')?"ROCK":((user=='X')?"SCISSOR":"PAPER")),
			((comp== 'O')?"ROCK":((comp=='X')?"SCISSOR":"PAPER")));

	result = rockPaperScissor(user, comp);	
	}
	
	printf("You win\n");
	return 0;
}



int rockPaperScissor(char user, char comp)
{

	switch(user){
		case ROCK:
			switch(comp){
				case PAPER:
					;
				case ROCK:
					printf("You Lose\n\n");
					return 1;
					break;
				default:
					return 0;
			}
		case SCISSOR:
			switch(comp){
				case SCISSOR:
					;
				case ROCK:
					printf("You Lose\n\n");
					return 1;
					break;
				default:
					return 0;

			}
		case PAPER:
			switch(comp){
				case SCISSOR:
					;
				case PAPER:
					printf("You Lose\n\n");
					return 1;
					break;
				default:
					return 0;
			}
	}





}





