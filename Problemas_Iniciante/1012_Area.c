#include <stdio.h>

int main(void){

    double A, B, C;
    float ValorDePi = 3.14159;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    double AreaDotriangulo = A*C/2;
    double AreaDoCirculo = ValorDePi*(C*C);
    double AreaDoTrapezio = (A+B)*(C/2);
    double AreaDoQuadrado = B*B;
    double AreaDoRetangulo = A*B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", AreaDotriangulo, AreaDoCirculo, AreaDoTrapezio, AreaDoQuadrado, AreaDoRetangulo);

    return 0;
}