#include "ted_math.h"


int pow_ted(int a, int b)
{
	int tmp = 1;
	for(int i =0; i<b; i++){
		tmp *= a;
	}
	return tmp;
}

