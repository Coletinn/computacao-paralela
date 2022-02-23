// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>

void main()
{
  int mat[10][10], transposta[10][10], lin, col;

  printf("Digite o numero de linhas da matriz: ");
  scanf("%d", &lin);
  printf("Digite o numero de colunas da matriz: ");
  scanf("%d", &col);

  printf("\n");

  printf("Digite os elementos da matriz:\n");
  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("Elemento [%d][%d]: ", i, j);
      scanf("%d",&mat[i][j]);
    }
  }
  printf("\nMatriz:\n");

  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ",mat[i][j]);
    }
    printf("\n");
  }

  printf("\nTransposta:\n");
  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      transposta[j][i] = mat[i][j];
    }
  }

  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < lin; j++)
    {
      printf("%d ",transposta[i][j]);
    }
    printf("\n");
  }
}



