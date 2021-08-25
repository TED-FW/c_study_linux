#include <stdio.h>

int global_val = 30;
int *value;
int *refer;

void call_by_value(int *val)
{
	printf("val: %p\n", val);
	printf("*val: %d\n", *val);

	val = &global_val;
	printf("val: %p\n",val);
	printf("*val: %d\n", *val);
	printf("value : %p\n\n\n", value);
}

void call_by_refer(int **ref)
{
	*ref = &global_val;
}

int main(void)
{
	int local_val = 10;
	value = &local_val;
	refer = &local_val;

	printf("value : %p\n", value);
	printf("local val: %p\n", &local_val);
	printf("global value: %p\n\n\n", &global_val);

	printf("before : *value=%d, *refer=%d\n", *value, *refer);
	call_by_value(value);
	printf("After call by value: *value=%d, *refer=%d\n", *value, *refer);
	call_by_refer(&refer);
	printf("After call by refer : *value=%d, *refer=%d\n", *value, *refer);





	return 0;
}
