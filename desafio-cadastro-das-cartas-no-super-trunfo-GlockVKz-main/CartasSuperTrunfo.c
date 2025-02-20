#include <stdio.h>

int main() {
    char estado1[10], estado2[10];
    char nomecidade1[50], nomecidade2[50];
    char codigo1[10], codigo2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numerodepontos1, numerodepontos2;

    printf("Qual o nome do estado da primeira cidade?\n");
    scanf("%s", estado1);

    printf("Qual o codigo da primeira cidade?\n");
    scanf("%s", codigo1);

    printf("Qual o nome da primeira cidade?\n");
    scanf("%s", nomecidade1);

    printf("Quantas pessoas tem na primeira cidade?\n");
    scanf("%d", &populacao1);

    printf("Qual a area da primeira cidade (em km²)?\n");
    scanf("%f", &area1);

    printf("Qual o PIB da primeira cidade (em bilhões de reais)?\n");
    scanf("%f", &pib1);

    printf("Qual o número de pontos turísticos da primeira cidade?\n");
    scanf("%d", &numerodepontos1);

    printf("\nQual o nome do estado da segunda cidade?\n");
    scanf("%s", estado2);

    printf("Qual o codigo da segunda cidade?\n");
    scanf("%s", codigo2);

    printf("Qual o nome da segunda cidade?\n");
    scanf("%s", nomecidade2);

    printf("Quantas pessoas tem na segunda cidade?\n");
    scanf("%d", &populacao2);

    printf("Qual a area da segunda cidade (em km²)?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da segunda cidade (em bilhões de reais)?\n");
    scanf("%f", &pib2);

    printf("Qual o número de pontos turísticos da segunda cidade?\n");
    scanf("%d", &numerodepontos2);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numerodepontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontos2);

    return 0;
}


