//struct-1.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa
{
	char *name;
	char *surname;
};

int main()
{
	struct pessoa a;
	struct pessoa *aPtr;

	a.name = (char*) malloc(sizeof(char)*6);
	a.surname = (char*) malloc(sizeof(char)*6);

	strcpy(a.name, "Felipe");
	strcpy(a.surname, "Megale");
	aPtr = &a;

	printf("%s %s\n", a.name, a.surname);
	printf("%s %s\n", aPtr->name, aPtr->surname);
	printf("%s %s\n", (*aPtr).name, (*aPtr).surname);
	
	return 0;
}