#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char  A[10], B[10], C[10], D[10], E[10], F[10], G[10], H[10], A01, A02, A03, A04, B01, B02, B03, B04, C01, C02, C03, C04,
     D01, D02, D03, D04, E01, E02, E03, E04, F01, F02, F03, F04, G01, G02, G03, G04, H01, H02, H03, H04;
    int populA01, populA02, populA03, populA04, populB01, populB02, populB03, populB04, populC01, populC02, populC03, populC04,
     populD01, populD02, populD03, populD04, populE01, populE02, populE03, populE04, populF01, populF02, populF03, populF04, populG01, populG02, populG03, populG04, populH01, populH02, populH03, populH04;
    float  areaA01, areaA02, areaA03, areaA04, areaB01, areaB02, areaB03, areaB04, areaC01, areaC02, areaC03,
        areaC04, areaD01, areaD02, areaD03, areaD04, areaE01, areaE02, areaE03, areaE04,areaF01, areaF02, areaF03,
        areaF04, areaG01, areaG02, areaG03, areaG04, areaH01, areaH02, areaH03, areaH04;
    float pibA01, pibA02, pibA03, pibA04, pibB01, pibB02, pibB03, pibB04, pibC01, pibC02, pibC03, pibC04,
     pibD01, pibD02, pibD03, pibD04, pibE01, pibE02, pibE03, pibE04, pibF01, pibF02, pibF03, pibF04, pibG01, pibG02, pibG03, pibG04, pibH01, pibH02, pibH03, pibH04;
    int turisA01, turisA02, turisA03, turisA04, turisB01, turisB02, turisB03, turisB04, turisC01, turisC02, turisC03, turisC04,
     turisD01, turisD02, turisD03, turisD04, turisE01, turisE02, turisE03, turisE04, turisF01, turisF02, turisF03, turisF04, turisG01, turisG02, turisG03, turisG04, turisH01, turisH02, turisH03, turisH04;
    
     // Cadastro das Cartas:
    
    printf("Digite 4 cidades para Estado A:\n ");
    printf("Nome da cidade N°1: ");
     scanf("%s", &A01);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaA01); 
    printf("Digite a população: ");
     scanf("%d", &populA01);
    printf("Digite o pib: ");
     scanf("%f", &pibA01);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisA01);

    printf("Nome da cidade N°2: ");
     scanf("%s", &A02);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaA02); 
    printf("Digite a população: ");
     scanf("%d", &populA02);
    printf("Digite o pib: ");
     scanf("%f", &pibA02);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisA02);


    printf("Nome da cidede N°3: ");
     scanf("%s", &A03);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaA03); 
    printf("Digite a população: ");
     scanf("%d", &populA03);
    printf("Digite o pib: ");
     scanf("%f", &pibA03);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisA03);


    printf("Nome da cidade N°4: ");
     scanf("%s", &A04);
    printf("Digite a área em Km² ");
     scanf("%f", &areaA04); 
    printf("Digite a população: ");
     scanf("%d", &populA04);
    printf("Digite o pib: ");
     scanf("%f", &pibA04);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisA04);

 // Exibição dos Dados das Cartas:

     printf("Cidade: %s ",A01);
     printf("Àrea em Km²: %f ",areaA01);
     printf("População: %d ",populA01);
     printf("PIB: %f ",pibA01);
     printf("Pontos turisticos: %d\n ",turisA01);

     printf("Cidade: %s ",A02);
     printf("Àrea em Km²: %f ",areaA02);
     printf("População: %d ",populA02);
     printf("PIB: %f ",pibA02);
     printf("Pontos turisticos: %d\n ",turisA02);

    printf("Cidade: %s ",A03);
     printf("Àrea em Km²: %f ",areaA03);
     printf("População: %d ",populA03);
     printf("PIB: %f ",pibA03);
     printf("Pontos turisticos: %d\n ",turisA03);

    printf("Cidade: %s ",A04);
     printf("Àrea em Km²: %f ",areaA04);
     printf("População: %d ",populA04);
     printf("PIB: %f ",pibA04);
     printf("Pontos turisticos: %d\n ",turisA04);


    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
