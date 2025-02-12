#include <stdio.h>

int main() {
    char Estado[2]
    char codigocidade[4];
    char nomecidade[20];
    int populacao;
    float area;
    float PIB; 
    int numerodepontosturisticos;
    float densidadepopulacional;
    float PIBpercapta;

    printf("***Super Trunfo***\n"); 

      //Pedir o Estado;
    printf("Digite o Estado: \n");
    scanf("%s", &Estado);

      //Pedir o código da cidade;
    printf("Digite o código da cidade: \n");
    scanf("%s", &codigocidade);

      //Pedir nome da cidade;
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade);

      //Pedir a população da cidade;
    printf("Digite a população dessa cidade: \n");
    scanf ("%d", &populacao);

      //Pedir a área da cidade em Km²;
    printf("Digite a área dessa cidade em KM²: \n");
    scanf(" %f", &area);


      //Pedir o PIB da cidade em R$;
    printf("Digite em R$ o PIB dessa cidade: \n");
    scanf(" %f", &PIB);

      //Pedir o número de pontos turísticos da cidade;
    printf("Digite o número de pontos turísticos dessa cidade: \n");
    scanf(" %d", &numerodepontosturisticos);

    printf("Estado: %s\n", Estado);
    printf("Código da cidade: %s\n", codigocidade);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área (KM²): %.2f\n", area);
    printf("PIB (R$): %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos);

      //Calcular a densidade populacional: população dividida pela área; 
    densidadepopulacional = (float) populacao / area;
    printf("Densidade Populacional: %.2f\n", densidadepopulacional);

      //Calcular PIB per capta: PIB total divido pela população;
    PIBpercapta = (float) PIB / populacao;
    printf("PIB per capta: %.2f\n", PIBpercapta);









    return 0;
}
