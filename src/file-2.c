// file-scanf.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* arquivo;
	float pi;

	arquivo = fopen("pi-formatted.txt", "rt");
    fscanf(arquivo, "%f", &pi);
	fclose(arquivo);

	printf("Pi = %f\n", pi);

	return 0;
}
