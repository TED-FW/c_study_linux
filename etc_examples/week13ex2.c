#include <stdio.h>

#define INPUT_MAX 1000


int main(void){
	char words[INPUT_MAX] = {0};
	int low2cap = 'a'-'A';
	int i = 0;

	printf("write a word using less than 1000 alphabet \n: ");
	scanf("%s", words);

	for(i = 0 ; i < INPUT_MAX; i++){
		if(words[i] == 0){
			break;
		}
		else if(words[i] >= 'a' && words[i] <= 'z'){
			words[i] -= low2cap;
		}
	}
	printf("%s", words);

	return 0;
}
