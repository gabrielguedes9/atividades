#include <stdio.h>

void encontrarMinMax(int vetor[], int tamanho, int *min, int *max) {
    
    if (tamanho == 0) {
        printf("Erro: vetor vazio.\n");
        return;
    }
    
    *min = vetor[0];
    *max = vetor[0];

    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] < *min) {
            *min = vetor[i];
        } else if (vetor[i] > *max) {
            *max = vetor[i];
        }
    }
}

int main() {
    int vetor[] = {25, 781, 4, 2, 999}; 
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int min, max;
    encontrarMinMax(vetor, tamanho, &min, &max);

    printf("Menor elemento do vetor: %d\n", min);
    printf("Maior elemento do vetor: %d\n", max);

    return 0;
}

