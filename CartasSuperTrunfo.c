#include <stdio.h>

int main(){
    // CARTA 1 
    char estado[20]; // Estado com até 20 caracteres. char representado no scanf por %s
    char codigo[10]; // Código com até 10 caracteres
    char cidade[20]; // Cidade com até 20 caracteres
    int populacao;
    int pontosturistico;
    float area;
    float pib;
    float densidadepopulacional;
    float pib_per_capita;
    
    printf("CARTA 1\n");

    printf("Digite o nome do estado:\n");
    scanf("%s", estado);

    printf("Digite o código da carta:\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade); // não precisa de & porque não é número

    printf("Digite o número de habitantes:\n");
    scanf("%d", &populacao); // no scanf se usa & para números

    printf("Digite o tamanho da área:\n");
    scanf("%f", &area);

    printf("Digite o número do PIB:\n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turistico:\n");
    scanf("%d", &pontosturistico);

    // Desafio nivel aventureiro: calculando área e pib per capita 
    // CARTA 1

    densidadepopulacional = populacao / area;    // '/' para divisão
    pib_per_capita = pib / populacao; // (habitantes)

    // CARTA 2

    char estado_2 [20];
    char codigo_2 [10];
    char cidade_2 [20];
    int populacao_2;
    int pontosturisticos_2;
    float area_2;
    float pib_2;
    float densidadepopulacional_2;
    float pib_per_capita_2;

    printf("CARTA 2\n");

    printf("Digite o estado:\n");
    scanf("%s", estado_2);

    printf("Digite o código:\n");
    scanf("%s", codigo_2);

    printf("Digite a cidade:\n");
    scanf("%s", cidade_2);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &populacao_2);

    printf("Digite a área:\n");
    scanf("%f", &area_2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib_2);

    printf("Digite o número de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos_2);

    densidadepopulacional_2 = populacao_2 / area_2;
    pib_per_capita_2 = pib_2 / populacao_2; // (habitantes)

    // Dados inseridos da Carta 1

    printf("DADOS DA CARTA 1\n");
    printf("Estado: %s\n", estado); // no printf não se usa &. Exemplo: printf("Estado: %s\n", &estado)
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area); 
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turisticos: %d\n", pontosturistico);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);


    // Desafio nivel aventureiro: calculando área e pib per capita 


    // Dados inseridos da Carta 2

    printf("DADOS DA CARTA 2\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da cidade: %s\n", cidade_2); 
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Pontos Turísticos: %d\n", pontosturisticos_2);
    printf("Densidade populacional carta 2: %.2f hab/km²\n", densidadepopulacional_2);
    printf("PIB per capita: %.2f\n", pib_per_capita_2);


    return 0;

}