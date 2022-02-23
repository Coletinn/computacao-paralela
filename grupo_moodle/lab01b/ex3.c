// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include<stdio.h>

void main() 
{
  int numero, i, j;
  printf("Digite o numero maximo: ");
  scanf("%d", &numero);
  
  if (numero % 2 != 0)
  {
    for(i = 1; i <= numero; i++) 
    {
      for(j = i; j <= numero; j++) 
      {
        printf("%d", j);
      }
    printf("\n");
    }
  }
  else
  {
    printf("Erro: numero digitado eh par");
  }
}

