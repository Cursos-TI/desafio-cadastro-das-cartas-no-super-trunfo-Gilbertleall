#include <stdio.h>


        int main(){

            char estado[20] ;
            char codigocarta[5];
            char nomedacidade[15];
            int populacao;
            float area;
            float pib;
            int pontosturisticos;

            printf("Digite o estado(use - ao invés de espaço): ");
            scanf("%s", estado);

            printf("Codigo da carta: ");
            scanf("%s", codigocarta);

            printf("Nome da cidade(use - ao invés de espaço): ");
            scanf("%s", nomedacidade);

            printf("População: ");
            scanf("%d", &populacao);
            
            printf("Area em Km²: ");
            scanf("%f", &area);
            
            printf("Pib: ");
            scanf("%f", &pib);
            
            printf("Pontos Turisticos: ");
            scanf("%d", &pontosturisticos);


            printf("O nome do estado: %s\n", estado);
            printf("O código da carta: %s\n", codigocarta);
            printf("O nome da cidade: %s\n", nomedacidade);
            printf("População: %d\n", populacao);
            printf("Área em km²: %f\n", area);
            printf("PIB: %f\n", pib);
            printf("Pontos turísticos: %d\n", pontosturisticos);

            return 0;
            
            

        }