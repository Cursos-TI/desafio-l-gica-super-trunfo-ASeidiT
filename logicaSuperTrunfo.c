#include <stdio.h>

    int main(){

// Aluno: Andre Seidi Tsukide - Trabalho Super Trunfo

// DEFINIÇÃO DE VARIÁVEIS
    char estado_1, estado_2;
    char codigo_1_1[4], codigo_2_2[4];
    char cidade_1_1[30], cidade_2_2[30];
    int ptos_tur_1_1, ptos_tur_2_2, atributo_escolhido;
    unsigned long int populacao_1_1, populacao_2_2;
    float area_1_1, PIB_1_1, area_2_2, PIB_2_2, densid_pop_1, pib_percapita_1, densid_pop_2, pib_percapita_2;
    float superpoder1, superpoder2, inv_densid_1, inv_densid_2;

// SAUDAÇÃO DE BOAS VINDAS AO JOGO
    printf("Olá, bem vindo ao jogo Super trunfo do curso de Análise de Sistemas Estácio - 1° Semestre 2025!\n");
    printf("***PRECISAMOS COMEÇAR INSERINDO OS DADOS DAS CARTAS DO JOGO.***\n\n");

// CAPTURA DE VARIÁVEIS DA CARTA 1
    printf("DADOS DA CARTA 1:\n");
    printf("Defina uma letra para o estado entre A e H:\n");
    scanf(" %c", &estado_1);
    printf("Informe o código da carta:\n");
    scanf("%s", codigo_1_1);
    printf("Informe o nome da cidade:\n");
    scanf(" %s", cidade_1_1);
    printf("informe o número de habitantes:\n");
    scanf(" %lu", &populacao_1_1);
    printf("Informe a área em km²:\n");
    scanf(" %f", &area_1_1);
    printf("Informe o PIB em bilhões de reais:\n");
    scanf(" %f", &PIB_1_1);
    printf("Informe quantos pontos turísticos a cidade tem:\n");
    scanf(" %d", &ptos_tur_1_1);

    densid_pop_1 = populacao_1_1 / area_1_1;
    pib_percapita_1 = (PIB_1_1 * 1000000000) / populacao_1_1;
    inv_densid_1 = 1/densid_pop_1;
    superpoder1 = (float)populacao_1_1 + area_1_1 + PIB_1_1 + (float)ptos_tur_1_1 + pib_percapita_1 + inv_densid_1;

// CAPTURA DE VARIÁVEIS DA CARTA 2
    printf("\nCARTA 2\n");
    printf("Defina uma letra para o estado entre A e H: \n");
    scanf(" %c", &estado_2);
    printf("Informe o código da carta:\n");
    scanf("%s", codigo_2_2);
    printf("Informe o nome da cidade:\n");
    scanf(" %s", cidade_2_2);
    printf("informe o número de habitantes:\n");
    scanf(" %lu", &populacao_2_2);
    printf("Informe a área em km²:\n");
    scanf(" %f", &area_2_2);
    printf("Informe o PIB em bilhões de reais:\n");
    scanf(" %f", &PIB_2_2);
    printf("Informe quantos pontos turísticos a cidade tem:\n");
    scanf(" %d", &ptos_tur_2_2);

    densid_pop_2 = populacao_2_2 / area_2_2;
    pib_percapita_2 = (PIB_2_2 * 1000000000) / populacao_2_2;
    inv_densid_2 = 1/densid_pop_2;
    superpoder2 = (float)populacao_2_2 + area_2_2 + PIB_2_2 + (float)ptos_tur_2_2 + pib_percapita_2 + inv_densid_2;

// IMPRESSÃO DOS DADOS DA CARTA 1
    printf("\nDADOS DA CARTA 1\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1_1);
    printf("Nome da cidade: %s\n", cidade_1_1);
    printf("População: %lu habitantes\n", populacao_1_1);
    printf("Área: %.2f km²\n", area_1_1);
    printf("PIB: R$ %.2f bilhões\n", PIB_1_1);
    printf("Número de pontos turísticos: %d\n", ptos_tur_1_1);
    printf("Densidade populacional: %.2f hab/km²\n", densid_pop_1);
    printf("Pib per capita: R$ %.2f /hab\n", pib_percapita_1);
    printf("Super poder: %.2f\n\n", superpoder1);

// IMPRESSÃO DOS DADOS DA CARTA 2
    printf("\nDADOS DA CARTA 2\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2_2);
    printf("Nome da cidade: %s\n", cidade_2_2);
    printf("População: %lu habitantes\n", populacao_2_2);
    printf("Área: %.2f km²\n", area_2_2);
    printf("PIB: R$ %.2f bilhões\n", PIB_2_2);
    printf("Número de pontos turísticos: %d\n", ptos_tur_2_2);
    printf("Densidade populacional: %.2f hab/km²\n", densid_pop_2);
    printf("Pib per capita: R$ %.2f /hab\n", pib_percapita_2);
    printf("Super poder: %.2f\n\n", superpoder2);

// BATALHA DE CARTAS
// JOGADOR ESCOLHE O ATRIBUTO PARA COMPARAR

    printf("***AGORA, PODEMOS COMEÇAR A BATALHA DE CARTAS!***\n\n");
    printf("ESCOLHA QUAL DOS ATRIBUTOS VOCÊ QUER COMPARAR\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Quantidade de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    printf("ESCOLHA UMA OPÇÃO ENTRE 1 E 7: ");
    scanf("%d", &atributo_escolhido);

// RESULTADO DA ESCOLHA

    switch (atributo_escolhido)
    {
    case 1:
        printf("\nATRIBUTO ESCOLHIDO: População\n");
        printf("%s = %lu habitantes versus %s = %lu habitantes\n\n", cidade_1_1, populacao_1_1, cidade_2_2, populacao_2_2);
        if (populacao_1_1 > populacao_2_2)
        {
            printf("*** VENCEDOR: CARTA 1 - %s ***\n\n", cidade_1_1);
        } else if (populacao_1_1 < populacao_2_2)
        {
            printf("*** VENCEDOR: CARTA 2 - %s ***\n\n", cidade_2_2);
        } else
        {
            printf("*** EMPATE! ***\n\n");
        }
        break;
    case 2:
        printf("\nATRIBUTO ESCOLHIDO: Área\n");
        printf("%s = %.2f km² versus %s = %.2f km²\n\n", cidade_1_1, area_1_1, cidade_2_2, area_2_2);
        if (area_1_1 > area_2_2)
        {
            printf("*** VENCEDOR: CARTA 1 - %s ***\n\n", cidade_1_1);
        } else if (area_1_1 < area_2_2)
        {
            printf("*** VENCEDOR: CARTA 2 - %s ***\n\n", cidade_2_2);
        } else
        {
            printf("*** EMPATE! ***\n\n");
        }
        break;
    case 3:
        printf("\nATRIBUTO ESCOLHIDO: PIB\n");
        printf("%s = R$ %.2f bilhões versus %s = R$ %.2f bilhões\n\n", cidade_1_1, PIB_1_1, cidade_2_2, PIB_2_2);
        if (PIB_1_1 > PIB_2_2)
        {
            printf("*** VENCEDOR: CARTA 1 - %s ***\n\n", cidade_1_1);
        } else if (PIB_1_1 < PIB_2_2)
        {
            printf("*** VENCEDOR: CARTA 2 - %s ***\n\n", cidade_2_2);
        } else
        {
            printf("*** EMPATE! ***\n\n");
        }
        break;
    case 4:
        printf("\nATRIBUTO ESCOLHIDO: Quantidade de pontos turísticos\n");
        printf("%s = %d pontos turísticos versus %s = %d pontos turísticos\n\n", cidade_1_1, ptos_tur_1_1, cidade_2_2, ptos_tur_2_2);
        if (ptos_tur_1_1 > ptos_tur_2_2)
        {
            printf("*** VENCEDOR: CARTA 1 - %s ***\n\n", cidade_1_1);
        } else if (ptos_tur_1_1 < ptos_tur_2_2)
        {
            printf("*** VENCEDOR: CARTA 2 - %s ***\n\n", cidade_2_2);
        } else
        {
            printf("*** EMPATE! ***\n\n");
        }
        break;
    case 5:
        printf("\nATRIBUTO ESCOLHIDO: Densidade populacional\n");
        printf("%s = %.2f hab/km² versus %s = %.2f hab/km²\n\n", cidade_1_1, densid_pop_1, cidade_2_2, densid_pop_2);
        printf("ATENÇÃO: PARA DENSIDADE POPULACIONAL, VENCE QUEM TEM O VALOR MENOR!\n\n");
        if (densid_pop_1 > densid_pop_2)
        {
            printf("*** VENCEDOR: CARTA 2 - %s ***\n\n", cidade_2_2);
        } else if (populacao_1_1 < populacao_2_2)
        {
            printf("*** VENCEDOR: CARTA 1 - %s ***\n\n", cidade_1_1);
        } else
        {
            printf("*** EMPATE! ***\n\n");
        }
        break;
    case 6:
        printf("\nATRIBUTO ESCOLHIDO: PIB per capita\n");
        printf("%s = R$ %.2f /hab versus %s = R$ %.2f /hab\n\n", cidade_1_1, pib_percapita_1, cidade_2_2, pib_percapita_2);
        if (pib_percapita_1 > pib_percapita_2)
        {
            printf("*** VENCEDOR: CARTA 1 - %s ***\n\n", cidade_1_1);
        } else if (pib_percapita_1 < pib_percapita_2)
        {
            printf("*** VENCEDOR: CARTA 2 - %s ***\n\n", cidade_2_2);
        } else
        {
            printf("*** EMPATE! ***\n\n");
        }
        break;
    case 7:
        printf("\nATRIBUTO ESCOLHIDO: Super poder\n");
        printf("%s = %.2f versus %s = %.2f\n\n", cidade_1_1, superpoder1, cidade_2_2, superpoder2);
        if (superpoder1 > superpoder2)
        {
            printf("*** VENCEDOR: CARTA 1 - %s ***\n\n", cidade_1_1);
        } else if (superpoder1 < superpoder2)
        {
            printf("*** VENCEDOR: CARTA 2 - %s ***\n\n", cidade_2_2);
        } else
        {
            printf("*** EMPATE! ***\n\n");
        }
        break;
    default:
        printf("\nOPÇÃO INVÁLIDA!\n\n");
        break;
    }    
  
// MENSAGEM DE ENCERRAMENTO
    printf("FIM DE JOGO!\n");
    printf("ATÉ A PRÓXIMA PARTIDA!\n");
    printf("PRESSIONE CTRL + F5 PARA REINICAR O JOGO\n");

return 0;


}
