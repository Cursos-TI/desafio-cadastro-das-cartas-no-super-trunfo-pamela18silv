#include <stdio.h><stdin>

  int main(){

    // Carta 1

    // declarar variáveis
    char estado1[2];
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int PontosTuristicos1;

    //Carta 2 * Declarar variáveis
    char estado2[2];
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int PontosTuristicos2;

    // Resposta do usuário * Carta 1
    printf("Digite uma letra do 'A' a 'H' para a Carta 1 \n");
    scanf("%s", estado1);

    printf("A letra do estado seguida de um numero de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade \n");
    scanf("%s", cidade1);
    
    printf("Informe a população \n");
    scanf("%d", &populacao1);

    printf("Digite a área \n");
    scanf("%f", &area1);

    printf("Informe o PIB \n");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos \n");
    scanf("%d", &PontosTuristicos1);

    // Resposta do usuário * Carta 2

    printf("\nDigite uma letra do 'A' a 'H' para a Carta 2 \n");
    scanf("%s", estado2);

    printf("A letra do estado seguida de um numero de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade \n");
    scanf("%s", cidade2);
    
    printf("Informe a população \n");
    scanf("%d", &populacao2);

    printf("Digite a área \n");
    scanf("%f", &area2);

    printf("Informe o PIB \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos \n");
    scanf("%d", &PontosTuristicos2);

    // Visualização das cartas
    // *carta 1
    printf("\nCarta 1\nEstado: %s \n", estado1);
    printf("Codigo da Carta: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", PontosTuristicos1);

    //Carta 2
    printf("\nCarta 2\nEstado: %s \n", estado2);
    printf("Codigo da Carta: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", PontosTuristicos2);

    return 0;
  }