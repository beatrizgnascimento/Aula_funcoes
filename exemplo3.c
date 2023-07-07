#include <stdio.h>
void troca(int *a, int *b);

int main()
{
  int a = 2;
  int b = 3;

  printf("Antes da funcao: A = %p B = %p\n", &a, &b);

  troca(&a, &b); //endereço de memória

  return 0;
}

void troca(int *a, int *b)
{
  int temp;
  printf("Ao entrar na funcao: A = %p B = %p\n", a, b);

  temp = *a;
  *a = *b;
  *b = temp;

  printf("Ao sair da funcao: A = %p B = %p\n", &a, &b);
}