#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char x;
    printf("Digite uma pontuação");
    scanf("%c", &x);
    switch (x)
    {
    case ',': printf("O acento é uma virgula ,"); break;
    case '.': printf("O acento é um ponto ."); break;
    case ';': printf("O acento é ponto e virgula ;"); break;
    case ':': printf("O acento é dois pontos :"); break;
    default: printf("Não é uma pontuação"); 
    }
    return 0;
}