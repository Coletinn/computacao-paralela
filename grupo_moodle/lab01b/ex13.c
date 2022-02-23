// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>
#include <string.h>

void removerCaracter(char* str, int pos)
{
  int tam = strlen(str);
  if (pos >= tam)
  {
    printf("error");
  }
  for (int i = pos; i < tam; i++)
    {
      str[i] = str[i + 1];
    }
}

int main(void) 
{
  char str[100];
  int pos;

  printf("Digite uma string: ");
  scanf("%s",str);

  printf("Digite uma posicao para remover um caracter: ");
  scanf("%d",&pos);

  printf("\nA string eh: %s",str);
  printf("\nA posicao eh: %d",pos);
  
  removerCaracter(str, pos);

  printf("\n\nString depois da remocao: %s", str);
  
  return 0;
}