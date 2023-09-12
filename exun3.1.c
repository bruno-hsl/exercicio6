#include <stdio.h>

main(){

 
     int prato, sobremesa, bebida;
     int caloria = 0;

     printf("prato: ");
     scanf("%d", &prato);

     printf("sobremesa: ");
     scanf("%d", &sobremesa);
    
     printf("bebida: ");
     scanf("%d", &bebida);
  

      switch(prato){

          case 1:
              printf("\nvegetariano");
              caloria += 180;
              break;
          case 2:   
              printf("\nPeixe");
              caloria += 230;
              break;
          case 3:
               printf("\nFrango");
               caloria += 250;
               break;
          case 4:
               printf("\nCarne:");
               caloria += 350;
               break;
               default:
            printf("Opção de prato inválida.\n");

        }
   

      switch(sobremesa){

          case 1:
              printf("\nAbacaxi");
              caloria += 75;
              break;
          case 2:   
              printf("\nSorvete diet");
              caloria += 110;
              break;
          case 3:
               printf("\nmousse diet");
               caloria += 170;
               break;
          case 4:
               printf("\nmousse de chocolate");
               caloria += 200;
               break;
          default:
            printf("Opção de sobremesa inválida.\n");

      }

      switch(bebida){

          case 1:
              printf("\nCha");
              caloria += 20;
              break;
          case 2:   
              printf("\nSuco de laranja");
              caloria += 70;
          case 3:
               printf("\nSuco de melao");
               caloria += 100;
               break;
          case 4:
               printf("\nRefrigerante diet");
               caloria += 65;
               break;
         default:
            printf("Opção de bebida inválida.\n");

    }  


    printf("A quantidade total de caloria da refeição é: %d caloria\n", caloria);



}