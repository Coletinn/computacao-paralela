// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>

void multiplicarLinha(int mat[10][10], int lin, int col, int linEscolhida, int n)
{
  int j;
  for (j = 0; j < col; j++)
    {
      mat[linEscolhida][j] = mat[linEscolhida][j] * n;
    }
}

void multiplicarColuna(int mat[10][10], int lin, int col, int colEscolhida, int n)
{
   for(int i=0; i < lin; i++)
   {
     mat[i][colEscolhida] = mat[i][colEscolhida] * n;
   }
}

int main(void) 
{
  int mat[10][10], lin, col, linEscolhida, colEscolhida, i, j, valor;
  char opc;

  printf("Digite o numero de linhas da matriz: ");
  scanf("%d",&lin);
  printf("Digite o numero de colunas da matriz: ");
  scanf("%d",&col);

  for (i = 0; i < lin; i++)
    {
      for (j = 0; j < col; j++)
        {
          printf("Elemento [%d][%d]: ",i,j);
          scanf("%d",&mat[i][j]);
        }
    }

  printf("\nMATRIZ:\n");

  for (i = 0; i < lin; i++)
    {
      for (j = 0; j < col; j++)
        {
          printf("%d ",mat[i][j]);
        }
      printf("\n");
    }
    
  

  printf("\n\nDigite se voce quer multiplicar linha ou coluna (L/C): ");
  scanf(" %c",&opc);

   if (opc == 'l' || opc == 'L')
   {
    printf("Digite a linha que deseja multiplicar (0 a %d): ",lin-1);
    scanf("%d",&linEscolhida);
    printf("Digite o valor que deseja multiplicar: ");
    scanf("%d",&valor);
    multiplicarLinha(mat,lin,col,linEscolhida,valor);
   }
  else if (opc == 'C' || opc == 'c')
  {
    printf("Digite a coluna que deseja multiplicar: (0 a %d) ",col-1);
    scanf("%d",&colEscolhida);
    printf("Digite o valor que deseja multiplicar: ");
    scanf("%d",&valor);
    multiplicarColuna(mat,lin,col,colEscolhida,valor);
  }
  
  printf("\nMATRIZ MULTIPLICADA:\n");

  for (i = 0; i < lin; i++)
    {
      for (j = 0; j < col; j++)
        {
          printf("%d ",mat[i][j]);
        }
      printf("\n");
    }
 
}