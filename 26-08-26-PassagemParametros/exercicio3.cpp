/*
	Name: exercicio3.cpp
	Copyright: 
	Author: Luiz F Rodrigues
	Date: 26/08/26 11:35
	Description: trocando valor variável sem usar aux (VARIÁVEIS LOCAIS)
*/

//seção de importação
#include <stdio.h>

//seção de prototipação
void trocar(int*,int*);

main() {
	int a,b;
	a = 67;//hard code
	b = 69;
	printf("A: %d",a);
	printf("\nB: %d",b);
	trocar(&a,&b); //invoke
	printf("\n\nA: %d",a);
	printf("\nB: %d",b);
}

//função trocar
void trocar(int *a, int *b) {
	
	
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
}
