#include <stdio.h>
 int main(){
    float salariobruto,vale,inss,fgts,desconto,salario;

    printf("Digite seu salario bruto? R$ \n");
    scanf("%f",&salariobruto);

    vale = salariobruto * 0.06;
    inss = salariobruto * 0.07;
    fgts = salariobruto * 0.08;

    desconto = vale + inss + fgts;
    salario = salariobruto - desconto;

    printf("Seu total de desconto é de R$ %.2f e salario liquido é de R$ %.2f\n", desconto,salario);

    return 0;
 }