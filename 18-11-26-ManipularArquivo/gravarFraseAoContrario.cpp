/*
	Name: gravarFraseAoContrario
	Author: Luiz F Rodrigues
	Date: 18/11/26 10:48
	Description: Fazer um programa que leia uma frase já gravada no arquivo e a mostre na tela ao contrário, ao final grava esta frase no mesmo arquivo
*/

#include<stdio.h>
#define MAX_LINHA 128
main()
{
	FILE *arq = fopen("frase.txt","r");
	
	if (arq == NULL) 
	{
		perror("erro ao abrir o arquivo");
		return 1;
	}
	char line[MAX_LINHA];
	
	printf("Conteudo do Arquivo: ");
	while(fgets(line, sizeof(line), arq) != NULL) {
			printf("%s",line);
		}
		
		int tamanho;
		while(line[tamanho] != '\0'){
			tamanho++;
		}
		
		char inverte[tamanho];
		int aux = tamanho;
		printf("Conteudo Invertido: ");
		for(int i = 0;i < aux;i++) {
			inverte[i] = line[--tamanho];
			printf("%c",inverte[i]);
		}
		
		fclose(arq);
		
		arq = fopen("frase.txt","a");
		
		fprintf(arq,"\n Conteudo do arquivo invertido: ");
		for(int i = 0;i < aux;i++) {
			fprintf(arq,"%c",inverte[i]);
		}
		
		printf("\n Arquivo Atualizado com sucesso!!");
	}
