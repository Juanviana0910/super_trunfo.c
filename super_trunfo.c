#include <stdio.h>

int main(){
char carta1[50], carta2[50];
char estado1, estado2;
char codigo1[50], codigo2[50];
char cidade1[50], cidade2[50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;

printf("Digite o nome da carta1: \n");
scanf("%s", carta1);

printf("Digite o estado da carta: \n");
scanf(" %c", &estado1);

printf("Digite o código da carta: \n");
scanf("%s", codigo1);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade1);

printf("Digite a população da cidade: \n");
scanf("%d", &populacao1);

printf("Digite a área da cidade: \n");
scanf("%f", &area1);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos da cidade: \n");
scanf("%d", &pontos1);


printf("Digite o nome da carta2: \n");
scanf("%s", carta2);

printf("Digite o estado da carta: \n");
scanf(" %c", &estado2);

printf("Digite o código da carta: \n");
scanf("%s", codigo2);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade2);

printf("Digite a população da cidade: \n");
scanf("%d", &populacao2);

printf("Digite a área da cidade: \n");
scanf("%f", &area2);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos da cidade: \n");
scanf("%d", &pontos2);

// Exibindo para conferir
    printf("\n--- Carta 1 ---\n");
    printf("Nome: %s\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n",
           carta1, estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Nome: %s\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n",
           carta2, estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2);

return 0;














}