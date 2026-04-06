#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//MAIOR VALOR DE UM ARRAY - MENOR USA A MESMA A Lógica
int main() {
    setlocale(LC_ALL, "Portuguese");
    int lista[5] = {3,18,2,51,45};
    int i;
    int Maior = lista[0];
    for ( i = 1; i < 5; i++)
    {
        if(Maior < lista[i])
        Maior = lista[i];
    }
    
    printf("Maior: %d\n", Maior);
    return 0;
}