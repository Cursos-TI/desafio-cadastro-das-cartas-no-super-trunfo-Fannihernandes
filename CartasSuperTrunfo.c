#include <stdio.h>

int main() {
    char codigo_cidade[4];
    char nome_cidade[20];
    int populacao;
    float area;
    float PIB; 
    int numero_pontos_turisticos;

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo_cidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade);

    printf("Digite a população dessa cidade: \n");
    scanf ("%d", &populacao);

    printf("Digite a área dessa cidade em KM²: \n");
    scanf(" %f", &area);

    printf("Digite em R$ o PIB dessa cidade: \n");
    scanf(" %f", &PIB);

    printf("Digite o número de pontos turísticos dessa cidade: \n");
    scanf(" %d", &numero_pontos_turisticos);

    printf("Código da cidade: %s\n", codigo_cidade);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área (KM²): %0.3f\n", area);
    printf("PIB (R$): %0.3f\n", PIB);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos);





    return 0;
}
