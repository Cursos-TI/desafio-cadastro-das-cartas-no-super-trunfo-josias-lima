#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int turismo;
    float pib, area, populacao;
    char cd1[20], cd2[20], cd3[20], cd4[20], pais[15], ed1[20], 
    ed2[20], ed3[20], ed4[20], ed5[20], ed6[20], ed7[20], ed8[20];
    // Cadastro das Cartas:
    printf("Digite o País: ");
     scanf("%s", &pais);

    printf("Digite 8 Estados para %s\n ", pais);
    printf("Estado N°1: ");
     scanf("%s", &ed1);

    printf("Estado N°2: ");
     scanf("%s", &ed2);

    printf("Estado N°3: ");
     scanf("%s", &ed3);

    printf("Estado N°4: ");
     scanf("%s", &ed4);

    printf("Estado N°5: ");
     scanf("%s", &ed5);

    printf("Estado N°6: ");
     scanf("%s", &ed6);

    printf("Estado N°7: ");
     scanf("%s", &ed7);

    printf("Estado N°8: ");
     scanf("%s", &ed8);
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
