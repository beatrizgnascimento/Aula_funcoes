#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int loteria[15];
  int aposta[15], vet[15];
  int i, j;
  srand(time(NULL));

    for(i = 0; i < 15; i++)
      {
          loteria[i] = 1 + rand() % 25;
      }
  
  printf("Digite os numeros apostados:\n");
  for(i = 0; i < 15; i++)
    {
      scanf("%d", aposta[i]);
    }

  for(i = 0; i < 15; i++)
    {
        printf("Numeros sorteados %d\n", loteria[i]);
    }

  
  for(i = 0; i < 15; i++)
    {
      for(j = 0; j < 15; j++)
        {
          if(aposta[i] == loteria[j])
          {
             vet[i] = aposta[i];
            int *p = &vet[i];
            *p = (int*)malloc(15 * sizeof(int*));
          }
        }
    }

    printf("%d", vet);
 
  
  return 0;
}

