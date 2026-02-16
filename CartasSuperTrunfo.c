#include <stdio.h>


/**
 * Desafio Super Trunfo - Países
 * Nível: Novato
 * Objetivo: Cadastro e exibição de duas cartas de cidades.
 */


int main() {

    printf("Bem-vindo ao Jogo Super Trunfo!\n");


// --- VÁRIÁVEIS DA CARTA 1 ---

    char estado1;
    char codigo1[4];    // A01 + Caractere nulo final
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;


    // --- VÁRIÁVEIS DA CARTA 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


    //cadastro da carta 1
    printf("--- Cadastro de Carta 1 ---\n");

    printf("Estado (A-H)");
    scanf(" %c", &estado1); // Espaço para limpar o buffer

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Area (KM²): ");
    scanf("%f", &area1);

    printf("PIB (Bilhões de R$): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // cadastro da carta 2

    printf("\n--- Cadastro de Carta 2 ---\n");

    printf("Estado (A-H)");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area (KM²): ");
    scanf("%f", &area2);

    printf("PIB (Bilhões de R$): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // exibição das cartas
    printf("\n--- Cartas Cadastradas ---\n");

    printf("\n================================\n");
    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Area (KM²): %.2f\n", area1);
    printf("PIB (Bilhões de R$): %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Area (KM²): %.2f\n", area2);
    printf("PIB (Bilhões de R$): %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("\n================================\n");

   


    return 0;




}