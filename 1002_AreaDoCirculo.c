#include <stdio.h>

int main(void){
    
    double raio, pi = 3.14159, area;
    
    scanf("%lf", &raio);
    
    area = pi * (raio*raio); 
    
    printf("A=%.4lf\n", area);
    
    return 0;
}