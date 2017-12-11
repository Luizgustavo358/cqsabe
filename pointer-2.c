// pointer-2.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 42;
	int* a_ptr = &a;

	printf("Valor de a: %i\n", a);
	printf("Endereco de a: %p\n", a_ptr);
	printf("Valor de a pelo endereco: %i\n", *a_ptr);

	return 0;
}
