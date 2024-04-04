#include <stdio.h>

void separarPartes(float numero, int *parteInteira, float *parteFracionaria) {
    // Calcula a parte inteira usando o operador de cast para int
    *parteInteira = (int)numero;

    // Calcula a parte fracion�ria subtraindo a parte inteira do n�mero original
    *parteFracionaria = numero - *parteInteira;
}

int main() {
    float numero;
    int parteInteira;
    float parteFracionaria;

    // Solicita ao usu�rio que insira um n�mero real
    printf("Digite um numero real: ");
    scanf("%f", &numero);

    // Chama a fun��o para separar as partes inteira e fracion�ria do n�mero
    separarPartes(numero, &parteInteira, &parteFracionaria);

    // Imprime as partes inteira e fracion�ria
    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %.2f\n", parteFracionaria);

    return 0;
}

