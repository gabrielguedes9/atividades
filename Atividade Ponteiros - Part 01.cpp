#include <stdio.h>

int main() {
    int vr1, vr2;
    int *ptr1, *ptr2;

    printf("Digite o valor da primeira variavel: ");
    scanf("%d", &vr1);

    printf("Digite o valor da segunda variavel: ");
    scanf("%d", &vr2);

    ptr1 = &vr1;
    ptr2 = &vr2;

    if (ptr1 > ptr2) {
        printf("Conteudo do endereço com maior valor: %d\n", *ptr1);
    } else {
        printf("Conteudo do endereço com maior valor: %d\n", *ptr2);
    }

    return 0;
}
