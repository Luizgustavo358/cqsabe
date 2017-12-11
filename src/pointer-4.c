// pointer-4.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int** a = (int**) malloc(sizeof(int));
	int i, j;

	for(i = 0; i < sizeof(int); i++)
		a[i] = (int*) malloc(sizeof(int));

	for(i = 0; i < sizeof(int); i++)
		for(j = 0; j < sizeof(int); j++)
			a[i][j] = i+j;

	for(i = 0; i < sizeof(int); i++)
	{
		for(j = 0; j < sizeof(int); j++)
			printf("a[%i][%i]: %i\t", i, j, a[i][j]);
		printf("\n");
	}

	for(i = 1; i < sizeof(int); i++)
		free(a[i]);

	free(a);

	return 0;
}
