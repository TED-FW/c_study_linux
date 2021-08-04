#include <stdio.h>

int main (){
	int fn_minus = 0;
	int	fn_plus = 0;
	int fn = 0;

	int n = 0;

	while (n<20){
		
		switch(n){
		case 0:
			fn = 0;
			break;
		case 1:
			fn = 1;
			break;
		default:
			break;
		}

		printf("f%d = %d \n", n, fn);
		fn_plus = fn + fn_minus;
		fn_minus = fn;
		fn = fn_plus;

		n++;

	}

	return 0;

}


