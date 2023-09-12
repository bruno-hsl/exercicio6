#include <stdio.h>

int main(void){

    //estrutura switch case

    int opcao, qtd;

    printf("\nDigite o codigo do produto:");
    scanf("%d", &opcao);

    printf("\nQuantidade: ");
    scanf("%d", &qtd);


    if(qtd == 1){
         switch(opcao){

        case 100:
            printf("%d cachorro quente de 10.10 ", qtd);
            break;
        case 101:
            printf("%d bauru simples de 8.30 ", qtd);
            break;
        case 102:
            printf("%d bauru c/ovo de 8.50 ", qtd);
            break;
        case 103:
            printf("%d hanburger de 12.50 ", qtd);
            break;
        case 104:
            printf("%d cheaseburger de 13.25 ", qtd);
            break;
        default:
            printf("Nenhuma das opcoes acima");
    }
    }
    else{
         switch(opcao){

        case 100:
            printf("%d cachorros quentes de 10.10 ", qtd);
            break;
        case 101:
            printf("%d baurus simples de 8.30 ", qtd);
            break;
        case 102:
            printf("%d baurus c/ovo de 8.50 ", qtd);
            break;
        case 103:
            printf("%d hanburgers de 12.50 ", qtd);
            break;
        case 104:
            printf("%d cheaseburgers de 13.25 ", qtd);
            break;
        default:
            printf("Nenhuma das opcoes acima");
    }
    }
    
   
  
    
    return 0;
}