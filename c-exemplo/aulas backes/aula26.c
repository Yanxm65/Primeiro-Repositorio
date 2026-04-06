#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    //tipo nome array [nro linhas) [nro_colunas);
    int mat[100][50];
    int i, j;
    for ( i = 0; i < 100; i++)
    {
        for ( j = 0; j < 50; j++)
        {
            printf("Digite mat[%d][%d]: ", i,j);
            scanf("%d",&mat[i][j]);
        }
        
    }
    

    return 0;
}