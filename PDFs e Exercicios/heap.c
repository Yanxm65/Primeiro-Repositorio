#include <stdio.h>
#include <stdlib.h>

// ==========================================
// FUNÇÕES AUXILIARES DE NAVEGAÇÃO
// ==========================================
// Como estamos representando uma árvore dentro de um vetor simples,
// usamos essas formulinhas matemáticas para encontrar os "parentes" de um nó.

// Função simples de troca (swap). Usamos ponteiros para garantir 
// que a mudança aconteça nas variáveis originais na memória.
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Se eu sou o índice 'i', meu pai sempre estará nessa posição.
int obterPai(int i) {
    return (i - 1) / 2;
}

// Meu filho da esquerda.
int obterFilhoEsquerdo(int i) {
    return (2 * i) + 1;
}

// Meu filho da direita.
int obterFilhoDireito(int i) {
    return (2 * i) + 2;
}

// Uma mão na roda para a gente visualizar o que está acontecendo no vetor.
void imprimirVetor(int arr[], int n) {
    if (n <= 0) {
        printf("Vazia\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// ==========================================
// MAX-HEAP: A LÓGICA DO MAIOR NO TOPO
// ==========================================

// O famoso "Desce-no-Heap" (Heapify-Down). 
// Usado quando um elemento no topo é menor do que deveria. Ele vai "afundando"
// na árvore, trocando de lugar com o maior de seus filhos, até estabilizar.
void maxHeapificarParaBaixo(int arr[], int n, int i) {
    int maior = i; // Assumimos primeiro que o pai é o maior
    int esq = obterFilhoEsquerdo(i);
    int dir = obterFilhoDireito(i);

    // Se o filho da esquerda existe e é maior que o pai, ele assume a coroa temporária
    if (esq < n && arr[esq] > arr[maior]) maior = esq;
    
    // Se o filho da direita existe e é maior ainda, a coroa passa pra ele
    if (dir < n && arr[dir] > arr[maior]) maior = dir;

    // Se o maior não for mais o pai (ou seja, um dos filhos é maior), a gente troca!
    if (maior != i) {
        trocar(&arr[i], &arr[maior]);
        // A recursão continua fazendo o elemento descer até achar seu lugar
        maxHeapificarParaBaixo(arr, n, maior);
    }
}

// O "Sobe-no-Heap" (Heapify-Up). 
// Usado na inserção. Colocamos um elemento novo lá no final do vetor e fazemos 
// ele "flutuar" para cima, trocando com o pai enquanto ele for maior.
void maxHeapificarParaCima(int arr[], int i) {
    // Enquanto não chegarmos na raiz (i > 0) e o valor for maior que o pai dele...
    while (i > 0 && arr[obterPai(i)] < arr[i]) {
        trocar(&arr[i], &arr[obterPai(i)]); // Troca de lugar!
        i = obterPai(i); // Agora o nosso elemento assumiu a posição do pai, continuamos o loop.
    }
}

// Constrói a Heap a partir de um vetor bagunçado.
// A sacada aqui é: não precisamos verificar as "folhas" da árvore (a metade final do vetor).
// Começamos do último elemento que tem filhos e vamos subindo, aplicando o "Desce-no-Heap".
void construirMaxHeap(int arr[], int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) {
        maxHeapificarParaBaixo(arr, n, i);
    }
}

// Inserir é um processo de dois passos bem simples agora que temos o Sobe-no-Heap:
void inserirMaxHeap(int arr[], int *n, int valor) {
    arr[*n] = valor;       // Passo 1: Joga o cara novo na última posição do vetor
    *n = *n + 1;           // Aumenta a contagem oficial de tamanho
    maxHeapificarParaCima(arr, *n - 1); // Passo 2: Manda ele subir até achar o lugar certo
}

// Extrair a raiz (o maior valor). 
// É como tirar a carta de cima do baralho, mas mantendo a ordem do resto.
int extrairMaxHeap(int arr[], int *n) {
    if (*n <= 0) return -1; // Proteção contra vetor vazio
    if (*n == 1) {
        *n = *n - 1;
        return arr[0]; // Se só tem um, tira ele e pronto
    }
    
    int raiz = arr[0];              // Guarda o "chefão" pra retornar no final
    arr[0] = arr[*n - 1];           // Pega o coitado do último elemento e bota na cadeira de chefe
    *n = *n - 1;                    // Diminui o tamanho da Heap (o chefão saiu)
    maxHeapificarParaBaixo(arr, *n, 0); // O novo "chefe" é fraco, manda ele descer pro lugar certo!
    
    return raiz;
}

// ==========================================
// MIN-HEAP: A LÓGICA DO MENOR NO TOPO
// ==========================================
// (A lógica é exatamente o espelho da Max-Heap. Só invertemos os sinais de > para <)

void minHeapificarParaBaixo(int arr[], int n, int i) {
    int menor = i;
    int esq = obterFilhoEsquerdo(i);
    int dir = obterFilhoDireito(i);

    if (esq < n && arr[esq] < arr[menor]) menor = esq;
    if (dir < n && arr[dir] < arr[menor]) menor = dir;

    if (menor != i) {
        trocar(&arr[i], &arr[menor]);
        minHeapificarParaBaixo(arr, n, menor);
    }
}

void minHeapificarParaCima(int arr[], int i) {
    while (i > 0 && arr[obterPai(i)] > arr[i]) {
        trocar(&arr[i], &arr[obterPai(i)]);
        i = obterPai(i);
    }
}

void construirMinHeap(int arr[], int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) {
        minHeapificarParaBaixo(arr, n, i);
    }
}

void inserirMinHeap(int arr[], int *n, int valor) {
    arr[*n] = valor;
    *n = *n + 1;
    minHeapificarParaCima(arr, *n - 1);
}

int extrairMinHeap(int arr[], int *n) {
    if (*n <= 0) return -1;
    if (*n == 1) {
        *n = *n - 1;
        return arr[0];
    }
    int raiz = arr[0];
    arr[0] = arr[*n - 1];
    *n = *n - 1;
    minHeapificarParaBaixo(arr, *n, 0);
    return raiz;
}

// ==========================================
// HEAP SORT: A CEREJA DO BOLO
// ==========================================

void heapSort(int arr[], int tamanho) {
    // Passo 1: Arruma a casa. Transforma o vetor bagunçado numa Max-Heap perfeita.
    // Agora sabemos com certeza que o maior de todos está no índice 0.
    construirMaxHeap(arr, tamanho);

    // Passo 2: O processo de ordenação "In-Place" (sem criar vetor novo).
    for (int i = tamanho - 1; i >= 1; i--) {
        // Pega o maior elemento (que tá no topo/índice 0) e joga ele pro final do vetor.
        // É como se estivéssemos construindo o array ordenado de trás pra frente!
        trocar(&arr[0], &arr[i]);

        // Aqui tá a grande sacada: passamos 'i' como o tamanho da Heap.
        // Ou seja, fingimos que os últimos elementos (que já foram ordenados) não existem mais na Heap.
        // E mandamos o elemento que foi pro topo "descer" pra restaurar a ordem no que sobrou.
        maxHeapificarParaBaixo(arr, i, 0);
    }
}

// ==========================================
// FUNÇÃO PRINCIPAL (ÁREA DE TESTES)
// ==========================================

int main() {
    printf("=================================\n");
    printf("        TESTE DA MAX-HEAP        \n");
    printf("=================================\n");
    
    // Vetor com folga pra gente poder inserir sem quebrar a memória
    int vetorMax[20] = {12, 11, 13, 5, 6, 7};
    int nMax = 6; // O tamanho real que estamos usando agora
    
    construirMaxHeap(vetorMax, nMax);
    
    // Testando as inserções: o 15 tem que subir até o topo!
    inserirMaxHeap(vetorMax, &nMax, 15);
    
    // Testando a extração: deve arrancar o 15 de lá.
    extrairMaxHeap(vetorMax, &nMax);
    
    printf("Estado atual (apos arrumar, inserir 15 e extrair o 15): ");
    imprimirVetor(vetorMax, nMax); // Deve mostrar o 13 como o novo chefão

    printf("\n=================================\n");
    printf("        TESTE DO HEAP SORT       \n");
    printf("=================================\n");

    // Aqui o negócio brilha. Vetor totalmente caótico.
    int vetorSort[] = {7, 2, 9, 1, 5, 3, 8, 4, 6};
    
    // Um truque em C pra descobrir o tamanho do vetor sozinho
    int nSort = sizeof(vetorSort) / sizeof(vetorSort[0]);

    printf("Vetor original (Tudo baguncado):\n");
    imprimirVetor(vetorSort, nSort);

    // Chamando a mágica
    heapSort(vetorSort, nSort);

    printf("\nVetor final (Magicamente ordenado):\n");
    imprimirVetor(vetorSort, nSort);

    return 0;
}