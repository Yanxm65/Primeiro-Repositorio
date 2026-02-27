#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num;
    printf("Digite um número inteiro\n");
    scanf("%f", &num);
    printf("Valor lido com %%d: %d", num);

    return 0;
}