#include <stdio.h>

void separarPartes(float numero, int *parteInteira, float *parteFracionaria) {
    // Calcula a parte inteira usando o operador de cast para int
    *parteInteira = (int)numero;

    // Calcula a parte fracionária subtraindo a parte inteira do número original
    *parteFracionaria = numero - *parteInteira;
}

int main() {
    float numero;
    int parteInteira;
    float parteFracionaria;

    // Solicita ao usuário que insira um número real
    printf("Digite um numero real: ");
    scanf("%f", &numero);

    // Chama a função para separar as partes inteira e fracionária do número
    separarPartes(numero, &parteInteira, &parteFracionaria);

    // Imprime as partes inteira e fracionária
    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %.2f\n", parteFracionaria);

    return 0;
}

