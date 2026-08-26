/*
	Name: exercicio4.cpp
	Author: Luiz F Rodrigues
	Date: 26/08/26 11:54
	Description: "Ponteiros" Programa para realizar a manipulação dos mesmos.
*/
#include<stdio.h>

main() {
	short int vetor[20]; // vetor de inteiros
	for(int i =0;i < 20; i++) {
		printf("%p\n",&vetor[i]);
	}
	/*
	int *ptrA = &a;
	printf("A: %d",a);
	printf("\nconteudo apontado por ptrA: %d",*ptrA);
	printf("\nendereco de A: %p",&a);
	printf("\nendereco de ptrA: %p",&ptrA);
	*/
}
