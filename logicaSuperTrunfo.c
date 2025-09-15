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
   

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
