#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("digite um numero: ");
    scanf("%d", &x);
    if (x % 2 == 0)
        printf("o numero é par");
    else // não por condição no else em nenhum caso, pois o else é a negação do if, ou seja, se o numero não for par, ele é impar.
        printf("o numero é impar");
    return 0;
}