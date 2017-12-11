// pointer-3.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* a, i;

	a = (int*) malloc(sizeof(int));
	
	for(i = 0; i < sizeof(int); i++)
		a[i] = i+1;
	for(i = 0; i < sizeof(int); i++)
		printf("a[%i]: %i\n", i, a[i]);

	free(a);

	return 0;
}
