#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[5];
    int idade;
}moca, *pt;

void main (){

    struct pessoa moca;
    struct pessoa *pt; //pt é um ponteiro para estrutura do tipo pessoa

    strcpy(moca.nome,"Ana");
    moca.idade = 26;

    pt = &moca;

    printf("\nNome: %s", pt->nome);
    printf("\nIdade: %i", pt->idade);

    printf("\n\nNome: %s", (*pt).nome);
    printf("\nIdade: %i", (*pt).idade);
}
