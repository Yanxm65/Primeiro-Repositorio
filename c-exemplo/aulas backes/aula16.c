#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, z;
    printf("digite o primeiro número: ");
    scanf("%d", &num1);
    printf("digite o segundo número: ");
    scanf("%d", &num2);

    z = num1 > num2 ? num1 : num2;

    printf("O maior número é %d\n", z);

    return 0;
}