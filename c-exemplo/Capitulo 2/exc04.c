#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número inteiro\n");
    scanf("%d", &num);
    printf("Valor lido com %%f: %f", num);

    return 0;
}