// matriz-2.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[2][2] = {{1,2}, {3,4}}, i, j;

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
			printf("a[%i][%i]: %i\t", i, j, a[i][j]);
		printf("\n");
	}

	return 0;
}