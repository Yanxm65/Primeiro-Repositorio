#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    double num;
    printf("Digite um número: ");
    scanf("%f", &num);
    printf("O valor é: %e", num);

    return 0;
}