#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char words[5][20] = {"programming", "practice", "computer", "computer", "123456"};

	printf("length %ld, %ld\n", strlen(words[0]), strlen(words[1]));
	printf("compare 1 and 2 : %d\n", strcmp(words[1], words[2]));
	printf("compare 2 and 1 : %d\n", strcmp(words[2], words[1]));
	printf("compare 2 and 3 : %d\n", strcmp(words[2], words[3]));
	printf("string to long %ld\n", strtol(words[4], NULL, 10));
	return 0;


}
