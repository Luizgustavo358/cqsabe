// pointer-1.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	a = 2017;
	int* b;
	b = &a;
	
	printf("A: %d\n", a);
	printf("B: %p\n", b);
	
	return 0;
}
