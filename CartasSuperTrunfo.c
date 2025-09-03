#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado[50], estado2[50], codigoDaCarta[50], codigoDaCarta2[50], nomeDaCidade[50], nomeDaCidade2[50];
    int populacao, populacao2, pontosTuristicos, pontosTuristicos2;
    float area, area2, pib, pib2;

    //Carta 1
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);   

    printf("Digite o Código da carta: \n");
    scanf("%s", codigoDaCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade);

    printf("Digite a quantidade de população: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("Digite a Área do Estado: \n");
    scanf("%f", &area);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib);

    //Carta 2
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado2);   

    printf("Digite o Código da carta: \n");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade2);

    printf("Digite a quantidade de população: \n");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a Área do Estado: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib2);

    //Mostrando as cartas
    printf("Carta 1: \n Estado: %s \n Código da carta: %s \n Nome da cidade: %s \n População: %d \n Pontos Turísticos: %d \n Área: %f \n Pib: %f \n", 
        estado, codigoDaCarta, nomeDaCidade, populacao, pontosTuristicos, area, pib);
    printf("Carta 2: \n Estado: %s \n Código da carta: %s \n Nome da cidade: %s \n População: %d \n Pontos Turísticos: %d \n Área: %f \n Pib: %f \n", 
        estado2, codigoDaCarta2, nomeDaCidade2, populacao2, pontosTuristicos2, area2, pib2);

    return 0;
}
