#include <stdio.h>
#include <math.h>


void calcularAVE(double raio, double *area, double *volume) {
  
    *area = 4 * 3.14159 * pow(raio, 2);
    

    *volume = (4.0/3.0) * 3.14159 * pow(raio, 3);
}

int main() {
    double raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    calcularAVE(raio, &area, &volume);

    printf("Para uma esfera com raio %.2lf\n", raio);
    printf("Área da superfície: %.2lf\n", area);
    printf("Volume: %.2lf\n", volume);

    return 0;
}