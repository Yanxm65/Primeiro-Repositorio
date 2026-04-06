#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i = 0;
    inicio:
    if (i<5)
    {
        printf("N�mero: %d\n", i);
        i++;
        goto inicio;
    }
    
        //GOTO apenas para estudos, é preferível usar laços de repetição mais comuns.
    return 0;
}