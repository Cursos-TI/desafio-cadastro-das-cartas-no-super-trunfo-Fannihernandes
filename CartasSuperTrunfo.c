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
    int resultado;

    printf ("***Carta 1***\n");

      //Pedir o Estado;
    printf("Digite o Estado: \n");
    scanf("%s", &Estado1);

      //Pedir o código da cidade;
    printf("Digite o código da cidade: \n");
    scanf(" %s", &codigocidade1);

      //Pedir nome da cidade;
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nomecidade1);

      //Pedir a população da cidade;
    printf("Digite a população dessa cidade: \n");
    scanf ("%d", &populacao1);

      //Pedir a área da cidade em Km²;
    printf("Digite a área dessa cidade em KM²: \n");
    scanf(" %f", &area1);


      //Pedir o PIB da cidade;
    printf("Digite o PIB dessa cidade: \n");
    scanf(" %f", &PIB1);
    

      //Pedir o número de pontos turísticos da cidade;
    printf("Digite o número de pontos turísticos dessa cidade: \n");
    scanf(" %d", &numerodepontosturisticos1);

    printf("Estado: %s\n", Estado1);
    printf("Código da cidade: %s\n", codigocidade1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área (KM²): %.3f\n", area1);
    printf("PIB: %.2f bilhões de reais\n ", PIB1);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);

      //Calcular a densidade populacional: população dividida pela área; 
    densidadepopulacional1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);

      //Calcular PIB per capta: PIB total divido pela população;
    PIBpercapta1 = (float) PIB1 / populacao1;
    printf("PIB per capta: %.2f reais\n", PIBpercapta1);

      //Calcular Super Poder: população + área + PIB + PIB per capta + densidade populacional invertida (1/densidade pop) + nº pontos turísticos;
    SuperPoder1 = (float) populacao1 + area1 + PIB1 + PIBpercapta1 + (1/ densidadepopulacional1) + numerodepontosturisticos1;
    printf ("Super Poder: %.3f\n", SuperPoder1);


    printf ("***Carta 2***\n");

      //Pedir o Estado;
    printf("Digite o Estado: \n");
    scanf(" %s", &Estado2);

      //Pedir o código da cidade;
    printf("Digite o código da cidade: \n");
    scanf(" %s", &codigocidade2);

      //Pedir nome da cidade;
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nomecidade2);

      //Pedir a população da cidade;
    printf("Digite a população dessa cidade: \n");
    scanf (" %d", &populacao2);

    //Pedir a área da cidade em Km²;
    printf("Digite a área dessa cidade em KM²: \n");
    scanf(" %f", &area2);


      //Pedir o PIB da cidade;
    printf("Digite o PIB dessa cidade: \n");
    scanf(" %f", &PIB2);

      //Pedir o número de pontos turísticos da cidade;
    printf("Digite o número de pontos turísticos dessa cidade: \n");
    scanf(" %d", &numerodepontosturisticos2);

    printf("Estado: %s\n", Estado2);
    printf("Código da cidade: %s\n", codigocidade2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);

      //Calcular a densidade populacional: população dividida pela área; 
    densidadepopulacional2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);

      //Calcular PIB per capta: PIB total divido pela população;
    PIBpercapta2 = (float) PIB2 / populacao2;
    printf("PIB per capta: %.2f reais\n", PIBpercapta2);
    
      //Calcular Super Poder: população + área + PIB + PIB per capta + densidade populacional invertida (1/densidade pop) + nº pontos turísticos;
    SuperPoder2 = (float) populacao2 + area2 + PIB2 + PIBpercapta2 + (1/ densidadepopulacional2) + numerodepontosturisticos2;
    printf ("Super Poder: %.3f\n", SuperPoder2);

       //Comparar o vencedor de um atributo
       printf("Carta 1 - %s (%s) = %d\n", nomecidade1, Estado1, populacao1);
       printf ("Carta 2 - %s (%s) = %d\n", nomecidade2, Estado2, populacao2);
      
       if (populacao1 > populacao2){
        printf ("Carta 1 (%s) venceu!\n", nomecidade1, nomecidade2);
       }else{
        printf("Carta 1 (%s) perdeu!\n", nomecidade1, nomecidade2);
       }
      
       
    
    /* 
    //Comparar a área da carta 1 e carta 2;
    printf("Resultado Área Carta 1 > População Carta 2: %d\n", area1 > area2);
      //Comparar o PIB da carta 1 e carta 2;
    printf("Resultado PIB Carta 1 > PIB Carta 2: %d\n", PIB1 > PIB2);
      //Comparar o número de pontos turísticos da carta 1 e carta 2;
    printf("Resultado Número Pontos Turísticos Carta 1 > Número Pontos Turísticos Carta 2: %d\n", numerodepontosturisticos1 > numerodepontosturisticos2);
      //Comparar a densidade populacional da carta 1 e carta 2 - lembrando que ela é inversa;
    printf("Resultado Densidade Populacional Carta 1 < Densidade Populacional Carta 2: %d\n", densidadepopulacional1 > densidadepopulacional2);
      //Comparar o PIB per capta da carta 1 e carta 2;
    printf("Resultado PIB per capta Carta 1 > PIB per capta Carta 2: %d\n", PIBpercapta1 > PIBpercapta2);
      //Comparar o Super Poder da carta 1 e carta 2;
    printf("Resultado Super Poder Carta 1 > Super Poder Carta 2: %d\n", SuperPoder1 > SuperPoder2);
 */
    return 0;
}
