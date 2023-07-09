#include <stdio.h>

int main(void){
    
    int num_func, num_horas;
    double valor_hora, salario;
    
    scanf("%d", &num_func);
    scanf("%d", &num_horas);
    scanf("%lf", &valor_hora);
    
    salario = valor_hora * num_horas;
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num_func, salario);
    
    return 0;
}