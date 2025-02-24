#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado[1];
    char codCarta[3];
    char nomeCidade[50];
    int numeroCarta, populacao, numeroPontosTuristicos;
    float area, pib;

    printf("Digite o número da Carta 1ª: \n");
    scanf("%d", &numeroCarta);

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codCarta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &numeroPontosTuristicos);

    printf("Carta 1: %d\n", numeroCarta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhoês de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n\n", numeroPontosTuristicos);

    return 0;
}
