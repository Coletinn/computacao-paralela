// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>

int main()
{
    pid_t pidFilho;
    int shm_id; 

    // caso de algum erro no codigo printa erro
    shm_id = shmget(IPC_PRIVATE, 1024, IPC_CREAT |  0660);
    if (shm_id < 0) 
    {
      printf("shmget error\n");
    }
    
    int *procPai = (int*)shmat(shm_id, NULL, 0);

    // valor da variavel é 1
    *procPai = 1;


    
    printf("O valor inicial da variavel compartilhada eh %i\n", *procPai);

    // faz o fork e cria o pidFilho
    pidFilho = fork();
    printf("o pidFilho eh %i\n",pidFilho);

    // processo filho acessa a variavel e realiza a operação de adição, printa e        termina
    if (pidFilho == 0)
    {     
      *procPai = *procPai + 2;  

      printf("Valor da variavel apos soma por 2: %i\n",*procPai);    
    }
    else
    {
      // espera o processo filho
      wait(NULL);

      // realiza operação de multiplicação
      *procPai = *procPai * 4 ;

      printf("Valor da variavel apos multiplicacao por 4: %i\n",*procPai);    
    }

    return 0;
}