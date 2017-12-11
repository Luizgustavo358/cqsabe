// pointer-0.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;

	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	printf("Tamanho em bytes de um int: %i\n", sizeof(a));
	printf("Endereco de a: %p\n", pa);
	printf("Endereco de b: %p\n", pb);
	printf("Endereco de c: %p\n", pc);

	return 0;
}
