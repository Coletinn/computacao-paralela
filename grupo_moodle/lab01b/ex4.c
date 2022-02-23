// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>
#include <string.h>


int main() {
  int comp;
  char nome1[20], nome2[20], aux[80];
    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);
    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

  comp = strcmp(&nome1[0],&nome2[0]);
  if (comp > 0){
    printf("Os nomes ordenados são \n");
    printf("%s\n",nome2);
    printf("%s\n",nome1);
  } else {
    printf("Os nomes ordenados são \n");
    printf("%s\n",nome1);
    printf("%s\n",nome2);
  }
    return 0;
  
}