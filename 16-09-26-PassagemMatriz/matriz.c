/*
	Name: matriz.cpp
	Author: Luiz F Rodrigues
	Date: 16/09/26 09:51 
	Description: Programa para manipular matrizes dentro de uma função 
*/
#include<stdio.h>

//protipacao
void imprimirMatriz(int [][3]);



main()
{
	//int mat[3][3]; // Matriz quadrada de ordem 3
	int mat[3][3] = {{7,8,2},{0,1,4},{5,6,9}}; // hard code
	imprimirMatriz(mat);
}

void imprimirMatriz(int M[][3])
{
	 puts("Conteudo da matriz: ");
  for (int i = 0; i < 3; i++) { //varia a linha
    for (int j = 0; j < 3; j++) { //varia a coluna
      printf("%d\t", M[i][j]);
    }
    puts("\n");
  }
}
