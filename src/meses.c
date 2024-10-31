#include <stdio.h>
 int main () {
        int num_mes;
        printf("Digite o numero do mês e aperte enter\n");
        scanf("%d",&num_mes);
        switch (num_mes){
            case 1: 
            printf("janeiro\n");
            break;
            case 2:
              printf("fevereiro\n");
            break;
             case 3:
              printf("março\n");
            break;
             case 4:
              printf("abril\n");
            break;
             case 5:
              printf("maio\n");
            break;
             case 6:
              printf("junho\n");
            break;
             case 7:
              printf("Julho\n");
            break;
             case 8:
              printf("agosto\n");
            break;
             case 9:
              printf("setembro\n");
            break;
             case 10:
              printf("outubro\n");
            break;
             case 11:
              printf("novembro\n");
            break;
             case 12:
              printf("dezembro\n");
            break;

            default:
            printf("Esse mês não existe \n");
            break;
        }
       
    return 0;
 }