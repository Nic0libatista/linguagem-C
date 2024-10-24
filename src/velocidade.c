#include <stdio.h>
 int main(){
    float kminicial,kmfinal,tempoinicial,tempofinal,subtracao1, subtracao2,media;

    printf("qual o km inicial?\n");
    scanf("%f",&kminicial);

    printf("qual o km final?\n");
    scanf("%f",&kmfinal);

    printf("qual o tempo inicial?\n");
    scanf("%f",&tempoinicial);

    printf("qual o tempo final?\n");
    scanf("%f",&tempofinal);

    subtracao1 = kminicial - kmfinal;
    subtracao2 = tempoinicial - tempofinal;
    media = subtracao1 / subtracao2;

    printf("A velocidade media foi de %.2f\n",media);

    return 0;

 }