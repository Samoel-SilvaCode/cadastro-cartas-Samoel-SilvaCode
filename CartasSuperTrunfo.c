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
        float somaFinalA;
        float somaFinalB;
        float finalizacaoCartaA = 0;
        float finalizacao2CartaA = 0;
        float finalizacaoCartaB = 0;
        float finalizacao2CartaB = 0;
        int segundaEscolha;
        int atributoEscolhido, atributoEscolhido2;
        char estado;
        char codigocarta[20];
        char nomecidade [20];
        int populacao;
        float area;
        float pib;
        int numerospontosturisticos;
        // adição de implemento nível aventureiro
        float densidadepopulacional;
        float pibpercapita; 
       // adição de implemento nível mestre
          float inversoDesidadePopulacional;
         float superPoder;




        char estado2;
        char codigocarta2 [20];
        char nomecidade2 [20];
        int populacao2;
        float area2;
        float pib2;
        int numerospontosturisticos2;
        // adição de implemento nível aventureiro
        float densidadepopulacional2;
        float pibpercapita2;
       // adição de implemento nível mestre
        float inversoDesidadePopulacional2;
        float superPoder2;

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

      // adição de implemento nível aventureiro

      densidadepopulacional = (float) populacao / area;

      pibpercapita = pib / (float)populacao;

      // adição de implemento nível mestre

      inversoDesidadePopulacional = area /(float) populacao;

      superPoder= (float)populacao 
      + area 
      + pib 
      + (float)numerospontosturisticos
      +pibpercapita 
      + inversoDesidadePopulacional;


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


        // adição de implemento nível aventureiro
      densidadepopulacional2 = (float) populacao2 / area2;

      pibpercapita2 = pib2 / (float)populacao2;


      // adição de implemento nível mestre

      inversoDesidadePopulacional2 = area2 /(float) populacao2;

      superPoder2= (float)populacao2 
      + area2 
      + pib2 
      + (float)numerospontosturisticos2
      +pibpercapita2 
      + inversoDesidadePopulacional2;



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
      // adição de implemento nível aventureiro
    printf("Densidade Populacional: %f hab/km² \n", densidadepopulacional);
    printf("PIB per Capita: %f reais \n", pibpercapita);



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
     // adição de implemento nível aventureiro
    printf("Densidade Populacional: %f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita: %f reais \n", pibpercapita2);
    

    // adição de implemento nível mestre
    // Área para comparação dos dados da cidade

    printf("\n");

    /*

    Feito comentario dessa parte do código para adptação da solicitação do Tema 3

    Utilizar estruturas de decisão.

    printf("Agora vamos comparar as duas cartas \n");
    printf("Caso o resultado da comparação for 01 carta 1 venceu\n");
    printf("Caso o resultado da comparação for 00 carta 2 venceu\n");

    printf("\n");

    printf("População a carta que venceu foi:%d\n" , populacao>populacao2);
    printf("Área a carta que venceu foi:%d\n", area>area2);
    printf("PIB a carta que venceu foi:%d\n", pib>pib2);
    printf("Número de Pontos Turísticos a carta que venceu foi:%d\n", numerospontosturisticos>numerospontosturisticos2);
    printf("Densidade Populacional a carta que venceu foi:%d\n", densidadepopulacional < densidadepopulacional2);
    printf("PIB per Capita a carta que venceu foi:%d\n", pibpercapita>pibpercapita2);
    printf("Super poder a carta que venceu foi:%d\n", superPoder >  superPoder2);

    printf("\n");

    */



     /*
      // implementação nível novato tema 3 estruturas de decisão.
      printf("Agora vamos comparar um atributo das duas cartas: \n");

      printf("\n");

      printf("Atributo escolhido população!\n");
      

      printf("\n");



      if (populacao > populacao2){

        printf("Carta 1 %s (%c): %d\n" , nomecidade, estado, populacao);

        printf("Carta 2 %s (%c): %d\n" , nomecidade2, estado2, populacao2);

        printf("Carta 1 venceu\n");
        
      }
      else{  
        printf("Carta 1 %s (%c): %d\n" , nomecidade, estado, populacao);

        printf("Carta 2 %s (%c): %d\n" , nomecidade2, estado2, populacao2);

        printf("Carta 2 venceu\n");

      }
    */
      // Menu interarivo implemento  nivel aventureiro tema 3

