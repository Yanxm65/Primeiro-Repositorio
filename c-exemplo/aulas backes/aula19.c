#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    printf("Digite dois números\n");
    scanf("%d %d0", &a, &b);
    for (c = a; c <=  b; c++)
    {
        printf("O valor é %d\n", c);
    }
    
    return 0;
}