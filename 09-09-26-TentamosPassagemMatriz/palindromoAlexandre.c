/*
	Name: palindromoAlexandre
	Author: Luiz F Rodrigues
	Date: 09/09/26 10:10
	Description: exercicio de palindromo resolvido pelo professor Alexandre (+desafio tirar os espacos em branco)
*/

#include <stdio.h>
 //Prototipacao
int verificarPalindromo(char * );

int main() {
  char palavra[50];
  int tamanho;
  int teste;
  tamanho = sizeof(palavra) / sizeof(char); //Calcular tamanho do vetor
  printf("Digite uma palavra: ");
  gets(palavra);
  teste = verificarPalindromo(palavra);
  if (teste == 1) {
	printf("\n%s eh um palindromo",palavra);
  }
  else {
	printf("\n%s NAO eh um palindromo",palavra);
  }
}

int verificarPalindromo(char * P) {
	int i, dir, esq;
  for (i = 0; P[i] != '\0'; i++) {
    printf("%c|", P[i]);
  }
	dir = i-1;
	esq = 0;
	while(dir > esq) {
		if(P[esq] != P[dir]) {
			return 0; //falso - nao eh palindromo
		}
		else {
			esq++;
			dir--;
		}
	}
  return 1; //verdadeiro - eh um palidromo
}
