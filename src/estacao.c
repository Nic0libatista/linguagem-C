#include <stdio.h>
    int main () {
        int mes;

        printf("Digite o numero correspondente do mẽs e tecle enter para descobrir a estação\n");
        scanf("%d",&mes);

        if (mes == 12 || mes == 1 || mes == 2) {
            printf("o mês de numero %d é inverno",mes);
        }
        else if (mes == 3 || mes == 4 || mes == 5) {
              printf("o mês de numero %d é primavera",mes);
        }

        else if (mes == 6|| mes == 7 || mes == 8) {
              printf("o mês de numero %d é verão",mes);
        }
        else if (mes == 9|| mes == 10 || mes == 11) {
              printf("o mês de numero %d é outono",mes);
        }
        printf("\n");

        return 0;
    }