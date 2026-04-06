#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i,lista[5] = {1,2,3,4,5};
    int soma = 0;
    for ( i = 0; i < 5; i++)
    {
        soma = soma + lista[i];
    }
    printf("Soma = %d\n",soma);

    return 0;
}