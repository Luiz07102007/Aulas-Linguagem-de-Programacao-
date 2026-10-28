/*
	Name: loginSenha.c
	Author: Luiz F Araujo 
	Date: 28/10/26 10:13
	Description: Programa que utiliza recursividade indireta para simular um login e senha
*/

//Seção de Importação
#include <stdio.h>

#include <string.h>
 //Seção de prototipação
void verLogin();
void verSenha();

//Variáveis globais
char user[] = "User";
int pass = 1234;

main() {
  verLogin();
}

//Função para verificar o login do user
void verLogin() {
  char login[20];
  printf("Login: ");
  gets(login);
  if (strcmp(login, user) == 0) {
    verSenha();
  } else {
    verLogin();
  }
}
//Função para verificar a senha do user
void verSenha() {

  int pwd, i;
  i = 0;
  while (i < 3) {
    printf("Senha: ");
    scanf("%d", & pwd);

    if (pass == pwd) {
      printf("Login Realizado com sucesso!!");
      return;
    }
    i++;
  }
  fflush(stdin); //zera o buffer do teclado
  verLogin();

}
