#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    while (a <= b)
    {
        a = a + 1;
        if (a == 5)
            continue;
        printf("%d\n", a);
    }

    return 0;
}