#include <stdio.h>

long fib(int n);

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%ld\n", fib(n));

	return 0;
}


long fib(int n)
{
	long fib_sum = 0;

	switch(n)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			fib_sum = fib(n-1) + fib(n-2);
			return fib_sum;
			break;

	}
}
