#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // operadores logicos em c;
    int x = 5, r;
    r = (x > 3) && (x < 7);
    
    if (r == 1){
        printf("E verdadeiro");
    } else printf("é falso");

    return 0;
}