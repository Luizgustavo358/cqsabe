// file-read.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* arquivo;
	float pi;

	arquivo = fopen("filename.txt", "r");

	fread(&pi, sizeof(float), 1, arquivo);
	fclose(arquivo);

	printf("Pi = %f\n", pi);

	return 0;
}
