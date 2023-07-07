#include <stdio.h>
int mmc(int x, int y);

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  int resultado = mmc(a, b);
  printf("%d\n", resultado);
  return 0;
}

int mmc(int x, int y)
{
  int i;
  int menor;
  if(x > y)
  {
    menor = y;;
  }
  else{
    menor = x;
  }
  for(i = menor; i < x * y; i++)
  {
    if(x % i == 0 && y % i == 0)
    {
        return i;
    }
  }
}