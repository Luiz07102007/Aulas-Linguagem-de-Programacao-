/*
	Name: somamatriz.cpp
	Copyright: 
	Author: Luiz F Rodrigues
	Date: 16/09/26 11:49
	Description: 1) ESCREVER UM CODIGO EM QUE SEJA POSSIVEL REALIZAR 
	A SOMA DE DUAS MATRIZES QUADRADAS DE MESMA ORDEM. 
	AS MATRIZES DEVEM SER CARREGADAS NA FUNCAO MAIN() 
	E PASSADAS PARA UMA FUNCAO CHAMADA SOMARMATRIZES() 
	QUE DEVERÁ REALIZAR A SOMA. EM UMA FUNCAO SEPARADA, 
	DEVERAO SER IMPRESSAS, AS DUAS MATRIZES (MATA, E MATB) E  TAMBEM A MATRIZ SOMA (MATSOMA).
*/
#include<stdio.h>

int somarMatrizes(int [][3],int[][3]);
void imprimirMatrizes(int [][3],int[][3],int [][3]);
main()
{
	int matA[3][3] = {{3,6,2},{1,4,9},{5,6,7}}; //hard code
	int matB[3][3] = {{2,1,9},{5,3,7},{8,2,6}}; //hard code
	somarMatrizes(matA,matB);
}

int somarMatrizes(int A[][3],int B[][3])
{
	int C[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	imprimirMatrizes(A,B,C);
}

void imprimirMatrizes(int A[][3],int B[][3],int C[][3])
{
		 puts("Conteudo da matriz A: ");
  for (int i = 0; i < 3; i++) { //varia a linha
    for (int j = 0; j < 3; j++) { //varia a coluna
      printf("%d\t", A[i][j]);
    }
    puts("\n");
  }
  	 puts("Conteudo da matriz B: ");
  for (int i = 0; i < 3; i++) { //varia a linha
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
