#include <stdio.h>

int main ()
{
	int a=0, num=0, line=0, space=0;
	char c = 0;

	while((c = getchar()) != EOF ){
		
		if( c == 'a') a += 1;
		else if ( '0' <= c && c <= '9') num+=1;
		else if ( c == 10) line++;
		else if ( c == ' ') space++;
		
	}
	printf(" a : %d\n num : %d\n line : %d\n space: %d\n", a, num, line, space);

	return 0;
}
