/*
	Name: mediaaritmeticafuncao
	Author: Luiz F Rodrigues
	Date: 02/09/26 12:09
	Description: elabore um programa que receba um vetor com 6 notas de um aluno,armazene em um vetor, passe para uma função 
	calcular a sua média aritmética, apontando se ele foi aprovado 
	ou não em uma função específica para tal
*/
//seção de importação
#include<stdio.h>
 //seção de prototipação
void analisarMedia(float);
float calcularMedia(float * );

main() {
  float notas[6];
  float media;
  media = 0;
  for (int i = 0; i < 6; i++) {
    printf("insira a %da nota: ", i + 1);
    scanf("%f", & notas[i]);
  }
  media = calcularMedia(notas);
  analisarMedia(media);
}
//função calcularMedia
float calcularMedia(float * notas) {
  float media;
  for (int i = 0; i < 6; i++) {
    media += notas[i];
  }
  return media / 6;
}

//função analisarMedia
void analisarMedia(float media) {
  if (media >= 6.0) {
    printf("aprovado com media: %.2f", media);
  } else if (media >= 4.0) {
    printf("fazer exame com media: %.2f", media);
  } else {
    printf("reprovado com media: %.2f", media);
  }
}
