#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // char nome array[tamanho]
    char palavra[20] = "Oitenta";
    printf("Palavra: %s\n",palavra);
    palavra[2] = '\0';
    printf("Palavra: %s\n",palavra);

    return 0;
}