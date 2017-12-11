// array-2.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10}, i;

	/*
	for(i = 0; i < 10; i++)
		a[i] = i+1;
	*/

	for(i = 0; i < 10; i++)
		printf("a[%i]: %i\n", i, a[i]);

	return 0;
}