#include <stdio.h>
#include <string.h>

void swap(char** , char**);
void bubble_sort(char* words[10]);


int main (void)
{
	char* words[10] = {
		"computer", "windows", "window", "linux",
		"apple", "banana", "time", "help",
		"game", "money"};
	bubble_sort(words);
	for(int i = 0; i<10; i++){
		printf("%s\n", words[i]);
	}
}

void swap(char** a, char** b){
	char* t;
	t = *a;
	*a = *b;
	*b = t;
	
}

void bubble_sort(char* words[10]){
	for(int n = 10; n > 1; n--){
		for(int i = 0; i < n-1; i++){
			if(strlen(words[i]) > strlen(words[i+1])){
				swap(&words[i],&words[i+1]);
			}
			else if(strlen(words[i]) == strlen(words[i+1])){
				if(strcmp(words[i],words[i+1])>0){
					swap(&words[i],&words[i+1]);
				}
			}
		}
	}
}
