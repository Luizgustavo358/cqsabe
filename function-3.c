// voltadobro.c
#include <stdio.h>
#include <stdlib.h>

int voltadobro(int a)
{
	int resp = 2*a;
	return resp;
}

int main()
{
	int a = 3;
	int b = voltadobro(a);

	printf("B = %i\n", b);

	return 0;
}