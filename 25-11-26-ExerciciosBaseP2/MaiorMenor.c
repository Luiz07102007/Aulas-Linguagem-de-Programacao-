/*
	Name: MaiorMenor.c
	Author: Luiz F Rodrigues
	Date: 25/11/26 11:45
	Description: Faça uma função que encontre o maior elemento de um vetor de inteiros e outra que encontre o menor.
*/

#include <stdio.h>
void maiornumero(int*,int);
void menornumero(int*,int);
int i;
main()
{
	int tamanho = 0;
	printf("Insira o tamanho do vetor: ");
	scanf("%d",&tamanho);
	int vet[tamanho];
	for(i = 0; i < tamanho; i++) {
		printf("Insira o conteudo do vetor na posicao [%d]: ",i+1);
		scanf("%d",&vet[i]);
	}
        printf("Conteudo do Vetor: ");
	for(i = 0; i < tamanho; i++) {
		printf("%d|",vet[i]);
	}
	maiornumero(vet,tamanho);
	menornumero(vet,tamanho);
}

void maiornumero(int*v,int t) {
	int m = 0;
	for(i = 0; i < t; i++) {
		if (v[i] > m) {
			m = v[i];
		}
	}
	printf("\nO maior numero eh: %d\n",m);
}

void menornumero(int*v,int t) {
	int m = v[0];
	for(i = 0; i < t; i++) {
		if (v[i] < m) {
			m = v[i];
		}
	}
	printf("O menor numero eh: %d\n",m);
}
