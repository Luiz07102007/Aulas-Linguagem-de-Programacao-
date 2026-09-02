/*
	Name: caractervetorfuncaocontrario
	Author: Luiz F Rodrigues 
	Date: 02/09/26 11:22
	Description: escreva um programa que leia uma cadeia de caracteres, armazene em um vetor e passe para uma funcao chamada 
	"imprimirContrario" que deverá exibir a sequência de caracteres do fim para o começo.
*/
#include<stdio.h>

void imprimirContrario(char *);

main() 
{
	char car[30];
	printf("insira a cadeia de 30 caracteres: ");
	gets(car);
	imprimirContrario(car);
}

void imprimirContrario(char *car) {
	puts("");
	for(int i=30; i>=0; i--) 
	{	
		printf("%c", car[i]);
	
	}
}


