#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

struct list{
	int cnt;
	struct node* head;
};

typedef struct list LIST;

struct node{
	int data;
	struct node* next;
};

typedef struct node NODE;


void append_list(LIST* L);

void get_score(LIST* L, int n);

void get_score_r(LIST* L, int n);

float average_list(LIST* L);





#endif
