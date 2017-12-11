// function-2.c
#include <stdio.h>
#include <stdlib.h>

void mostraint(int a);

int main()
{
	int a;

	printf("Informe um int: ");
	scanf("%i", &a);

	mostraint(a);

	return 0;
}

void mostraint(int a)
{
	printf("Int: %i\n", a);
}
