/*
	Name: multmatriz.cpp
	Copyright: 
	Author: Luiz F Rodrigues
	Date: 16/09/26 12:12
	Description: multiplicacao matriz 
*/
#include<stdio.h>
int multiplicarMatrizes(int [][2],int[][3]);
void imprimirMatrizes(int [][2],int[][3],int [][3]);

main()
{
		int matA[3][2] = {{2,4},{6,7},{8,7}}; //hard code
	int matB[2][3] = {{8,2,1},{7,6,5}}; //hard code
	int matC[3][3] = {multiplicarMatrizes(matA,matB)};
}

int multiplicarMatrizes(int A[][2],int B[][3]) {
	int C[3][3],i,j;
	for(j=0;j<2;j++){
		int C[i][j] = A[i][j]*B[i][j] + A[i+1][j]*B[i][j+1];
	}
	imprimirMatrizes(A,B,C);
}

void imprimirMatrizes(int A[][2],int B[][3],int C[][3])
{
	 puts("Conteudo da matriz A: ");
  for (int i = 0; i < 3; i++) { //varia a linha
    for (int j = 0; j < 2; j++) { //varia a coluna
      printf("%d\t", A[i][j]);
    }
    puts("\n");
  }
  	 puts("Conteudo da matriz B: ");
  for (int i = 0; i < 2; i++) { //varia a linha
    for (int j = 0; j < 3; j++) { //varia a coluna
      printf("%d\t", B[i][j]);
    }
    puts("\n");
  }
  	 puts("Conteudo da matriz C: ");
  for (int i = 0; i < 3; i++) { //varia a linha
    for (int j = 0; j < 3; j++) { //varia a coluna
      printf("%d\t", C[i][j]);
    }
    puts("\n");
  }
}
