// file-printf.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* arquivo;
	float pi = 3.14;
	
	arquivo = fopen("pi-formatted.txt", "wt");
    fprintf(arquivo, "%f", pi);
	fclose(arquivo);

	return 0;
}
