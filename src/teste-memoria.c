// teste-memoria.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int** a;
	int i;
	int amnt;

	amnt = sizeof(int)*102400;
	
	a = (int**) malloc(amnt);

	for(i = 0; i < amnt; i++)
		a[i] = (int*) malloc(amnt);
	
	for(i = 0; i < amnt; i++)
		free(a[i]);

	return 0;
}