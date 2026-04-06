#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    //Aarray Multidimensional
    int cub[5][5][5]; //consome muita memoria 
    int i,j,k; 
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            for ( k = 0; k < 5; k++)
            {
                cub[i][j][k] = 0; 
            }
            
        }
        
    }
    
    return 0;
}