#include <stdio.h>

 int main(){
    float n1, n2,n3,n4,media,divisao;

    printf("digite a nota em matematica:\n");
    scanf("%f",&n1);

    printf("digite a nota de inglês:\n");
    scanf("%f",&n2);

    printf("digite a nota de filosofia:\n");
    scanf("%f",&n3);

    printf("digite a nota em biologia:\n");
    scanf("%f",&n4);

    media = n1 + n2 + n3 + n4 ;
    divisao = media / 4;

    printf("A sua média é %.2f",divisao);

    return 0; 
    
    
 }