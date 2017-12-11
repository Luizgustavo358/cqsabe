// array-1.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10], i;

	for(i = 0; i < 10; i++)
		a[i] = i+1;

	for(i = 0; i < 10; i++)
		printf("a[%i]: %i\n", i, a[i]);

	return 0;
}