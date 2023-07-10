#include <stdio.h>

int main(void){
    
    char nome[50];
    double sal_fixo, valor_vendas_mes, sal_total;
    
    scanf("%s", nome);
    scanf("%lf", &sal_fixo);
    scanf("%lf", &valor_vendas_mes);
    
    sal_total = valor_vendas_mes*0.15 + sal_fixo;
    
    printf("TOTAL = R$ %.2lf\n", sal_total);
    
    return 0;
}