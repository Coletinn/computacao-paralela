// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>

int main() {
  
  printf("Digite as tres notas ");
  int n1, n2,n3;
  scanf ("%d %d %d", &n1, &n2, &n3);
  double me,ma;
  me = (n1 + n2 + n3 )/ 3 ;
  ma = (n1 + 2*n2 + 3*n3 + me)/7;
  printf("A média de %d e %d e %d é %f\n", n1, n2, n3, ma);
  char nota; 
  if (ma >= 9 )
  {
    nota = 'A';

  } 
  else if (ma >= 7.5 & ma < 9)
  {
    nota = 'B';

  } else if (ma >= 6 & ma < 7.5)
  {
    nota = 'C';

  } else if (ma >= 4 & ma < 6)
  {
    nota = 'D';
  } else if (ma < 4)
  {
    nota = 'E';
  }
  printf("A sua nota é %c\n", nota);
  return 0;
}