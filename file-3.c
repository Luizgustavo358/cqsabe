// file-write.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* arquivo;
	float pi = 3.14;

	arquivo = fopen("filename.txt", "w");
	fwrite(&pi, sizeof(float), 1, arquivo);
	fclose(arquivo);

	return 0;
}
