#include <stdio.h>
/*Programa funcional com as funcionalidades reuquisitadas, ainda falta a adição de comentários para o melhor entendimento de terceiros.*/
int main()
{

    int carta1, pop1, turismo1;
    float pib1, area1;
    char estado1, nomec1[20], codigo1[20];

    int carta2, pop2, turismo2;
    float pib2, area2;
    char estado2, nomec2[20], codigo2[20];

    printf("Olá! Este é o Desafio do Super Trunfo!\n");
    printf("Neste programa, vamos cadastrar 2 cartas para que você possa visualizá-la nesse terminal, vamos lá?\n\n");


    printf("Vamos começar o cadastro da primeira carta\n");
    
    printf("Digite o a letra da carta que indicará o Estado: ");
    scanf(" %c", &estado1);

    printf("Certo! Agora digite o número da carta que indicará a cidade: ");
    scanf("%d", &carta1);

    printf("Certo! Agora digite o nome da cidade: ");
    scanf("%s", nomec1);

    printf("Certo! Agora digite a população desta cidade: ");
    scanf("%d", &pop1);

    printf("Certo! Agora digite a área em km², utilize um ponto ao em vez da virgula: ");
    scanf("%f", &area1);

    printf("Certo! Agora digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Certo! Agora digite o número de pontos turísticos: ");
    scanf("%d", &turismo1);


    printf("Tudo pronto! Agora vamos ao cadastro da segunda carta.\n");
    
    printf("Digite o a letra da carta que indicará o Estado: ");
    scanf(" %c", &estado2);

    printf("Certo! Agora digite o número da carta que indicará a cidade: ");
    scanf("%d", &carta2);

    printf("Certo! Agora digite o nome da cidade: ");
    scanf("%s", nomec2);

    printf("Certo! Agora digite a população desta cidade: ");
    scanf("%d", &pop2);

    printf("Certo! Agora digite a área em km², utilize um ponto ao em vez da virgula: ");
    scanf("%f", &area2);

    printf("Certo! Agora digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Certo! Agora digite o número de pontos turísticos: ");
    scanf("%d", &turismo2);
    

    printf("\n\nPronto! Agora vamos verificar as informações cadastradas:\n\n");

    printf("Carta 1\n");
    printf("Estado - %c\n", estado1);
    printf("Código da carta - %c0%d\n", estado1, carta1);
    printf("Nome da cidade - %s\n", nomec1);
    printf("População - %d\n", pop1);
    printf("Área km² - %.3fkm²\n", area1);
    printf("PIB per Capta - %.3f\n", pib1);
    printf("Pontos Turísticos - %d\n\n", turismo1);

    printf("Carta 2\n");
    printf("Estado - %c\n", estado2);
    printf("Código da carta - %c0%d\n", estado2, carta2);
    printf("Nome da cidade - %s\n", nomec2);
    printf("População - %d\n", pop2);
    printf("Área km² - %.3fkm²\n", area2);
    printf("PIB per Capta - %.3f\n", pib2);
    printf("Pontos Turísticos - %d\n\n", turismo2);

    return 0;
}
