#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
/*
Com o conhecimento adquirido atualmente para o nivel novato
a forma de conseguir exibir duas cartas diferentes
seria criar copias das variaveis assim o programa consegue exibir duas cartas simultaneamente


*/
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

        char estado;
        char codigocarta[20];
        char nomecidade [20];
        int populacao;
        float area;
        float pib;
        int numerospontosturisticos; 

        char estado2;
        char codigocarta2 [20];
        char nomecidade2 [20];
        int populacao2;
        float area2;
        float pib2;
        int numerospontosturisticos2; 


      // Área para entrada de dados
      printf("Desafio SuperTrunfo \n");


      // Recebe o codigo do estado
      printf("Digite o código do estado:\n");
      printf("Os estados vão de A - H \n");
      scanf(" %c" , &estado);

      // Recebe o codigo da carta
      printf("Digite o código da carta:\n");
      printf("Os codigo vão de 01 a 04\n");
      scanf("%s",codigocarta);

      // Recebe o nome da cidade
      printf("Insira o nome da cidade\n");
      scanf("%s" , nomecidade);


      // Recebe o numero da populção 
      printf("Insira a população da cidade\n");
      scanf("%d" , &populacao);


      // Recebe a área da cidade
      printf("Insira a área da cidade\n");
      scanf("%f" , &area);


      // Recebe o Pib da cidade
      printf("Insira o PIB da cidade\n");
      scanf("%f" , &pib);


      // Recebe a Quantidade de pontos turisticos da cidade
      printf("Insira a quantidade de pontos turísticos da cidade\n");
      scanf("%d" , &numerospontosturisticos);


      printf("Agora vamos preencher os dados da próxima carta \n");



      // Recebe o codigo do estado
      printf("Digite o código do estado:\n");
      printf("Os estados vão de A - H \n");
      scanf(" %c" , &estado2);

      // Recebe o codigo da carta
      printf("Digite o código da carta:\n");
      printf("Os codigo vão de 01 a 04\n");
      scanf("%s" , codigocarta2);


      // Recebe o nome da cidade
      printf("Insira o nome da cidade\n");
      scanf("%s" , nomecidade2);


      // Recebe o numero da populção 
      printf("Insira a população da cidade\n");
      scanf("%d" , &populacao2);


      // Recebe a área da cidade
      printf("Insira a área da cidade\n");
      scanf("%f" , &area2);


      // Recebe o Pib da cidade
      printf("Insira o PIB da cidade\n");
      scanf("%f" , &pib2);


      // Recebe a Quantidade de pontos turisticos da cidade
      printf("Insira a quantidade de pontos turísticos da cidade\n");
      scanf("%d" , &numerospontosturisticos2);






     // Área para exibição dos dados da cidade

    printf("Agora vamos analisar as duas cartas \n");

    //exibe na tela dados da carta 1
    printf("Carta 1 \n");
    printf("Estado: %c\n", estado );
    printf("Código: %c%s \n", estado , codigocarta );
    printf("Nome da cidade: %s \n", nomecidade);
    printf("População: %d habitantes \n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %f reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", numerospontosturisticos);

    printf("\n");
    //exibe na tela dados da carta 2
    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2 );
    printf("Código: %c%s \n", estado2 , codigocarta2 );
    printf("Nome da cidade: %s \n", nomecidade2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numerospontosturisticos2);








return 0;
} 
