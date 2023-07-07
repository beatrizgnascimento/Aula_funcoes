#include <stdio.h>
#include <stdlib.h>

int * aloca(int n);
void leitura(int *vet, int n);
void imprime(int *vet, int n);
void ordena(int *vet, int n);
void swap(int *a, int *b);


int main()
{
  int n;
  int *vet = NULL;

  scanf("%d", &n); //leitura de n

  vet = aloca(n);
  leitura(vet, n);
  ordena(vet, n);
  imprime(vet, n);

  return 0;
}

int * aloca(int n) //criação de um vet em forma de ponteiro
{
  int *vet = NULL;

  vet = (int*)malloc(n * sizeof(int));

  if(vet == NULL) //teste
  {
    exit(1);
  }

  return vet;

}

void leitura(int *vet, int n)
{
  int *i = NULL;

  for(i = vet; i < vet + n; i++)
  {
    scanf("%d", i); 
  }
}

void imprime(int *vet, int n)
{
  int *i = NULL;
  for(i = vet; i < vet + n; i++)
  {
    printf("%d  ", *i); 
  }
  printf("\n");
}

void ordena(int *vet, int n)
{
  int trocou = 1; //sim, 0 não
  int *i = NULL;

  while(trocou == 1)
  {
    trocou = 0;
    for(i = vet; i < vet + n - 1; i++)
    {
        if(*i > *(i + 1))
        {
          //trocar os elementos
          swap(i, i + 1);
          trocou = 1;
        }
    }
  }

}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}