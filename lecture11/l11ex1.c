#include <stdio.h>

#define CtoF(a) ((a * 1.8) + 32)


int main(void){
	int n = 100;
	printf("%dC == %.01fF\n", n, CtoF(n));

	return 0 ;
}
