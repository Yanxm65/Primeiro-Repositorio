#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite seu número: \n");
    scanf("%d", &numero);

    int centena, dezena, unidade;
    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;

    int numerofinal = (unidade * 100) + (dezena * 10) + (centena);
    printf("Numero: %d\n", numero);
    printf("centena: %d dezena: %d unidade %d\n", centena, dezena, unidade);
    printf("Numero inverso: %d\n", numerofinal);
    return 0;
}