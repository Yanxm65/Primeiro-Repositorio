#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(   ) {
    setlocale(LC_ALL, "Portuguese");
    printf("Olá, Mundo");
    printf("\nVamos commitar!");
    return 0;
    system("pause");
    
}