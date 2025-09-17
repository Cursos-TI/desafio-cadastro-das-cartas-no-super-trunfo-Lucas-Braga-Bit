#include <stdio.h>
/*Programa funcional com as funcionalidades requisitadas.*/
int main()
{

    int carta1, turismo1; // carta = numeração da carta, pop = população, turismo = pontos turísticos
    unsigned long int pop1; // alteração para unsigned long int
    float area1, pibpc1, densidadep1; // pib = PIB da cidade, area = área em km², pibpc = PIB per capta, densidadep = densidade populacional
    double pib1; 
    char estado1, nome_C1[20], nome_E1[20]; // estado = letra que representará o estado, nome_C = nome da cidade, nome_E = nome do estado

    int carta2, turismo2; // diferenciação entre dados das cartas 1 e 2 com a adição do número à frente.
    unsigned long int pop2;
    float area2, pibpc2, densidadep2;
    double pib2;
    char estado2, nome_C2[20], nome_E2[20];

    float superpoder1, superpoder2;

    printf("Olá! Este é o Desafio do Super Trunfo!\n");
    printf("Neste programa, vamos cadastrar 2 cartas para que você possa visualizá-la nesse terminal, vamos lá?\n\n"); // Forma de interação amigável com o usuário sendo replicada durante todo o código
    // utilização da função printf e scanf ao longo de todo trabalho como requisitado pelo desafio.
    // Código organizado primeiro pela coleta dos dados das cartas e depois a exibição para o usuário de todas os dados cadastrados.
    
    printf("Vamos começar o cadastro da primeira carta.\n\n"); 

    printf("Digite o nome do Estado, para espaços, utilize o _ por gentiliza: \n"); // Começo feito pela coleta dos dados da primeira carta.
    scanf("%s", nome_E1); 
    
    printf("Digite o a letra da carta que indicará o Estado, escolha uma letra de A a H: \n");
    scanf(" %c", &estado1);

    printf("Certo! Agora digite o número da carta que indicará a cidade, escolha um Nº de 1 à 8: \n");
    scanf("%d", &carta1);

    printf("Certo! Agora digite o nome da cidade, siga a mesma regra do _ : \n");
    scanf("%s", nome_C1);

    printf("Certo! Agora digite a população desta cidade: \n");
    scanf("%ld", &pop1);

    printf("Certo! Agora digite a área em km², utilize um ponto ao em vez da virgula: \n");
    scanf("%f", &area1);

    printf("Certo! Agora digite o PIB da cidade: \n");
    scanf("%lf", &pib1);

    printf("Certo! Agora digite o número de pontos turísticos: \n");
    scanf("%d", &turismo1);

    
    printf("\n\nTudo pronto! Agora vamos ao cadastro da segunda carta.\n\n"); // Coleta de dados da segunda carta.

    printf("Digite o nome do Estado, para espaços, utilize o _ por gentiliza: \n");
    scanf("%s", nome_E2);
    
    printf("Digite o a letra da carta que indicará o Estado, escolha uma letra de A a H: \n");
    scanf(" %c", &estado2);

    printf("Certo! Agora digite o número da carta que indicará a cidade, escolha um Nº de 1 à 8: \n");
    scanf("%d", &carta2);

    printf("Certo! Agora digite o nome da cidade, siga a mesma regra do _ : \n");
    scanf("%s", nome_C2);

    printf("Certo! Agora digite a população desta cidade: \n");
    scanf("%ld", &pop2);

    printf("Certo! Agora digite a área em km², utilize um ponto ao em vez da virgula: \n");
    scanf("%f", &area2);

    printf("Certo! Agora digite o PIB da cidade: \n");
    scanf("%lf", &pib2);

    printf("Certo! Agora digite o número de pontos turísticos: \n");
    scanf("%d", &turismo2);
    
    pibpc1 = (float) pib1 / pop1; //definição dos valores dos PIB's per capta, das densidades populacionais e do super poder.
    pibpc2 = (float) pib2 / pop2;
    densidadep1 = (float) pop1 / area1;
    densidadep2 = (float) pop2 / area2;
    superpoder1 = (float) pop1 + (float) area1 + (float) pib1 + (float) turismo1 + (float) pibpc1 + (float) densidadep1;
    superpoder2 = (float) pop2 + (float) area2 + (float) pib2 + (float) turismo2 + (float) pibpc2 + (float) densidadep2;


    printf("\n\nPronto! Agora vamos verificar as informações cadastradas:\n\n"); // Exibição dos dados cadastrados pelo usuário.

    printf("Carta 1\n");
    printf("Estado - %s\n", nome_E1);
    printf("Código da carta - %c0%d\n", estado1, carta1);
    printf("Nome da cidade - %s\n", nome_C1);
    printf("População - %ld\n", pop1);
    printf("Área km² - %.0fkm²\n", area1);
    printf("PIB - %.1f\n", pib1);
    printf("Pontos Turísticos - %d\n", turismo1);
    printf("PIB per Capta - %.1f\n", pibpc1);
    printf("Densidade Populacional - %.2f\n\n", densidadep1);

    printf("Carta 2\n");
    printf("Estado - %s\n", nome_E2);
    printf("Código da carta - %c0%d\n", estado2, carta2); // coloquei um 0 como texto exibido pois o int não estava reconhecendo o 0, em busca de alguma outra forma de fazer.
    printf("Nome da cidade - %s\n", nome_C2);
    printf("População - %ld\n", pop2);
    printf("Área km² - %.0fkm²\n", area2);
    printf("PIB - %.1f\n", pib2);
    printf("Pontos Turísticos - %d\n", turismo2);
    printf("PIB per Capta - %.1f\n", pibpc2);
    printf("Densidade Populacional - %.2f\n\n", densidadep2);

    int resultadoPOP, resultadoAREA, resultadoPIB, resultadoPT, resultadoPIBPC, resultadoDENS, resultadoSUPER;
    
    resultadoPOP = pop1 >= pop2;
    resultadoAREA = area1 >= area2;
    resultadoPIB = pib1 >= pib2;
    resultadoPT = turismo1 >= turismo2;
    resultadoPIBPC = pibpc1 >= pibpc2;
    resultadoDENS = densidadep1 <= densidadep2;
    resultadoSUPER = superpoder1 >= superpoder2;

    superpoder1 = (float) pop1 + (float) area1 + (float) pib1 + (float) turismo1 + (float) pibpc1 + (float) densidadep1;
    superpoder2 = (float) pop2 + (float) area2 + (float) pib2 + (float) turismo2 + (float) pibpc2 + (float) densidadep2;


    printf("*** Vamos ao embate! ***\n\n");
    printf("1 = Carta 1 vence! / 0 = Carta 2 vence!\n");
    printf("Resultados:\n\n");
    printf("População: %d\n", resultadoPOP);
    printf("Área em Km²: %d\n", resultadoAREA);
    printf("PIB: %d\n", resultadoPIB);
    printf("Pontos Turisticos: %d\n", resultadoPT);
    printf("PIB per Capta: %d\n", resultadoPIBPC);
    printf("Densidade populacional: %d\n", resultadoDENS);
    printf("Super Poder: %d\n", resultadoSUPER);
    



    return 0;

}