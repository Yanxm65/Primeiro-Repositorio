#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, i;
    bool estado;
    estado = false;

    printf("Digite um número: ");
    scanf("%d", &n);
    while (estado == false)
    {
        n++;
        if (n % 13 == 0 || n % 11 == 0 || n % 17 == 0)
        {
            
            printf("o valor divisivel mais próximo é: %d", n);
            estado = true;
        }
        
    }
          
    

    return 0;
}