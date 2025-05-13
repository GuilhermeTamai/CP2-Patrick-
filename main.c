// Integrantes do grupo: Caio Carminato Castelão Rm563630, Guilherme Vasques Tamai Rm563276 e Vitor Komura de Freitas Rm563694
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void fibonacci(){
  int quantidade;
  printf("Informe a quantidade de termos da sequencia de Fibonacci (1 a 50): ");
  scanf("%d" , &quantidade);

  if(quantidade < 1 || quantidade > 50) {
    printf("Numero invalido. Deve estar entre 1 e 50.\n");
    return;
  }

  long long serie[50];
  serie[0] = 0;
  if (quantidade >= 2) serie[1] = 1;

  for (int i = 2; i < quantidade; i++) {
    serie[i] = serie[i-1] + serie[i-2];
  }

  printf("Sequencia gerada: ");
  for (int i = 0; i < quantidade; i++) {
    printf("%lld ", serie[i]);
  }
  printf("\n");
}

void fatoriais() {
  int numero;
  printf("Digite um numero entre 1 e 20:\n");
  scanf("%d", &numero);

  if (numero < 1 || numero > 20) {
      printf("Valor invalido. Deve estar no intervalo de 1 a 20.\n");
      return;
  }

  long long fatoriais[20];
  fatoriais[0] = 1;

  for (int i = 1; i < numero; i++) {
    fatoriais[i] = fatoriais[i-1] * (i+1);
  }
  printf("Lista de fatoriais:\n");
  for (int i = 0; i < numero; i++) {
    printf("%d! = %lld\n" , i+1, fatoriais[i]);
  }
}

void palindromo() {
  char texto[101];
  printf("Digite uma palavra para verificar se e palindromo: ");
  scanf("%s", texto);

  int tamanho = strlen(texto);
  bool verifica_palindromo = true;

  for (int i = 0; i < tamanho/2; i++) {
    if (texto[i] != texto[tamanho-1-i]) {
      verifica_palindromo = false;
      break;
    }
  }

  if (verifica_palindromo) {
    printf("A palavra digitada e um palindromo.\n");
  } else {
    printf("A palavra digitada NAO e um palindromo.\n");
  }
}

void substring() {
  char texto1[101], texto2[101];
  printf("Digite a primeira string: ");
  scanf("%s", texto1);
  printf("Digite a segunda string: ");
  scanf("%s", texto2);

  int achou = 0;
  int tamanho1 = strlen(texto1);
  int tamanho2 = strlen(texto2);

  for (int i = 0; i <= tamanho1 - tamanho2; i++) {
    int j;
    for (j = 0; j < tamanho2; j++) {
      if (texto1[i + j] != texto2[j]) {
        break;
      }
    }
    if (j == tamanho2) {
      achou = 1;
      break;
    }
  }

  if (achou) {
    printf("A segunda string esta presente na primeira.\n");
  } else {
    printf("A segunda string NAO esta presente na primeira.\n");
  }
}


