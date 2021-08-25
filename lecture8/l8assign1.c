#include <stdio.h>
#include <string.h>


int main(void)
{
	int i = 0;
	int str1_size = 0;
	char str1[100] = {0};
	char str2[100] = {0};
	

	while( (str1[str1_size] = getchar()) != '\n')   //&& str1[i] != EOF
	{

		str1_size++;
	}
	i = str1_size;
	str1[str1_size] = '\0';


	printf("strlength: %ld\n\n",strlen(str1));

	while(str1_size>0){
		str2[i-str1_size] = str1[str1_size-1];
	
		str1_size--;
	}




	printf("strcmp result: %d\n",strcmp(str1,str2));
	if(	strcmp(str1,str2) == 0){
		printf("this string is symetric\n");
	}
	else{
		printf("this string is not symetric\n");
	}
	return 0;
}
