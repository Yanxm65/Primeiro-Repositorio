#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Qual o número que você quer verificar?");
    scanf("%d", &x);
    if (x > 0) {
        printf("O valor %d é positivo!", x);
    } else {
        printf("O valor %d é negativo!", x);

    }


    return 0;
}