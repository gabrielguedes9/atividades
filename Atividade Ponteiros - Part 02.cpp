#include <stdio.h>

int main() {
    float array[10];

    for (int i = 0; i < 10; i++) {
        array[i] = i * 1.5;
    }

    printf("Endereços de cada posicao do array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: %p\n", i, (void *)&array[i]);
    }

    return 0;
}