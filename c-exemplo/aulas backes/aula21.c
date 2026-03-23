#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // matriz idenditade 4x4
    int i, j;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            if (i == j)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}