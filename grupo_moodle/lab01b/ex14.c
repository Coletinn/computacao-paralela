// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>
#include <string.h>

void inserirCaracter(char* str, int pos, char n)
{
  int tam = strlen(str);
  for (int i = tam; i >= pos; i--)
    {
      if (i >= pos)
      {
        str[i] = str[i - 1];
      }
    }
  str[pos] = n;
}


int main(void) 
{
  char str[100], c;
  int pos;

  printf("Digite o caracter a ser inserido: ");
  scanf(" %s",&c);

  printf("Digite uma string: ");
  scanf("%s",str);

  printf("Digite uma posicao para inserir um caracter: ");
  scanf("%d",&pos);
  

  printf("\nA string eh: %s",str);
  printf("\nA posicao eh: %d",pos);
  
  
  inserirCaracter(str, pos, c);

  printf("\n\nString depois da insercao: %s", str);
  
  return 0;
}