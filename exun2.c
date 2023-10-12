#include <stdio.h>

int main(void) {
    int opcao, qtd;
    float total = 0, qtdtotal;

    printf("\nDigite o codigo do produto: ");
    scanf("%d", &opcao);

    printf("Quantidade: ");
    scanf("%d", &qtd);

    switch (opcao) {
        case 100:
            total += 10.10;
            qtdtotal = qtd * total;
            printf("%d cachorro quente de %.2f\n", qtd, qtdtotal);
            break;
        case 101:
            total += 8.30;
            qtdtotal = qtd * total;
            printf("%d bauru simples de %.2f\n", qtd, qtdtotal);
            break;
        case 102:
            total += 8.50;
            qtdtotal = qtd * total;
            printf("%d bauru c/ovo de %.2f\n", qtd, qtdtotal);
            break;
        case 103:
            total += 12.50;
            qtdtotal = qtd * total;
            printf("%d hanburger de %.2f\n", qtd, qtdtotal);
            break;
        case 104:
            total += 13.25;
            qtdtotal = qtd * total;
            printf("%d cheaseburger de %.2f\n", qtd, qtdtotal);
            break;
        default:
            printf("Nenhuma das opcoes acima\n");
    }

    return 0;
}
