#include <stdio.h>
/*Programa funcional com as funcionalidades requisitadas.*/
int main()
{

    int carta1, pop1, turismo1; // carta = numeração da carta, pop = população, turismo = pontos turísticos
    float pib1, area1; // pib = PIB per capta, area = área em km²
    char estado1, nome_C1[20], nome_E1[20]; // estado = letra que representará o estado, nome_C = nome da cidade, nome_E = nome do estado

    int carta2, pop2, turismo2; // diferenciação entre dados das cartas 1 e 2 com a adição do número à frente.
    float pib2, area2;
    char estado2, nome_C2[20], nome_E2[20];

    printf("Olá! Este é o Desafio do Super Trunfo!\n");
    printf("Neste programa, vamos cadastrar 2 cartas para que você possa visualizá-la nesse terminal, vamos lá?\n\n"); // Forma de interação amigável com o usuário sendo replicada durante todo o código
    // utilização da função printf e scanf ao longo de todo trabalho como requisitado pelo desafio.
    // Código organizado primeiro pela coleta dos dados das cartas e depois a exibição para o usuário de todas os dados cadastrados.
    
    printf("Vamos começar o cadastro da primeira carta.\n\n"); 

    printf("Digite o nome do Estado, para espaços, utilize o _ por gentiliza: "); // Começo feito pela coleta dos dados da primeira carta.
    scanf("%s", nome_E1); 
    
    printf("Digite o a letra da carta que indicará o Estado, escolha uma letra de A a H: ");
    scanf(" %c", &estado1);

    printf("Certo! Agora digite o número da carta que indicará a cidade: ");
    scanf("%d", &carta1);

    printf("Certo! Agora digite o nome da cidade: ");
    scanf("%s", nome_C1);

    printf("Certo! Agora digite a população desta cidade: ");
    scanf("%d", &pop1);

    printf("Certo! Agora digite a área em km², utilize um ponto ao em vez da virgula: ");
    scanf("%f", &area1);

    printf("Certo! Agora digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Certo! Agora digite o número de pontos turísticos: \n");
    scanf("%d", &turismo1);


    printf("Tudo pronto! Agora vamos ao cadastro da segunda carta.\n\n"); // Coleta de dados da segunda carta.

    printf("Digite o nome do Estado, para espaços, utilize o _ por gentiliza: ");
    scanf("%s", nome_E2);
    
    printf("Digite o a letra da carta que indicará o Estado, escolha uma letra de A a H: ");
    scanf(" %c", &estado2);

    printf("Certo! Agora digite o número da carta que indicará a cidade, escolha um Nº de 1 à 8: ");
    scanf("%d", &carta2);

    printf("Certo! Agora digite o nome da cidade, siga a mesma regra do _ : ");
    scanf("%s", nome_C2);

    printf("Certo! Agora digite a população desta cidade: ");
    scanf("%d", &pop2);

    printf("Certo! Agora digite a área em km², utilize um ponto ao em vez da virgula: ");
    scanf("%f", &area2);

    printf("Certo! Agora digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Certo! Agora digite o número de pontos turísticos: ");
    scanf("%d", &turismo2);
    

    printf("\n\nPronto! Agora vamos verificar as informações cadastradas:\n\n"); // Exibição dos dados cadastrados pelo usuário.

    printf("Carta 1\n");
    printf("Estado - %s\n", nome_E1);
    printf("Código da carta - %c0%d\n", estado1, carta1);
    printf("Nome da cidade - %s\n", nome_C1);
    printf("População - %d\n", pop1);
    printf("Área km² - %.3fkm²\n", area1);
    printf("PIB per Capta - %.3f\n", pib1);
    printf("Pontos Turísticos - %d\n\n", turismo1);

    printf("Carta 2\n");
    printf("Estado - %s\n", nome_E2);
    printf("Código da carta - %c0%d\n", estado2, carta2); // coloquei um 0 como texto exibido pois o int não estava reconhecendo o 0, em busca de alguma ooutra forma de fazer.
    printf("Nome da cidade - %s\n", nome_C2);
    printf("População - %d\n", pop2);
    printf("Área km² - %.3fkm²\n", area2);
    printf("PIB per Capta - %.3f\n", pib2);
    printf("Pontos Turísticos - %d\n", turismo2);

    return 0;
}
