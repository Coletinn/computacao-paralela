// Gustavo Coleto de Freitas 32076541
// João Vitor Teles Centrone 32033125

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void leituraArquivo(char arquivo[1000]);

struct pes
{
    char nome[50];
    int idade;
    float altura;
};
struct pes PESSOA[50];


int main()
{
    char *arq = "dados.txt";
    leituraArquivo(arq);
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", PESSOA[i].nome);
        printf("%d\n", PESSOA[i].idade);
        printf("%f\n", PESSOA[i].altura);
    }
    getch();
}


void leituraArquivo(char arquivo[1000])
{
    FILE *arqPtr; 
    char nome[50];
    int idade = 0;
    float altura = 0;
    int pos = 0;
    arqPtr = fopen(arquivo, "r");
    while (fscanf(arqPtr, "%s, %d, %f", nome,  &idade, &altura) != EOF) 
    {
        PESSOA[pos].nome = nome;
        PESSOA[pos].idade = idade;
        PESSOA[pos].altura = altura;
        pos++;

    } 

    fclose(arqPtr);
} 