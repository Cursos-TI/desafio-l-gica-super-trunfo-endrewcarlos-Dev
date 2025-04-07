#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    

    int main (){
        
        // Declaração das variáveis - CARTA 01
        int pontosturisticos;
        int regras, opcao;
        int resultado1, resultado2;
        unsigned long int populacao;
        char estado;
        char codigo[5];
        char cidade[26];
        char primeiroatributo;
        float area;
        float pib;
        float densidadepopulacional;
        float pibpercapita;
        float Super_Poder;

        // Menu Principal Com o uso do Switch
        printf("\n###### Bem-vindo ao Jogo Super Trunfo - Países ######\n");
        printf("Menu principal\n");
        printf("1. iniciar jogo\n");
        printf("2. ver regras\n");
        printf("3. sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);
       
        // Entrada das informações fornecidas pelo usuário DA CARTA 1
        switch (opcao)
        {
        case 1:
        printf(" - CARTA 1 - \n");
        printf("Estado: A \n");
        scanf("%c", &estado);
        
        printf("Digite o código da carta: \n");
        scanf("%s", codigo);
        
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade);
        
        printf("Digite a População: \n");
        scanf("%d", &populacao);
        
        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos);
        
        printf("Digite a área: \n");
        scanf("%f", &area);
        
        printf("Digite o PIB: \n");
        scanf("%f", &pib);
        break;
        case 2:
            printf("A explicação das regras\n");
            printf("Digite a opção relacionada as regras do jogo\n");
            scanf("%d", &regras);
            switch (regras)
            {
            case 1:
                printf("Vence a carta com o maior valor no atributo escolhido.\n");
                break;
            case 2:
                printf("Para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
                break;
            default:
                break;
            }
            break;
        case 3:
            printf("saindo do jogo\n");
            break;
        default:
            printf("Opção Invalida\n");
            break;
        }

        // Cálculo da Densidade Populacional e do PIB per Capita CARTA 1
        densidadepopulacional = populacao / area;
        pibpercapita =  pib / populacao;
        Super_Poder = pib + pibpercapita + pontosturisticos + populacao + densidadepopulacional + area;
        
        // Declaração das variáveis - CARTA 02
        int pontosturisticos2;
        unsigned long int populacao2;
        char estado2;
        char codigo2[5];
        char cidade2[26];
        char segundoatributo;
        float area2;
        float pib2;
        float densidadepopulacional2;
        float pibpercapita2;
        float Super_Poder2;
        
        // Entrada das informações fornecidas pelo usuário DA CARTA 2
        printf("\n - CARTA 2 - \n");
        printf("Estado: B \n");
            
        printf("Digite o código da carta: \n");
        scanf("%s", codigo2);
            
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade2);
            
        printf("Digite a População: \n");
        scanf("%d", &populacao2);
            
        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos2);
            
        printf("Digite a área: \n");
        scanf("%f", &area2);
            
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
    
        // Cálculo do Super Poder, Densidade Populacional e do PIB per Capita CARTA 2
        densidadepopulacional2 = populacao2 / area2;
        pibpercapita2 = pib2 / populacao2;
        Super_Poder2 = pib2 + pibpercapita2 + pontosturisticos2 + populacao2 + densidadepopulacional2 + area2;
        
        
        // Saída das informações fornecidas pelo usuário DA CARTA 1 e CARTA 2
        printf("\n --CARTA 1-- \n - Estado: A%c\n - Código da Carta: %s\n - Nome da cidade: %s\n", estado, codigo, cidade);
        printf(" - População: %.2d\n - Número de Pontos Turísticos: %d\n - área: %.2f KM²\n - PIB: %.2f Bilhões de Reais\n", populacao, pontosturisticos, area, pib);
        printf(" - Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
        printf(" - PIB per Capita: %f REAIS\n", pibpercapita);
        
        printf("\n --CARTA 2-- \n - Estado: B%c\n - Código da Carta: %s\n - Nome da cidade: %s\n", estado2, codigo2, cidade2);
        printf(" - População: %.2d\n - Número de Pontos Turísticos: %d\n - área: %.2f KM²\n - PIB: %.2f Bilhões de Reais\n", populacao2, pontosturisticos2, area2, pib2);
        printf(" - Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
        printf(" - PIB per Capita: %f REAIS\n", pibpercapita2);
            
        // Comparação do resultado entre a Carta1 e a Carta2 com switch
        
        printf("\n=====QUEM GANHA? CARTA 1 OU CARTA 2?=====\n");
        printf("Escolha o primeiro Atributo\n");
        printf("1. população\n");
        printf("2. Número de Pontos Turísticos\n");
        printf("3. área\n");
        printf("4. Pib\n");
        printf("5. Densidade populacional\n");
        printf("6. Pib per Capita\n");
        printf("7. Sair\n");

        printf("Escolha a Comparação\n");
        scanf("%d", &primeiroatributo);

        switch (primeiroatributo)
        {
      case 1:
         printf("%s vs %s\n", cidade, cidade2);
         printf("Você escolheu a opção: População\n");
         printf("Carta 1: %lu Habitantes\n", populacao);
         printf("Carta 2: %lu habitantes\n", populacao2);
         resultado1 = populacao > populacao2 ? 1 : 0;
         break;
      case 2:
         printf("%d vs %d\n", pontosturisticos, pontosturisticos2);
         printf("Você escolheu a opção: Número de Pontos Turísticos\n");
         printf("Carta 1: %d\n", pontosturisticos);
         printf("Carta 2: %d\n", pontosturisticos2);
         resultado1 = pontosturisticos > pontosturisticos2 ? 1 : 0;
         break;
      case 3:
         printf("%f vs %f\n", area, area2);
         printf("Você escolheu a opção: Área\n");
         printf("Carta 1: %f\n", area);
         printf("Carta 2: %f\n", area2);
         resultado1 = area > area2 ? 1 : 0;
         break;
      case 4:
         printf("%f vs %f\n", pib, pib2);
         printf("Você escolheu a opção: PIB\n");
         printf("Carta 1: %f\n", pib);
         printf("Carta 2: %f\n", pib2);
         resultado1 = pib > pib2 ? 1 : 0;
         break;
      case 5:
         printf("%f vs %f\n", densidadepopulacional, densidadepopulacional2);
         printf("Você escolheu a opção: Densidade Populacional\n");
         printf("Carta 1: %f\n", densidadepopulacional);
         printf("Carta 2: %f\n", densidadepopulacional2);
         resultado1 = densidadepopulacional > densidadepopulacional2 ? 1 : 0;
         break;
      case 6:
         printf("%f vs %f\n", pibpercapita, pibpercapita2);
         printf("Você escolheu a opção: PIB per Capita:\n");
         printf("Carta 1: %f\n", pibpercapita);
         printf("Carta 2: %f\n", pibpercapita2);
         resultado1 = pibpercapita > pibpercapita2 ? 1 : 0;
         break;
      case 7:
         printf("Saindo....\n");
         break;
        default:
         printf("Opção inválida! Tente novamente.\n");
         break;
         }
        
      printf("Escolha o segundo Atributo\n");
      printf("Você deve escolher um atributo diferente do primeiro\n");
      printf("1. população\n");
      printf("2. Número de Pontos Turísticos\n");
      printf("3. área\n");
      printf("4. Pib\n");
      printf("5. Densidade populacional\n");
      printf("6. Pib per Capita\n");
      printf("7. Sair\n");
        
      printf("Escolha a Comparação\n");
      scanf("%d", &segundoatributo);
        
        if (primeiroatributo == segundoatributo)
        {
         printf("Você escolheu o mesmo atributo\n");
        } else {
         switch (segundoatributo)
            {
      case 1:
         printf("%s vs %s\n", cidade, cidade2);
         printf("Você escolheu a opção: População\n");
         printf("Carta 1: %lu Habitantes\n", populacao);
         printf("Carta 2: %lu habitantes\n", populacao2);
         resultado2 = populacao > populacao2 ? 1 : 0;
         break;
      case 2:
         printf("%d vs %d\n", pontosturisticos, pontosturisticos2);
         printf("Você escolheu a opção: Número de Pontos Turísticos\n");
         printf("Carta 1: %d\n", pontosturisticos);
         printf("Carta 2: %d\n", pontosturisticos2);
         resultado2 = pontosturisticos > pontosturisticos2 ? 1 : 0;
         break;
      case 3:
         printf("%f vs %f\n", area, area2);
         printf("Você escolheu a opção: Área\n");
         printf("Carta 1: %f\n", area);
         printf("Carta 2: %f\n", area2);
         resultado2 = area > area2 ? 1 : 0;
         break;
      case 4:
         printf("%f vs %f\n", pib, pib2);
         printf("Você escolheu a opção: PIB\n");
         printf("Carta 1: %f\n", pib);
         printf("Carta 2: %f\n", pib2);
         resultado2 = pib > pib2 ? 1 : 0;
         break;
      case 5:
         printf("%f vs %f\n", densidadepopulacional, densidadepopulacional2);
         printf("Você escolheu a opção: Densidade Populacional\n");
         printf("Carta 1: %f\n", densidadepopulacional);
         printf("Carta 2: %f\n", densidadepopulacional2);
         resultado2 = densidadepopulacional > densidadepopulacional2 ? 1 : 0;
         break;
      case 6:
         printf("%f vs %f\n", pibpercapita, pibpercapita2);
         printf("Você escolheu a opção: PIB per Capita:\n");
         printf("Carta 1: %f\n", pibpercapita);
         printf("Carta 2: %f\n", pibpercapita2);
         resultado2 = pibpercapita > pibpercapita2 ? 1 : 0;
         break;
      case 7:
         printf("Saindo....\n");
         break;
      default:
         printf("Opção inválida! Tente novamente.\n");      
      break;
            }
        }
        
      if (resultado1 && resultado2)
      {
         printf("Você ganhou !!\n");
      } else if (resultado1 != resultado2)
      {
        printf("Empatou ;-;\n");
      } else {
         printf("Você Perdeu\n");
      }
      
      if (Super_Poder == Super_Poder2)
        {
         printf("Empate Geral :-:\n");
      if (Super_Poder > Super_Poder2)
         printf("\n A Carta 1 Venceu");
        }
      else{
         printf("\n A Carta 2 Venceu");
        }
       
   return 0;
   }