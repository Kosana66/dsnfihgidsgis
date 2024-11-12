#include <stdio.h>
#include <stdlib.h>

int main() {

	int* broj;
	broj = malloc(sizeof(int));
	printf("Unesite broj: ");
	scanf_s("%d", broj);
	printf("Uneti broj je %d \n", *broj);
	free(broj);

	return 0;
}