#include <stdio.h>

int main() {
    char Estado1[3], Estado2[3];
    char codigocidade1[4], codigocidade2[4];
    char nomecidade1[20], nomecidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2; 
    int numerodepontosturisticos1, numerodepontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapta1, PIBpercapta2;
    float SuperPoder1, SuperPoder2;
    int escolha;

    // Pedir informações da Carta 1
    printf("***Carta 1***\n");
    printf("Digite o Estado: \n");
    scanf("%s", Estado1);
    printf("Digite o código da cidade: \n");
    scanf(" %s", codigocidade1);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", nomecidade1);
    printf("Digite a população dessa cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a área dessa cidade em KM²: \n");
    scanf("%f", &area1);
    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos dessa cidade: \n");
    scanf("%d", &numerodepontosturisticos1);

    printf("Estado: %s\n", Estado1);
    printf("Código da cidade: %s\n", codigocidade1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área (KM²): %.3f\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);

    densidadepopulacional1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);

    PIBpercapta1 = (float) PIB1 / populacao1;
    printf("PIB per capta: %.2f reais\n", PIBpercapta1);

    SuperPoder1 = (float) populacao1 + area1 + PIB1 + PIBpercapta1 + (1.0 / densidadepopulacional1) + numerodepontosturisticos1;
    printf("Super Poder: %.3f\n", SuperPoder1);

    // Pedir informações da Carta 2
    printf("***Carta 2***\n");
    printf("Digite o Estado: \n");
    scanf(" %s", Estado2);
    printf("Digite o código da cidade: \n");
    scanf(" %s", codigocidade2);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", nomecidade2);
    printf("Digite a população dessa cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a área dessa cidade em KM²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos dessa cidade: \n");
    scanf("%d", &numerodepontosturisticos2);

    printf("Estado: %s\n", Estado2);
    printf("Código da cidade: %s\n", codigocidade2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);

    densidadepopulacional2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);

    PIBpercapta2 = (float) PIB2 / populacao2;
    printf("PIB per capta: %.2f reais\n", PIBpercapta2);

    SuperPoder2 = (float) populacao2 + area2 + PIB2 + PIBpercapta2 + (1.0 / densidadepopulacional2) + numerodepontosturisticos2;
    printf("Super Poder: %.3f\n", SuperPoder2);

    // Menu para escolher o atributo de comparação
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("### Comparando População ###\n");
            printf("Carta 1 (%s): %d\n", nomecidade1, populacao1);
            printf("Carta 2 (%s): %d\n", nomecidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("%s venceu!\n", nomecidade1);
            } else if (populacao1 < populacao2) {
                printf("%s venceu!\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf(" ### Comparando Área ###\n");
            printf("Carta 1 (%s): %.3f km²\n", nomecidade1, area1);
            printf("Carta 2 (%s): %.3f km²\n", nomecidade2, area2);
            if (area1 > area2) {
                printf("%s venceu!\n", nomecidade1);
            } else if (area1 < area2) {
                printf("%s venceu!\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("### Comparando PIB ###\n");
            printf("Carta 1 (%s): %.2f bilhões de reais\n", nomecidade1, PIB1);
            printf("Carta 2 (%s): %.2f bilhões de reais\n", nomecidade2, PIB2);
            if (PIB1 > PIB2) {
                printf("%s venceu!\n", nomecidade1);
            } else if (PIB1 < PIB2) {
                printf("%s venceu!\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("### Comparando Número de Pontos Turísticos ###\n");
            printf("Carta 1 (%s): %d\n", nomecidade1, numerodepontosturisticos1);
            printf("Carta 2 (%s): %d\n", nomecidade2, numerodepontosturisticos2);
            if (numerodepontosturisticos1 > numerodepontosturisticos2) {
                printf("%s venceu!\n", nomecidade1);
            } else if (numerodepontosturisticos1 < numerodepontosturisticos2) {
                printf("%s venceu!\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf(" ### Comparando Densidade Populacional ###\n");
            printf("Carta 1 (%s): %.2f hab/km²\n", nomecidade1, densidadepopulacional1);
            printf("Carta 2 (%s): %.2f hab/km²\n", nomecidade2, densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2) {
                printf("%s venceu!\n", nomecidade1);
            } else if (densidadepopulacional1 > densidadepopulacional2) {
                printf("%s venceu!\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}