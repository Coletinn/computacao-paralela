// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>

int somaLinhas(int mat[10][10], int lin, int col)
{
  int soma = 0;
  for (int i = 0; i < lin; i++)
    {
      for (int j = 0; j < col; j++)
        {
          soma += mat[i][j];
        }
    }
    return soma;
}

int main(void) 
{
  int mat[10][10], lin = 2, col;

  printf("Digite o numero de colunas da matriz: ");
  scanf("%d",&col);

  for (int i = 0; i < lin; i++)
    {
      for (int j = 0; j < col; j++)
        {
          printf("Elemento [%d][%d]: ", i, j);
          scanf("%d",&mat[i][j]);
        }
    }
  

  for (int i = 0; i < lin; i++)
    {
      for (int j = 0; j < col; j++)
        {
          printf("%d ",mat[i][j]);
        }
      printf("\n");
    }
  printf("\nsoma: %d",somaLinhas(mat, lin, col));
  return 0;
}