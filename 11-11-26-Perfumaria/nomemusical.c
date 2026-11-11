/*
	Name: NomeMusical.c
	Author: Luiz F Rodrigues 
	Date: 11/11/26 10:29
	Description: Programa para armazenar o nome em um vetor e tocar com beep()
*/

#include<stdio.h>
#include<windows.h>

main() {
	int i;
	char nome[30];
	
	printf("Insira seu nome: ");
	gets(nome);
	
	puts("\n Conteudo do Vetor: ");
	while(1){
	for(i=0;nome[i] != '\0';i++)
	{
		printf("%c|",nome[i]);
		Beep(nome[i]*5,200);
	}
	puts("");
	}
}
