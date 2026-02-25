#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // CARTA 1 

  char estado_1[20]; //  Estado com até 20 caracteres. char representado por %s
  char codigo_1[10]; // Código com até 10 caracteres.
  char cidade_1[20]; // Cidade com até 20 caracteres. 
  int população_1; // Int representado por %d
  int pontosturisticos_1;
  float área_1;
  float pib_1;


  // CARTAR 2 

  char estado_2[20];
  char codigo_2[10];
  char cidade_2[20];
  int população_2;
  int pontosturisticos_2;
  float área_2;
  float pib_2;

  // Área para entrada de dados

  // Entrada de dados da Carta 1

  printf("Entrada de dados da carta 1\n");

  printf("Digite o nome do estado:\n");
  scanf("%s", estado_1); // Não precisa de & porque não é número. %s é char

  printf("Digite o código da carta:\n");
  scanf("%s", codigo_1);

  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade_1); 

  printf("Digite o número de habitantes:\n");
  scanf("%d", &população_1); // No scanf se usa & para números. %d para Int

  printf("Digite o tamanho da área:\n");
  scanf("%f", &área_1); // %f para float

  printf("Digite o PIB:\n");
  scanf("%f", &pib_1); // %f para float

  printf("Digite a quantidade de pontos turísticos:\n");
  scanf("%d", &pontosturisticos_1);


  // Entrada de dados da carta 2 

  printf("Entrada de dados da carta 2\n");

  printf("Digite o nome do estado:\n");
  scanf("%s", estado_2);

  printf("Digite o código da carta:\n");
  scanf("%s", codigo_2);

  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade_2);

  printf("Digite o número de habitantes:\n");
  scanf("%d", &população_2);

  printf("Digite o tamanho da área:\n");
  scanf("%f", &área_2);

  printf("Digite o PIB:\n");
  scanf("%f", &pib_2);

  printf("Digite a quantidade de pontos turísticos:\n");
  scanf("%d", &pontosturisticos_2);

  // Área para exibição dos dados da cidade

   // DADOS DA CARTA 1 

  printf("Dados da Carta 1\n");

  printf("Estado: %s\n", estado_1); 
  printf("Código: %s\n", codigo_1);
  printf("Cidade: %s\n", cidade_1);
  printf("População: %d\n", população_1); // No printf não se usa &. Exemplo print("População: %d\n", &população_1); 
  printf("Área: %f\n", área_1);
  printf("PIB: %f\n", pib_1);
  printf("Pontos turísticos: %d\n");

 // DADOS DA CARTA 2

  printf("Dados da Carta 2\n");

  printf("Estado: %s\n", estado_2);
  printf("Código: %s\n", codigo_2); 
  printf("Cidade: %s\n", cidade_2);
  printf("População: %d\n", população_2);
  printf("Área: %f\n", área_2);
  printf("PIB: %f\n", pib_2);
  printf("Pontos turísticos: %d\n", pontosturisticos_2);

return 0;

} 
