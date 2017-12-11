// voltaquadrado.c
#include <stdio.h>
#include <stdlib.h>

float voltaquadrado(float a)
{
	float resp = a*a;
	return resp;
}

int main()
{
	float a = 3.14;
	float b = voltaquadrado(a);

	printf("B = %f\n", b);

	return 0;
}