#include <stdio.h>

int main(void){
    
    int codigo1, codigo2, qtd_pecas1, qtd_pecas2;
    double val_unitario1, val_unitario2, val_total;
    
    scanf("%d", &codigo1);
    scanf("%d", &qtd_pecas1);
    scanf("%lf", &val_unitario1);
    
    scanf("%d", &codigo2);
    scanf("%d", &qtd_pecas2);
    scanf("%lf", &val_unitario2);
    
    val_total = qtd_pecas1*val_unitario1 + qtd_pecas2*val_unitario2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", val_total);
    
    return 0;
}