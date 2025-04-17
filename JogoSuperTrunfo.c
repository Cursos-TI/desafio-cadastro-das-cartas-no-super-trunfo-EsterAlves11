#include <stdio.h>

int main() {
    
    char Estado[50];
    char CódigoDacarta[50];
    char Nomedacidade[50];
    int População;
    float Area;
    float PIB; 
    int Númerodepontosturisticos;

    
    char estado[50];
    char códigodacarta[50];
    char nomedacidade[50];
    int população;
    float area;
    float pib; 
    int númerodepontosturisticos;

    printf("\n");
    printf("Carta 01\n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", CódigoDacarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nomedacidade);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &População);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &Númerodepontosturisticos);

    // Espaço entre as cartas
    printf("\n");

    printf("Carta 02\n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", códigodacarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &população);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &númerodepontosturisticos);

    // Exibição dos dados coletados
    printf("\n--- DADOS DAS CARTAS ---\n");

    printf("\n");
    printf("\nCarta 01\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", CódigoDacarta);
    printf("Nome da cidade: %s\n", Nomedacidade);
    printf("População: %d\n", População);
    printf("Área²: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Númerodepontosturisticos);


    printf("\n");
    printf("\nCarta 02\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", códigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", população);
    printf("Área²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", númerodepontosturisticos);

    return 0;
}