printf("## Escolha um atributo para comparar ##\n");
printf("1 - População\n");
printf("2 - Área \n");
printf("3 - PIB\n");
printf("4 - Pontos turisticos\n");
printf("5 - Densidade Populacional\n");
printf("6 - PIB per capita\n");
printf("7 - Super Poder\n");
printf("Digite sua escolha:");
scanf("%d", &segundaEscolha);

// Lógica do switch case de segunda apresentação
 switch (segundaEscolha)
 {
 case 1:
    if (segundaEscolha == 1)
    {
    printf("## Escolha um atributo para comparar ##\n");
    printf("2 - Área \n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha:\n");
    scanf("%d", &atributoEscolhido2);
    atributoEscolhido = segundaEscolha;
    }
    break;

case 2:
    if (segundaEscolha == 2)
    {
    printf("## Escolha um atributo para comparar ##\n");
    printf("1 - População\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha:\n");
    scanf("%d", &atributoEscolhido2);
    atributoEscolhido = segundaEscolha;
    }
    break;

case 3:
    if (segundaEscolha == 3)
    {
    printf("## Escolha um atributo para comparar ##\n");
    printf("1 - População\n");
    printf("2 - Área \n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha:\n");
    scanf("%d", &atributoEscolhido2);
    atributoEscolhido = segundaEscolha;
    }
    break;

case 4:
    if (segundaEscolha == 4)
    {
    printf("## Escolha um atributo para comparar ##\n");
    printf("1 - População\n");
    printf("2 - Área \n");
    printf("3 - PIB\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha:\n");
    scanf("%d", &atributoEscolhido2);
    atributoEscolhido = segundaEscolha;
    }
    break;
case 5:
    if (segundaEscolha == 5)
    {
    printf("## Escolha um atributo para comparar ##\n");
    printf("1 - População\n");
    printf("2 - Área \n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha:\n");
    scanf("%d", &atributoEscolhido2);
    atributoEscolhido = segundaEscolha;
    }
    break;

case 6:
    if (segundaEscolha == 6)
    {
    printf("## Escolha um atributo para comparar ##\n");
    printf("1 - População\n");
    printf("2 - Área \n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha:\n");
    scanf("%d", &atributoEscolhido2);
    atributoEscolhido = segundaEscolha;
    }
    break;

case 7:
    if (segundaEscolha == 7)
    {
    printf("## Escolha um atributo para comparar ##\n");
    printf("1 - População\n");
    printf("2 - Área \n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite sua escolha:\n");
    scanf("%d", &atributoEscolhido2);
    atributoEscolhido = segundaEscolha;

    }
    break;
 default:
    printf("Escolha uma opção válida\n");
    break;
 }
// Lógica do bloqueio de copia de atributos
if (atributoEscolhido == atributoEscolhido2)
{
  printf("Escolha opções diferentes\n");
  return 0;
}

printf("\n");
printf("Vamos comparar os resultados:\n");
 
