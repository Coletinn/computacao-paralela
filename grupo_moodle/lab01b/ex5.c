// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125


#include <stdio.h>


int main(void) 
{
  int n, lin, col, linEscolha, valor;

  printf("Digite o numero de linhas da matriz: ");
  scanf("%d", &lin);
  printf("Digite o numero de colunas da matriz: ");
  scanf("%d",&col);

  int mat[10][10];
  
  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("digite valor para posicao [%d][%d]: ",i, j);
      scanf("%d", &mat[i][j]);
    }
  }

  printf("\nDigite o numero da linha que deseja multiplicar: ");
  scanf("%d",&linEscolha);
  printf("Digite o valor que deseja multiplicar: ");
  scanf("%d",&valor);

  printf("\nMATRIZ SEM MULTIPLICAÇÃO:\n");

  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d",mat[i][j]);  
      printf(" ");
    }
    printf("\n");
  }

  for(int j = 0; j < col; j++)
  {
     mat[linEscolha][j] = mat[linEscolha][j] * valor;
   }

  printf("\nMATRIZ COM MULTIPLICAÇÃO:\n");

  printf("\n");

  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d",mat[i][j]);  
      printf(" ");
    }
    printf("\n");
  }
}


