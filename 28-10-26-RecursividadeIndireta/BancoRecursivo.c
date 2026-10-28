/*
	Name: BancoRecursivo.c
	Author: Luiz F Araujo
	Date: 28/10/26 10:55
	Description: Crie um programa para realizar ops financeiras em uma conta corrente de 
	um cliente com as seguintes operações: consultar saldo, realizar depósito, efetuar saque, trocar senha
*/

#include<stdio.h>

void consultarSaldo();
void realizarDeposito();
void efetuarSaque();
void trocarSenha();
void verificarLogin();
void verificarSenha();
void mostrarMenu();
int senha = 123;
float saldo = 0.0;
int codbanco = 123;
main() {
  printf("--------------BANCO MASTER---------------\n");
  verificarLogin();
  verificarSenha();
  mostrarMenu();
}

//verificarLogin
void verificarLogin() {
  int nconta;
  printf("Insira o Numero da conta : ");
  scanf("%d", & nconta);
  if (codbanco == nconta) {
    return;
  } else {
    verificarLogin();
  }
}
//verificarSenha
void verificarSenha() {
  int s, i;

  for (i = 0; i < 3; i++) {
    printf("Senha: ");
    scanf("%d", & s);

    if (senha == s) {
      printf("Login Realizado com sucesso!!\n");
      i = 3;
      system("pause");
      system("cls");
    }
  }

}
//MostrarMenu
void mostrarMenu() {
  int op;
  op = 0;
  puts("===============================================");
  printf("1 - Consultar Saldo\n2 - Realizar Deposito\n3 - Efetuar Saque\n4 - Trocar Senha\n");
  puts("===============================================");
  scanf("%d", & op);

  switch (op) {
  case 1:
    consultarSaldo();
    break;
  case 2:
    realizarDeposito();
    break;
  case 3:
    efetuarSaque();
    break;
  case 4:
    trocarSenha();
    break;
  default:
    puts("opcao invalida - Digite Novamente");
  }
}

//consultarSaldo
void consultarSaldo() {
  system("cls");
  verificarSenha();
  int op = 0;
  system("cls");
  puts("===============================================");
  printf("SALDO: R$%f\n", saldo);
  puts("===============================================");
  printf("<== Digite 1 para voltar ao menu principal\n");
  scanf("%d", & op);
  system("cls");
  switch (op) {
  case 1:
    mostrarMenu();
  }
}

//realizarDeposito
void realizarDeposito() {
  system("cls");
  verificarLogin();
  verificarSenha();
  float deposito;
  deposito = 0.0;
  int op = 0;
  puts("===============================================");
  printf("Insira o valor do deposito: ");
  scanf("%f", & deposito);
  saldo = saldo + deposito;
  puts("===============================================");
  printf("<== Digite 1 para voltar ao menu principal\n");
  scanf("%d", & op);
  system("cls");
  switch (op) {
  case 1:
    mostrarMenu();
  }
  return;
}

//efetuarSaque
void efetuarSaque() {
  system("cls");
  verificarLogin();
  verificarSenha();
  float saque;
  saque = 0.0;
  int op = 0;
  puts("===============================================");
  printf("Insira o valor do saque: ");
  scanf("%f", & saque);
  puts("===============================================");
  if (saque > saldo) {
    printf("Voce nao possui saldo suficiente para este saque.\n ");
  }
  printf("<== Digite 1 para voltar ao menu principal\n");
  scanf("%d", & op);
  system("cls");
  switch (op) {
  case 1:
    mostrarMenu();
  }
  return;
}

//trocarSenha
void trocarSenha() {
  system("cls");
  int op = 0;
  puts("===============================================");
  int s, s2;
  s2 = s = 0;
  printf("Insira a senha antiga: ");
  scanf("%d", & s);
  printf("Insira a senha antiga novamente: ");
  scanf("%d", & s2);
  if (s = s2) {
    printf("Insira a nova senha: ");
    scanf("%d", & senha);
  } else {
    printf("senhas nao compativeis!");
  }
  printf("<== Digite 1 para voltar ao menu principal\n");
  scanf("%d", & op);
  system("cls");
  switch (op) {
  case 1:
    mostrarMenu();
  }
  return;
}
