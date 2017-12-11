// array-3.c
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main()
{
	int a[TAM], i;

	for(i = 0; i < TAM; i++)
		a[i] = i+1;

	for(i = 0; i < TAM; i++)
		printf("a[%i]: %i\n", i, a[i]);

	return 0;
}