#include <stdio.h>

int main()
{
    // Declarando variaveis para carta 1 e 2
    int carta;
    int carta2;

    char estado[20];
    char estado2[20];

    char nome_cidade[20];
    char nome_cidade2[20];

    char codigo[5];
    char codigo2[5];

    int turistico;
    int turistico2;

    int populacao;
    int populacao2;

    float area;
    float area2;
    
    float pib;
    float pib2;

    // Entrada de dados
    printf("Vamos comparar duas cidades, preencha os dados a seguir.\n");
    printf("Digite o numero da carta: ");
    scanf("%d", &carta);

    int c;
    while ((c = getchar()) != '\n' && c != EOF); // limpa o buffer

    printf("Digite o nome do estado: ");
    fgets(estado, sizeof(estado), stdin);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo); 

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite quantos pontos de turismo tem na cidade: ");
    scanf("%d", &turistico);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Agora digite os dados da outra carta.\n");
   // Cadastrando a segunda carta  
    printf("Digite o numero da carta: ");
    scanf("%d", &carta2);

    while ((c = getchar()) != '\n' && c != EOF); // limpa o buffer apos o scan
    printf("Digite o nome do estado: ");
    fgets(estado2, sizeof(estado2), stdin);
  
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo2); // mudado para %s, pois é um char

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: ");
    scanf("%f", &area2);

    printf("Digite quantos pontos de turismo tem na cidade: ");
    scanf("%d", &turistico2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    //Nivel Aventureiro - Adicionando float (Densidade demografica e PIB per capita
    float densidade_demorgrafica = populacao / area;
    float densidade_demorgrafica2 = populacao2 / area2;
    
    float pib_cap =pib / populacao;
    float pib_cap2 =pib2 / populacao2;

    // Processamento de dados
    printf("Carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nome_cidade);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("PIB per Capita: %.2f\n", pib_cap);
    printf("Densidade Demografica: %.2f\n", densidade_demorgrafica);
    //Carta2
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per Capita: %.2f\n", pib_cap2);
    printf("Densidade Demografica: %.2f\n", densidade_demorgrafica2);

    return 0;
}