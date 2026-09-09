/*
	Name: CriptografiaAlexandre
	Author: Luiz F Rodrigues
	Date: 09/09/26 11:38
	Description: exercicio de criptografia resolvido pelo professor Alexandre 
*/
#include<stdio.h>

void merge(char * , char * ); //função para combinar os dois vetores

main() {
  char nome[30];
  char docs[21];

  printf("Digite seu nome completo: ");
  gets(nome);
  printf("Digite seu CPF e RG: ");
  gets(docs);
  merge(nome, docs);
}

void merge(char * nome, char * docs) {
  int i, j;
  for (i = 0; nome[i] != '\0'; i++) {}
  int tam = i + 21;
  printf("tam:%d", tam);
  char crypto[tam];

  for (i = 0, j = 0; i < tam; i++) {
    if (nome[i] != '\0') {
      crypto[j] = nome[i];
      crypto[j + 1] = docs[i];
      j = j + 2;
    }

  }

  puts("\n\n====> Conteudo do vetor Crypto: \n");
  for (i = 0; crypto[i] != '\0'; i++) {
    printf("%c|", crypto[i]);
  }
}