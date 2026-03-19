#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    printf("Digite dois números\n ");
    scanf("%d %d", &a, &b);
    while (a < b)
    {
        a++;
        printf("%d\n", a);
    }
    printf("fim do programa");

    return 0;
}