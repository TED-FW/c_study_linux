#include <stdio.h>

void swqp1(int a, int b){
	int t = a;
	a = b;
	b = t;
}

void swqp2(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}

int main ()
{
	int a = 3;
	int b = 5;
	swap1(a, b);
	printf("%d %d\n", a, b);
	swqp2(&a,&b);
	printf("%d %d\n", a, b);

	return 0;
}
