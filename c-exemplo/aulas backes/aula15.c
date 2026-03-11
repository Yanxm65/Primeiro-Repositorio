#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Aninhamento de if's e else's em c;
    int x;
    printf("digite um numero: ");
    scanf("%d", &x);
    if (x == 0){
        printf("o número é zero.\n");
    } else {
        if (x > 0){
            printf("o número é positivo.\n");
        } else {
            printf("o número é negativo.\n");
        }
    }
    return 0;
}