// function-1.c
#include <stdio.h>
#include <stdlib.h>

void mostraint(int a)
{
	printf("Int: %i\n", a);
}

int main()
{
	int a;

	printf("Informe um int: ");
	scanf("%i", &a);

	mostraint(a);

	return 0;
}
