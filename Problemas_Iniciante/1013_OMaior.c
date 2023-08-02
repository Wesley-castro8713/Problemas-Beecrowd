#include <stdio.h>

int main(void){

    int a=25, b=3, c=78;

    int maior = (a+b+abs(a-b))/2;
    printf("%d\n", maior);

    int maiordostres = (maior+c+abs(maior-c))/2;
    printf("%d\n", maiordostres); 

    return 0;
}