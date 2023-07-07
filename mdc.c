#include <stdio.h>
int mdc(int x, int y);


int main()
{
  int a, b;
  int resultado;
  scanf("%d %d", &a, &b);

  resultado = mdc(a, b);
  printf("%d", resultado);

  return 0;
}
int mdc(int x, int y)
{
  int i;
  int prod = 1;
  int menor;
  int mdc = 1;
  if(x > y)
  {
    menor = y;
  }
  else
  {
    menor = x;
  }

  for(i = 2; i <= menor; i++)
  {
    if(x % i == 0 && y % i == 0)
    {
      mdc = i;
    }
  }
  return mdc;
}
