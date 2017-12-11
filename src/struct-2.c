// struct-2.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa
{
	char *name;
	char *surname;
}Person;

int main()
{
	Person a;
	Person *aPtr;

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