#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, j;
    i = 1;
    while (i < 5)
    {
        j = 1;
        while (j < 5)
        {
            if (i == j)
                printf("1 ");
            else
                printf("0 ");
                    j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}