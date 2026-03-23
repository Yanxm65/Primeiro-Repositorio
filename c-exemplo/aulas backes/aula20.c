#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); // do while - vai realizar pelo menos uma vez o seu conjunto de comandos

    int a, b;
    printf("Digite dois valores inteiros");
    scanf("%d %d", &a, &b); //mesmo que a seja maior ou igual a b o comando " do while " irá imprimir o valor de a
    {
        printf("%d\n", a);
        a++; // se fosse "a--" iria ocorrer um loop infinito
    } while (a < b); //se fosse a > b também iria ocorrer um loop infinito
    printf("Fim");

    return 0;
} 