// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>
#include <string.h>

int buscarCaracter(const char* str, char letra)
{
  const char* temp = str;
    while (*temp != 0 && *temp != letra)
        temp++;
    return *temp == 0 ? -1 : temp - str;
}

int main(void) 
{
  char str[100];
  char letra;

  printf("Digite uma string: ");
  scanf("%s",str);
  printf("Digite a letra a ser encontrada: ");
  scanf(" %c",&letra);

  int pos = buscarCaracter(str, letra);
  
  printf("\nA string e: %s",str);
  printf("\nA posicao e: %d",pos);
  
  

  
  
  return 0;
}