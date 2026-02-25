#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x = 5;
    char y = 'a';
    int z;
    printf("%d e %c\n", x,y);
    z = x;
    x = y;
    y = z;
    printf("%d e %c\n", x,y);


    return 0;
}