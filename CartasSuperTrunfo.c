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

    unsigned long int populacao;
    unsigned long int populacao2;

    float area;
    float area2;
    
    float pib;
    float pib2;

    // Entrada de dados
    printf("Vamos comparar duas cidades, preencha os dados a seguir.\n");
    printf("\nDigite o numero da carta: ");
    scanf("%d", &carta);
    getchar(); //limpa o buiffer para ser possivel ler os espacos em branco

    printf("Digite o nome do estado: ");
    fgets(estado, sizeof(estado), stdin);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo); 

    printf("Digite a populacao da cidade: ");
    scanf("%ld", &populacao);

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

    getchar();
    printf("Digite o nome do estado: ");
    fgets(estado2, sizeof(estado2), stdin);
  
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo2); // mudado para %s, pois é um char

    printf("Digite a populacao da cidade: ");
    scanf("%ld", &populacao2);

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

    //Adicionando os super poderes 
    float super_poder = (populacao + area + pib + turistico +pib_cap + (1/densidade_demorgrafica));
    float super_poder2 = (populacao2 + area2 + pib2 + turistico2 +pib_cap2 + (1/densidade_demorgrafica2));
   
    // Processamento de dados
    printf("\nCarta: %d\n", carta);
    printf("Estado: %s", estado);
    printf("Cidade: %s\n", nome_cidade);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %ld\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("PIB per Capita: %.2f\n", pib_cap);
    printf("Densidade Demografica: %.2f\n", densidade_demorgrafica);
    //Carta2
    printf("\nCarta: %d\n", carta2);
    printf("Estado: %s", estado2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %ld\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per Capita: %.2f\n", pib_cap2);
    printf("Densidade Demografica: %.2f\n", densidade_demorgrafica2);

    //Comparação das cartas
    //Nivel Mestre
    
    printf("\nHora do duelo!\n");
    printf("População: Carta %d venceu (%d)\n", 2 - (populacao > populacao2), populacao > populacao2);
    printf("Área: Carta %d venceu (%d)\n", 2 - (area > area2), area > area2);
    printf("PIB: Carta %d venceu (%d)\n", 2 - (pib > pib2), pib > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - (turistico > turistico2), turistico > turistico2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - (densidade_demorgrafica > densidade_demorgrafica2), densidade_demorgrafica > densidade_demorgrafica2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - (pib_cap > pib_cap2), pib_cap > pib_cap2);
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - (super_poder > super_poder2), super_poder > super_poder2);

    return 0;
}