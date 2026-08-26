/*
	Name:exercicio1.cpp 
	Author: Luiz F Rodrigues
	Date: 26/08/26 10:22
	Description: programa para trocar valor entre variáves com função e ponteiro(passagem por referência)
*/

//seção de importação
#include <stdio.h>

//seção de prototipação
void trocar(int*,int*);

main() {
	int a,b;
	a = 5;//hard code
	b = 15;
	printf("endereco A: %p | valor B: %d",&a,a);
	printf("\nendereco B: %p | valor B: %d",&b,b);
	
	trocar(&a,&b); //invoke

	printf("\n\nendereco A: %p | valor A: %d",&a,a);
	printf("\nendereco B: %p | valor B: %d",&b,b);
}

//função trocar
void trocar(int *a, int *b) {
	int aux = 0;
	aux = *a;
	*a = *b;
	*b = aux;
}
