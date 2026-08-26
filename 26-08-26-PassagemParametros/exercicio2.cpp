/*
	Name: exercicio2.cpp
	Copyright: 
	Author: Luiz F Rodrigues
	Date: 26/08/26 11:17
	Description: "passagemParemetroGlobal"
*/

//seção de importação
#include <stdio.h>

//seção de prototipação
void trocar();
//variáveis globais
int a,b,aux;

main() {
	a = 5;//hard code
	b = 10;
	printf("A: %d",a);
	printf("\nB: %d",b);
	trocar(); //invoke
	printf("\n\nA: %d",a);
	printf("\nB: %d",b);
}

//função trocar
void trocar() {
	
	aux = a;
	a = b;
	b = aux;
}
