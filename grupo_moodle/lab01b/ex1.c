// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>
#include <limits.h>

int main(void) {
  int matriz[3][3];
  int menor = INT_MAX;
  int i, j, linha;

  printf("Matriz quadrada de 3 linhas e 3 colunas\n\n");

  for (i = 0; i < 3; i++)
  {
    printf("digite 3 numeros separados por espaço (linha %d): ", i);
    for (j = 0; j < 3; j++)
    {
       scanf("%d",&matriz[i][j]);
       if (matriz[i][j] < menor)
       {
         menor = matriz[i][j];
         linha = i;
       }
    }
  }
  printf("menor:%d",menor);
  printf("\nlinha do menor:%d",linha);
}