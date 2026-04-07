#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // strlen Tamanho da String 
    // strcpy Copiar uma string
    char palavra[20] = "Linguagem C";
    int tamanho = strlen(palavra);
    printf("Tamanho: %d\n", tamanho);

    char novapalavra[30]; // Tomar cuidado com o tamanho"
    strcpy(novapalavra, palavra);
    printf("Cópia = %s\n", novapalavra);

    char palavra1[20] = "Bom ";
    char palavra2[30] = "dia";
    strcat(palavra1,palavra2);
    printf("palavra = %s\n", palavra1);

    if (strcmp(palavra,novapalavra)==0)
    {
        printf("Strings Iguais\n");
    } else
        printf("String diferentes\n");
    
    return 0;
}