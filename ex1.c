#include <stdio.h>

int maior(int x, int y, int z); 

int main()
{
  int a, b, c;
  int r;

  scanf("%d %d %d", &a, &b, &c);

  r = maior(a, b, c);

  printf("%d\n", r);

  return 0;
}

int maior(int x, int y, int z)
{
  int maior = x;
  if(maior < y)
  {
    maior = y;
  }
  if(maior < z)
  {
    maior = z;
  }

  return maior;
}