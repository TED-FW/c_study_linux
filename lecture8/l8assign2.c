#include <stdio.h>

void get3by3int(int (*arr)[3]);

void arr33_multifly(int (*arr1)[3], int (*arr2)[3], int (*result)[3] );

void display_33arr(int (*result)[3]);

int main(void)
{
	int arr1 [3][3] = {0};
	int arr2 [3][3] = {0};

	int result [3][3] = {0};

	get3by3int(arr1);
	get3by3int(arr2);
	
	
	arr33_multifly(arr1,arr2, result);

	for(int r = 0; r<3; r++){
		for(int c = 0; c<3; c++){
			printf("%5d", result[r][c]);
		}
	
		printf("%c",'\n');
	}

		return 0;
}


void get3by3int(int (*arr)[3])
{
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			scanf("%d",&arr[i][j]);
		}
	}
}


void arr33_multifly(int (*arr1)[3], int (*arr2)[3], int (*result)[3] )
{
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			for(int k = 0; k<3; k++){
				result[i][j] += (arr1[i][k] * arr2[k][j]);
			}
		}
	}
}