// Lógica do menu interarivo implemento  nivel aventureiro tema 3
switch (atributoEscolhido)
{
case 1:
// Lógica da somotaria no final
        finalizacaoCartaA = populacao;
        finalizacaoCartaB = populacao2;

    if (populacao > populacao2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s \n", nomecidade , nomecidade2);
        printf("Atributo escolhido Populção \n");
        printf("Populção Carta 1: %d VS População Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (populacao == populacao2)
    {
         printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Populção\n");
        printf("Populção Carta 1: %d VS População Carta 2: %d\n", populacao, populacao2);
        printf("Empate\n");
          printf("\n");
    }else{
         printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Populção\n");
        printf("Populção Carta 1: %d VS População Carta 2: %d\n", populacao, populacao2);
        printf("Carta 2 Venceu\n");
          printf("\n");
    }
    
    
    break;

    case 2:
    finalizacaoCartaA = area;
    finalizacaoCartaB = area2;
    
   if (area > area2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Área\n");
        printf("Área Carta 1: %f VS Área Carta 2: %f\n", area, area2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (area == area2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Área\n");
        printf("Área Carta 1: %f VS Área Carta 2: %f\n", area, area2);
        printf("Empate\n");
          printf("\n");
    }else{
      printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Área\n");
        printf("Área Carta 1: %f VS Área Carta 2: %f\n", area, area2);
        printf("Carta 2 Venceu\n");
          printf("\n");

    }
    
    break;

    case 3:

    finalizacaoCartaA = pib;
    finalizacaoCartaB = pib2;

    if (pib > pib2)
    
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido PIB\n");
        printf("PIB Carta 1: %f VS PIB Carta 2: %f\n", pib, pib2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (pib == pib2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido PIB\n");
        printf("PIB Carta 1: %f VS PIB Carta 2: %f\n", pib, pib2);
        printf("Empate\n");
          printf("\n");
    }else{
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido PIB\n");
        printf("PIB Carta 1: %f VS PIB Carta 2: %f\n", pib, pib2);
        printf("Carta 2 Venceu\n");
          printf("\n");
    }
    
    break;

    case 4:
    finalizacaoCartaA = numerospontosturisticos;
    finalizacaoCartaB = numerospontosturisticos2;
   if (numerospontosturisticos > numerospontosturisticos2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Pontos Turisticos\n");
        printf("Pontos Turisticos Carta 1: %d VS Pontos turisticos Carta 2: %d\n", numerospontosturisticos, numerospontosturisticos2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (numerospontosturisticos == numerospontosturisticos2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Pontos Turisticos\n");
        printf("Pontos Turisticos Carta 1: %d VS Pontos turisticos Carta 2: %d\n", numerospontosturisticos, numerospontosturisticos2);
        printf("Empate\n");
          printf("\n");
    }else{
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Pontos Turisticos\n");
        printf("Pontos Turisticos Carta 1: %d VS Pontos turisticos Carta 2: %d\n", numerospontosturisticos, numerospontosturisticos2);
        printf("Carta 2 Venceu\n");
          printf("\n");
    }
    break;

    case 5:
    finalizacaoCartaA = densidadepopulacional;
    finalizacaoCartaB = densidadepopulacional2;
   if (densidadepopulacional < densidadepopulacional2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Densidade Populacional\n");
        printf("Densidade Populacional 1: %f VS Densidade Populacional Carta 2: %f\n", densidadepopulacional, densidadepopulacional2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (densidadepopulacional == densidadepopulacional2)
    {
         printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Densidade Populacional\n");
        printf("Densidade Populacional 1: %f VS Densidade Populacional Carta 2: %f\n", densidadepopulacional, densidadepopulacional2);
        printf("Empate\n");
          printf("\n");
    }else{
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Densidade Populacional\n");
        printf("Densidade Populacional 1: %f VS Densidade Populacional Carta 2: %f\n", densidadepopulacional, densidadepopulacional2);
        printf("Carta 2 Venceu\n");
          printf("\n");

    }
    
    break;

    case 6:
    finalizacaoCartaA = pibpercapita;
    finalizacaoCartaB = pibpercapita2;
    if (pibpercapita > pibpercapita2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido PIB PER CAPITA\n");
        printf("PIB PER CAPITA Carta 1: %f VS PIB PER CAPITA Carta 2: %f\n", pibpercapita, pibpercapita2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (pibpercapita == pibpercapita2)
    {
         printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido PIB PER CAPITA\n");
        printf("PIB PER CAPITA Carta 1: %f VS PIB PER CAPITA Carta 2: %f\n", pibpercapita, pibpercapita2);
        printf("Empate\n");
          printf("\n");
    }else{
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido PIB PER CAPITA\n");
        printf("PIB PER CAPITA Carta 1: %f VS PIB PER CAPITA Carta 2: %f\n", pibpercapita, pibpercapita2);
        printf("Carta 2 Venceu\n");
          printf("\n");

    }
    break;

    case 7:
    finalizacaoCartaA = superPoder;
    finalizacaoCartaB = superPoder2;
    if (superPoder > superPoder2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Super Poder\n");
        printf("Super Poder Carta 1: %f VS Super Poder Carta 2: %f\n", superPoder, superPoder2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (superPoder == superPoder2)
    {
         printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Super Poder\n");
        printf("Super Poder Carta 1: %f VS Super Poder Carta 2: %f\n", superPoder, superPoder2);
        printf("Empate\n");
          printf("\n");
    }else{
 printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Super Poder\n");
        printf("Super Poder Carta 1: %f VS Super Poder Carta 2: %f\n", superPoder, superPoder2);
        printf("Carta 2 Venceu\n");
          printf("\n");

    }
    
    break;

default:
    printf("Escolha uma opção válída\n");
    break;
}


switch (atributoEscolhido2)
{
case 1:
    finalizacao2CartaA = populacao;
    finalizacao2CartaB = populacao2;

    if (populacao > populacao2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s \n", nomecidade , nomecidade2);
        printf("Atributo escolhido Populção \n");
        printf("Populção Carta 1: %d VS População Carta 2: %d\n", populacao, populacao2);
        printf("Carta 1 Venceu\n");

        printf("\n");
    }else if (populacao == populacao2)
    {
         printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Populção\n");
        printf("Populção Carta 1: %d VS População Carta 2: %d\n", populacao, populacao2);
        printf("Empate\n");
          printf("\n");
    }else{
         printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Populção\n");
        printf("Populção Carta 1: %d VS População Carta 2: %d\n", populacao, populacao2);
        printf("Carta 2 Venceu\n");
          printf("\n");

    }
    
    
    break;

    case 2:
    finalizacao2CartaA = area;
    finalizacao2CartaB = area2;
   if (area > area2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Área\n");
        printf("Área Carta 1: %f VS Área Carta 2: %f\n", area, area2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (area == area2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Área\n");
        printf("Área Carta 1: %f VS Área Carta 2: %f\n", area, area2);
        printf("Empate\n");
          printf("\n");
    }else{
      printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Área\n");
        printf("Área Carta 1: %f VS Área Carta 2: %f\n", area, area2);
        printf("Carta 2 Venceu\n");
          printf("\n");

    }
    
    break;

    case 3:

    finalizacao2CartaA = pib;
    finalizacao2CartaB = pib2;
    if (pib > pib2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido PIB\n");
        printf("PIB Carta 1: %f VS PIB Carta 2: %f\n", pib, pib2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (pib == pib2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido PIB\n");
        printf("PIB Carta 1: %f VS PIB Carta 2: %f\n", pib, pib2);
        printf("Empate\n");
          printf("\n");
    }else{
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido PIB\n");
        printf("PIB Carta 1: %f VS PIB Carta 2: %f\n", pib, pib2);
        printf("Carta 2 Venceu\n");
          printf("\n");
    }
    
    break;

    case 4:
    finalizacao2CartaA = numerospontosturisticos;
    finalizacao2CartaB = numerospontosturisticos2;
   if (numerospontosturisticos > numerospontosturisticos2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Pontos Turisticos\n");
        printf("Pontos Turisticos Carta 1: %d VS Pontos turisticos Carta 2: %d\n", numerospontosturisticos, numerospontosturisticos2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (numerospontosturisticos == numerospontosturisticos2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Pontos Turisticos\n");
        printf("Pontos Turisticos Carta 1: %d VS Pontos turisticos Carta 2: %d\n", numerospontosturisticos, numerospontosturisticos2);
        printf("Empate\n");
          printf("\n");
    }else{
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Pontos Turisticos\n");
        printf("Pontos Turisticos Carta 1: %d VS Pontos turisticos Carta 2: %d\n", numerospontosturisticos, numerospontosturisticos2);
        printf("Carta 2 Venceu\n");
          printf("\n");
    }
    break;

    case 5:
    finalizacao2CartaA = densidadepopulacional;
    finalizacao2CartaB = densidadepopulacional2;
   if (densidadepopulacional < densidadepopulacional2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Densidade Populacional\n");
        printf("Densidade Populacional 1: %f VS Densidade Populacional Carta 2: %f\n", densidadepopulacional, densidadepopulacional2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (densidadepopulacional == densidadepopulacional2)
    {
         printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Densidade Populacional\n");
        printf("Densidade Populacional 1: %f VS Densidade Populacional Carta 2: %f\n", densidadepopulacional, densidadepopulacional2);
        printf("Empate\n");
          printf("\n");
    }else{
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Densidade Populacional\n");
        printf("Densidade Populacional 1: %f VS Densidade Populacional Carta 2: %f\n", densidadepopulacional, densidadepopulacional2);
        printf("Carta 2 Venceu\n");
          printf("\n");
    }
    
    break;

    case 6:
    finalizacao2CartaA = pibpercapita;
    finalizacao2CartaB = pibpercapita2;
    if (pibpercapita > pibpercapita2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido PIB PER CAPITA\n");
        printf("PIB PER CAPITA Carta 1: %f VS PIB PER CAPITA Carta 2: %f\n", pibpercapita, pibpercapita2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (pibpercapita == pibpercapita2)
    {
         printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido PIB PER CAPITA\n");
        printf("PIB PER CAPITA Carta 1: %f VS PIB PER CAPITA Carta 2: %f\n", pibpercapita, pibpercapita2);
        printf("Empate\n");
          printf("\n");
    }else{
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido PIB PER CAPITA\n");
        printf("PIB PER CAPITA Carta 1: %f VS PIB PER CAPITA Carta 2: %f\n", pibpercapita, pibpercapita2);
        printf("Carta 2 Venceu\n");
          printf("\n");
    }
    break;

    case 7:
    finalizacao2CartaA = superPoder;
    finalizacao2CartaB = superPoder2;
    if (superPoder > superPoder2)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Super Poder\n");
        printf("Super Poder Carta 1: %f VS Super Poder Carta 2: %f\n", superPoder, superPoder2);
        printf("Carta 1 Venceu\n");
          printf("\n");
    }else if (superPoder == superPoder2)
    {
         printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Super Poder\n");
        printf("Super Poder Carta 1: %f VS Super Poder Carta 2: %f\n", superPoder, superPoder2);
        printf("Empate\n");
          printf("\n");
    }else{
 printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Atributo escolhido Super Poder\n");
        printf("Super Poder Carta 1: %f VS Super Poder Carta 2: %f\n", superPoder, superPoder2);
        printf("Carta 2 Venceu\n");
          printf("\n");
    }
    
    break;

default:
    printf("Escolha uma opção válída\n");
    break;
}
  // Lógica da somatoria final
somaFinalA = (finalizacaoCartaA + finalizacao2CartaA);

somaFinalB = (finalizacaoCartaB + finalizacao2CartaB);

printf("\n");

printf("Vamos fazer uma terceira comparação pra saber quem ganhou essa terceira rodada\n");

  if (somaFinalA > somaFinalB)
    {
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Vamos apresentar o resultado da somatoria dos atributos\n");
        printf("Densidade Somatoria Carta 1: %f VS Somatoria Carta 2: %f\n", somaFinalA, somaFinalB);
        printf("Carta 1 Venceu\n");
    }else if (somaFinalA == somaFinalB)
    {
         printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
        printf("Vamos apresentar o resultado da somatoria dos atributos\n");
        printf("Densidade Somatoria Carta 1: %f VS Somatoria Carta 2: %f\n", somaFinalA, somaFinalB);
        printf("Empate\n");
    }else{
        printf("Cidade da Carta 1: %s VS Cidade da Carta 2: %s\n", nomecidade , nomecidade2);
       printf("Vamos apresentar o resultado da somatoria dos atributos\n");
        printf("Densidade Somatoria Carta 1: %f VS Somatoria Carta 2: %f\n", somaFinalA, somaFinalB);
        printf("Carta 2 Venceu\n");

    }


 
  
  return 0;
}

