#include <stdio.h>

int main() {
    int codigo;
    char nome[20];
    int populacao;
    float area;
    float PIB; 
    int pontos;

    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo);
    
    while (getchar() != '\n');

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    while (getchar() != '\n');

    printf("Digite a população dessa cidade: \n");
    scanf ("%d", &populacao);

    while (getchar() != '\n');

    printf("Digite a área dessa cidade em KM²: \n");
    scanf("%f", &area);

    while (getchar() != '\n');

    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &PIB);

    while (getchar() != '\n');
    
    printf("Digite o número de pontos turísticos dessa cidade: \n");
    scanf("%d", &pontos);

    printf("Código da cidade: %d\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área (KM²): %0.2f\n", area);
    printf("PIB: %0.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", pontos);


    return 0;
}
