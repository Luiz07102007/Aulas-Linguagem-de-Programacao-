/*
	Name: Exercicio1.c
	Author: Luiz F Rodrigues
	Date: 25/11/26 10:06
	Description: Programa pra manipular um vetor com a qtd de elementos escolhido pelo usuario
*/

#include <stdio.h>

int verificaNum(qtd);

main()
{
	int qtd = 0;
	int i;
	printf("Qual a quantidade de elementos a serem armazenados no vetor?: ");
	scanf("%d",&qtd);
	qtd = verificaNum(qtd);
	int vet[qtd];	
	printf("\nDigite %d elementos: ",qtd);
	 for(i = 0; i<qtd; i++){
		scanf("%d",&vet[i]);	
	}
	//imprimindo conteudo do vetor
		printf("conteudo do vetor: ");
	for(i = 0; i<qtd; i++) {
		printf("%d|",vet[i]);
	}
	//imprimindo numeros pares do vetor
	printf("\nNumeros pares: ");
	for(i = 0; i<qtd; i++) {
		if (vet[i]%2 == 0) {
			printf("%d|",vet[i]);
		}
	}
	//imprimindo numeros maiores que 10
	printf("\nNumeros maiores que 10: ");
	for(i = 0; i<qtd; i++) {
		if (vet[i] > 10) {
			printf("%d|",vet[i]);
		}
	}
	//imprimindo numeros onde o indice eh impar
	printf("\nApenas os que ocupam indices impares:");
	for(i = 0; i<qtd; i++) {
		if (i%2 != 0) {
			printf("%d|",vet[i]);
		}
	}

	//imprimindo vetor ao contrario
	printf("\nConteudo do vetor ao contrario: ");
	for(i = qtd-1; i >= 0; i--) {
			printf("%d|",vet[i]);
		}
	}

int verificaNum(qtd) {
	while (qtd <= 0) {
		printf("Numero invalido, digite novamente: ");
		scanf("%d",&qtd);
	}
	return qtd;
}
