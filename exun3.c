#include <stdio.h>

int main(void){

    //estrutura switch case

    int prato, sobremesa, bebida, calorias;
  

    printf("\n Opcoes de prato: vegetariano, peixe, frango, carne");
    printf("\n Opcoes de sobremesa: abacaxi, sorvete diet, mouse diet, mouse chocolate");
    printf("\n Opcoes de bebida: chá, suco laranja, suco melao, refrigerante diet");
   
    printf("\nPrato");
    scanf("%d", &prato);

    printf("\nSobremesa");
    scanf("%d", &sobremesa);

    printf("\nBebida");
    scanf("%d", &bebida);


    switch(prato){
        case 1:
            printf("180 calorias ");
            break;
        case 2:
            printf("230 calorias ");
            break;
        case 3:
            printf("250 calorias ");
            break;
        case 4:
            printf("350 calorias ");
            break;
        default:
            printf("Nenhuma das opcoes acima");
    }

    switch(sobremesa){
        case 1:
            printf("75 calorias ");
            break;
        case 2:
            printf("110 calorias ");
            break;
        case 3:
            printf("170 calorias ");
            break;
        case 4:
            printf("200 calorias ");
            break;
        default:
            printf("Nenhuma das opcoes acima");
    }

    switch(bebida){
        case 1:
            printf("20 calorias ");
            break;
        case 2:
            printf("70 calorias ");
            break;
        case 3:
            printf("100 calorias ");
            break;
        case 4:
            printf("65 calorias ");
            break;
        default:
            printf("Nenhuma das opcoes acima");
    }


  
    return 0;
}