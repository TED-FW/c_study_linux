#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include "ted_math.h"

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

void append_data(LIST* L, char data);

void append_list(LIST* L);

void insert_data_node(LIST* L, int input_data, int idx);

void get_score(LIST* L, int n);

void get_score_r(LIST* L, int n);

float average_list(LIST* L);

void convert_int2binary(LIST* L, int num_int, int bit);

void print_32bit(LIST* L);

void binary_2_hex(LIST* L2, LIST* L16);

void print_hex(LIST* L16);

void circular_right_shift(LIST* L, int n_shift);

#endif
