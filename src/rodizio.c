#include <stdio.h>
    int main () {

        int placa;
        printf("Digite o numero final da placa do seu veiculo e tecle enter \n");
        scanf("%d",&placa);

        if (placa == 1 || placa == 2){
            printf("Este veiculo não pode circular na segunda-feira");
        }
        else if (placa == 3 || placa == 4){
             printf("Este veiculo não pode circular na Terça-feira");
        }

        else if (placa == 5 || placa == 6){
             printf("Este veiculo não pode circular na quarta-feira");
        }
        else if (placa == 7 || placa == 8){
             printf("Este veiculo não pode circular na quinta-feira");
        }
        else if (placa == 9|| placa == 0){
             printf("Este veiculo não pode circular na Sexta-feira");
        }
        else {
            printf("Numero de placa invalido!");
        }
        printf("\n");
        return 0;
    }