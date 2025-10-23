#include <stdio.h>

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

    //* Menu do jogo *
    int opcao;

    printf("### Menu Principal ###\n");
    printf("1. Iniciar jogo\n");
    printf("2. Como jogar\n");
    printf("3. Sair\n");
    printf("Escolher uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
      case 1:
    // Resposta do usuário * Carta 1
    printf("Digite uma letra do 'A' a 'H' para a Carta 1 \n");
    scanf("%s", estado1);

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
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

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
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

    //Calculo densidade  e per capita carta 1 e 2 (nível aventureiro)
    //--Carta 1--
    float densidade1 = (float)populacao1 / area1;
    float percapita1 = (pib1 * 1000000000.0) / populacao1;
    //--Carta 2--
    float densidade2 = (float)populacao2 / area2;
    float percapita2 = (pib2 * 1000000000.0) / populacao2;

    // Visualização das cartas
    // *carta 1
    printf("\nCarta 1\nEstado: %s \n", estado1);
    printf("Codigo da Carta: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", percapita1);

    //Carta 2
    printf("\nCarta 2\nEstado: %s \n", estado2);
    printf("Codigo da Carta: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", percapita2);

      // Comparação das cartas
      char atributodecomparacao1;

      //Primeiro atributo
      printf("Escolha o seu primeiro atributo de comparação: \n");
      printf("A. População\n");
      printf("B. Área\n");
      printf("C. PIB\n");
      printf("D. PIB per capita\n");
      printf("E. Densidade populacional\n");
      scanf(" %c", &atributodecomparacao1);


      switch (atributodecomparacao1) {
        case 'A':
        printf("\nComparação 1 entre as cartas (Atributo: População): \n");
        printf("\nCarta 1 - %s: %d\n", cidade1, populacao1);
        printf("Carta 2 - %s: %d\n", cidade2, populacao2);
        if(populacao1 > populacao2) {
          printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
          printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } 
        break;

        case 'B':
        printf("\nComparação 1 entre as cartas (Atributo: Área): \n");
        printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
        printf("Carta 2 - %s: %.2f\n", cidade2, area2);
        if(area1 > area2) {
          printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
          printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } 
        break;

        case 'C':
        printf("\nComparação 1 entre as cartas (Atributo: PIB): \n");
        printf("\nCarta 1 - %s: %.f\n", cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
        if(pib1 > pib2) {
          printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
          printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } 
        break;

        case 'D':
        printf("\nComparação 1 entre as cartas (Atributo: PIB per capita): \n");
        printf("\nCarta 1 - %s: %.2f\n", cidade1, percapita1);
        printf("Carta 2 - %s: %.2f\n", cidade2, percapita2);
        if(percapita1 > percapita2) {
          printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
          printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } 
        break;

        case 'E':
        printf("\nComparação 1 entre as cartas (Atributo: Densidade populacional): \n");
        printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
        printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
        if(densidade1 < densidade2) {
          printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
          printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } 
        break;

        default:
        printf("Opção inválida, tente novamente! ): \n)");
      break;
      }
  

      case 2:
        printf("\n### Tutorial de como jogar ###\n");
        printf("1. Primeiro informe os dados da sua carta 1 de Trunfo\n");
        printf("2. Informe os dados de sua segunda carta\n");
        printf("3. Escolha o primeiro atributo para comparação\n");
        printf("4. Escolha o segundo atributo de comparação sem repetir o anterior\n");
        printf("4. Descubra qual carta venceu, divirta-se!\n");
        break;
      case 3:
        printf("Saindo...\n");
        break;
      default:
      printf("Opção inválida, tente novamente!\n");
    }

    return 0;
  }
