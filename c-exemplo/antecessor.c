#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número: "); 
    scanf("%d", &num);
    printf("O antecessor é: %d\n", num - 1);
    printf("O posterior é: %d\n", num + 1);
    return 0;
}