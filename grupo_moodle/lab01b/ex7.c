// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>
#include <string.h>
 
int main()
{  
  int i;
   typedef struct 
  {
    char nome[20];
    int idade;
    float peso;
    float altura;
  } Pessoa ;
  Pessoa func[10];

 for(i=0; i<3; i++) 
 {
    strcpy(func[i].nome, "NULL");
    func[i].idade = 0;
    func[i].peso = 0.0;
    func[i].altura = 0.0;
 }

for(i=0; i<3; i++) 
{
    printf(" Digite nome da pessoa: ");
    scanf("%s%*c", &func[i].nome);
    printf(" Digite a idade : ");
    scanf("%d%*c", &func[i].idade);
    printf(" Digite o peso : ");
    scanf("%f%*c", &func[i].peso);
    printf(" Digite a altura : ");
    scanf("%f%*c", &func[i].altura);
}

for(i=0; i<3; i++) 
{
    printf(" \n O nome é: %s ", func[i].nome);
    printf(" \n A idade é: %d ", func[i].idade);
    printf(" \n O peso é: %.2f ", func[i].peso);
    printf(" \n A altura é: %.2f ", func[i].altura);
    printf("\n");
}
  
 
	return 0;

}

