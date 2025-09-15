#include <stdio.h>
#include <string.h>

int main() {
     // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo_carta1[4]; 
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

// --- Leitura da primeira carta ---
    printf("=== Cadastro da Carta1=== \n");
    printf("Digite o estado da carta-(de A até H): ");
    scanf("%c", &estado1);
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo_carta1);
    printf("Digite o nome da Cidade: ");
    scanf("%s", nome_cidade1);
    printf("Digite a População: ");
    scanf("%d", &populacao1); 
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB(em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

// --- Leitura da segunda carta ---
    printf("=== Cadastro da Carta2=== \n");
    printf("Digite o estado da carta-(De A até H): ");
    scanf("%c", &estado2);
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo_carta2);
    printf("Digite o nome da Cidade: ");
    scanf("%s", nome_cidade2);
    printf("Digite a População: ");
    scanf("%d", populacao2);
    printf("Digite a área(km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
   
    printf("\n");
    
    // --- Exibição da primeira carta ---)
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (km²): %.2f\n", area1);  
    printf("PIB (em bilhões): %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);     

    printf("\n");

    // --- Exibição da segunda carta ---
    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB (em bilhões): %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("\n");

    return 0;
}
