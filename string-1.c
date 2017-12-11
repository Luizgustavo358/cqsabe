// string-1.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* str = (char*) malloc(1024);
	int size;

	printf("Digite uma string: ");
	fgets(str, 1024, stdin);

	size = strlen(str);
	printf("Tamanho da string: %i\n", size);

	return 0;
}
