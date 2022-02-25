// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
  pid_t filho;

  filho = fork();

    if (filho == -1) 
    {
      perror("Erro no fork");
      return 1;
    }


    if (filho == 0)
    {
      printf ("Digite um numero: ");
    }
    else
    {
      printf("Sou o processo pai\n");
      int i, num, j;
       scanf ("%d", &num);
       j = num;

       for (i=1; j > 1; j = j -1) {
         i=i*j;
       }

       printf("O fatorial de %d eh: %d\n",num,i);
      
    }

  return 0;
}