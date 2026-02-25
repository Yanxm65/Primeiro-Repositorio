#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("\nQual o número que você quer digitar?");
    scanf("%d", &num);
    printf("\nO número que você digitou é: %d", num);
    printf("\nNúmero legal!");

    return 0;
}