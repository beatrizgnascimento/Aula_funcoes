#include <stdio.h>

void imprimeDia(int n);

int main()
{
  int n;

  scanf("%d", &n);

  //chamar a função
  imprimeDia(n);


  return 0;
}

void imprimeDia(int n)
{
  if(n == 1)
  {
    printf("Domingo");
  }
  else if(n == 2)
  {
    printf("Segunda");
  }
   else if(n == 3)
  {
    printf("Terca");
  }
   else if(n == 4)
  {
    printf("Quarta");
  }
   else if(n == 5)
  {
    printf("Quinta");
  }
   else if(n == 6)
  {
    printf("Sexta");
  }
   else if(n == 7)
  {
    printf("Sabado");
  }
}