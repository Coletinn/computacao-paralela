// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>

void substituir(int mat[10][10], int lin, int col)
{
  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (mat[i][j] < 0)
      {
        mat[i][j] = mat[i][j] * (-1);// - mat[i][j] - mat[i][j];
      }
    }
  }
}

int main(void) {
  
  int mat[10][10], lin, col;

  printf("Digite o numero de linhas da matriz: ");
  scanf("%d",&lin);
  printf("Digite o numero de colunas da matriz: ");
  scanf("%d",&col);

  printf("Digite os elementos da matriz:\n");
  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("Elemento [%d][%d]: ",i,j);
      scanf("%d",&mat[i][j]);
    }
  }

  substituir(mat,lin,col);

  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ",mat[i][j]);
    }
    printf("\n");
  }


  return 0;
}