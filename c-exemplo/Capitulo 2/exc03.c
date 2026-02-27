#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número\n");
    scanf("%d", &num);
    printf("Valor lido: %d", num);

    return 0;
}