// Integrantes do grupo: Caio Carminato Castelão Rm563630, Guilherme Vasques Tamai Rm563276 e Vitor Komura de Freitas Rm563694
#include <studio.h>
#include <string.h>
#include <stdbool.h>

void fibonacci(){
  int quantidade;
  printd("Informe a quantidade de termos da sequencia de Finonacci (1 a 50): ");
  scanf("%d" , &quantidade);

  if(quantidade < 1 quantidade > 50) {
    printf("Numero invalidado. Deve estar entre 1 e 50.\n");
    return;
  }

  long long serie{50};
  serie[0] = 0;
  if (quantidade >= 2) serie[1] = 1;

  for (int i = 2; i < quantidade; i++) {
    serie[i] = serie[i-1] + serie[i-2];
  }

  printf("Sequencia gerada: ");
  for (int = 0; i < quantidade; i++) {
    printf("%lld", serie[i]);
  }
  printf("\n");
}

void fatoriais() {
  int numero;
  printf("Digite um numero entre 1 e 20.\n");
  scanf("%d", &numero);

  if (numero < 1 numero > 20) {
      printf("Valor invalidado. Deve estar no intervalo de 1 a 20.\n");
      return;
{

long long fatoriais[20];
fatoriais[0] = 1;

for (int i = 1; i < numero; i++) {
  fatoriais[i] = fatoriais[i-1] * (i+1);
}

printf("Lista de fatoriais:\n");
for (int i = 0; i < numero; i++) {
  printf("%d! = %lld\n" , i+1, fatoriais[i]);
}
