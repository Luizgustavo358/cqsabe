// matriz-1.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[2][2], i, j;
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
			a[i][j] = i+j;
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
			printf("a[%i][%i]: %i\t", i, j, a[i][j]);
		printf("\n");
	}

	return 0;
}
