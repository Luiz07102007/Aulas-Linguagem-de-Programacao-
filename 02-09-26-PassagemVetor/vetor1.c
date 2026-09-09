/*
	Name:vetor1.cpp
	Author: Luiz F Rodrigues
	Date: 02/09/26 10:11
	Description: 
*/
//seção de importação
#include<stdio.h>
//seção de prototipação
int lerNum();
void imprimirVetor(int*);

main()
{
	
int vet[5];

//carga do vetor
for(int y=0;y < 5;y++) {
	vet[y]=lerNum();
	}
	
imprimirVetor(vet);

}	

//função ler número
int lerNum()
{
	int num=0;
	printf("digite numero: ");
	scanf("%d",&num);
	return num;
}

//função imprimir vetor
void imprimirVetor(int *V)
{
	puts("\n---Conteudo do Vetor---");
//imprimindo o conteúdo do vetor
for(int x=0;x < 5;x++) {
	printf("%d|",V[x]);
	}
}
