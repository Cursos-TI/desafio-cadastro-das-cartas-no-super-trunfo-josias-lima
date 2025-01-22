#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char A01[12], A02[12], A03[12], A04[12], B01[12], B02[12], B03[12], B04[12], C01[12], C02[12], C03[12], C04[12],
     D01[12], D02[12], D03[12], D04[12], E01[12], E02[12], E03[12], E04[12], F01[12], F02[12], F03[12], F04[12], G01[12], G02[12], G03[12], G04[12], H01[12], H02[12], H03[12], H04[12];
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
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Cidade A:
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

// Cidade B:

printf("Digite 4 cidades para Estado B:\n ");
    printf("Nome da cidade N°1: ");
     scanf("%s", &B01);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaB01); 
    printf("Digite a população: ");
     scanf("%d", &populB01);
    printf("Digite o pib: ");
     scanf("%f", &pibB01);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisB01);

    printf("Nome da cidade N°2: ");
     scanf("%s", &B02);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaB02); 
    printf("Digite a população: ");
     scanf("%d", &populB02);
    printf("Digite o pib: ");
     scanf("%f", &pibB02);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisB02);


    printf("Nome da cidede N°3: ");
     scanf("%s", &B03);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaB03); 
    printf("Digite a população: ");
     scanf("%d", &populB03);
    printf("Digite o pib: ");
     scanf("%f", &pibB03);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisB03);


    printf("Nome da cidade N°4: ");
     scanf("%s", &B04);
    printf("Digite a área em Km² ");
     scanf("%f", &areaB04); 
    printf("Digite a população: ");
     scanf("%d", &populB04);
    printf("Digite o pib: ");
     scanf("%f", &pibB04);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisB04);

// Cidade C:

printf("Digite 4 cidades para Estado A:\n ");
    printf("Nome da cidade N°1: ");
     scanf("%s", &C01);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaC01); 
    printf("Digite a população: ");
     scanf("%d", &populC01);
    printf("Digite o pib: ");
     scanf("%f", &pibC01);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisC01);

    printf("Nome da cidade N°2: ");
     scanf("%s", &C02);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaC02); 
    printf("Digite a população: ");
     scanf("%d", &populC02);
    printf("Digite o pib: ");
     scanf("%f", &pibC02);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisC02);


    printf("Nome da cidede N°3: ");
     scanf("%s", &C03);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaC03); 
    printf("Digite a população: ");
     scanf("%d", &populC03);
    printf("Digite o pib: ");
     scanf("%f", &pibC03);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisC03);


    printf("Nome da cidade N°4: ");
     scanf("%s", &C04);
    printf("Digite a área em Km² ");
     scanf("%f", &areaC04); 
    printf("Digite a população: ");
     scanf("%d", &populC04);
    printf("Digite o pib: ");
     scanf("%f", &pibC04);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisC04);

// Cidade D:

printf("Digite 4 cidades para Estado A:\n ");
    printf("Nome da cidade N°1: ");
     scanf("%s", &D01);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaD01); 
    printf("Digite a população: ");
     scanf("%d", &populD01);
    printf("Digite o pib: ");
     scanf("%f", &pibD01);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisD01);

    printf("Nome da cidade N°2: ");
     scanf("%s", &D02);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaD02); 
    printf("Digite a população: ");
     scanf("%d", &populD02);
    printf("Digite o pib: ");
     scanf("%f", &pibD02);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisD02);


    printf("Nome da cidede N°3: ");
     scanf("%s", &D03);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaD03); 
    printf("Digite a população: ");
     scanf("%d", &populD03);
    printf("Digite o pib: ");
     scanf("%f", &pibD03);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisD03);


    printf("Nome da cidade N°4: ");
     scanf("%s", &D04);
    printf("Digite a área em Km² ");
     scanf("%f", &areaD04); 
    printf("Digite a população: ");
     scanf("%d", &populD04);
    printf("Digite o pib: ");
     scanf("%f", &pibD04);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisD04);

// Cidade E:

printf("Digite 4 cidades para Estado A:\n ");
    printf("Nome da cidade N°1: ");
     scanf("%s", &E01);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaE01); 
    printf("Digite a população: ");
     scanf("%d", &populE01);
    printf("Digite o pib: ");
     scanf("%f", &pibE01);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisE01);

    printf("Nome da cidade N°2: ");
     scanf("%s", &E02);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaE02); 
    printf("Digite a população: ");
     scanf("%d", &populE02);
    printf("Digite o pib: ");
     scanf("%f", &pibE02);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisE02);


    printf("Nome da cidede N°3: ");
     scanf("%s", &E03);
     printf("Digite a área em Km² ");
     scanf("%f", &areaE03); 
    printf("Digite a população: ");
     scanf("%d", &populE03);
    printf("Digite o pib: ");
     scanf("%f", &pibE03);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisE03);


    printf("Nome da cidade N°4: ");
     scanf("%s", &E04);
    printf("Digite a área em Km² ");
     scanf("%f", &areaE04); 
    printf("Digite a população: ");
     scanf("%d", &populE04);
    printf("Digite o pib: ");
     scanf("%f", &pibE04);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisE04);

// Cidade F:

printf("Digite 4 cidades para Estado A:\n ");
    printf("Nome da cidade N°1: ");
     scanf("%s", &F01);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaF01); 
    printf("Digite a população: ");
     scanf("%d", &populF01);
    printf("Digite o pib: ");
     scanf("%f", &pibF01);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisF01);

    printf("Nome da cidade N°2: ");
     scanf("%s", &F02);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaF02); 
    printf("Digite a população: ");
     scanf("%d", &populF02);
    printf("Digite o pib: ");
     scanf("%f", &pibF02);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisF02);


    printf("Nome da cidede N°3: ");
     scanf("%s", &F02);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaF03); 
    printf("Digite a população: ");
     scanf("%d", &populF03);
    printf("Digite o pib: ");
     scanf("%f", &pibF03);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisF03);


    printf("Nome da cidade N°4: ");
     scanf("%s", &F02);
    printf("Digite a área em Km² ");
     scanf("%f", &areaF04); 
    printf("Digite a população: ");
     scanf("%d", &populF04);
    printf("Digite o pib: ");
     scanf("%f", &pibF04);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisF04);

// Cidade G:

printf("Digite 4 cidades para Estado A:\n ");
    printf("Nome da cidade N°1: ");
     scanf("%s", &G01);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaG01); 
    printf("Digite a população: ");
     scanf("%d", &populG01);
    printf("Digite o pib: ");
     scanf("%f", &pibG01);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisG01);

    printf("Nome da cidade N°2: ");
     scanf("%s", &G02);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaG02); 
    printf("Digite a população: ");
     scanf("%d", &populG02);
    printf("Digite o pib: ");
     scanf("%f", &pibG02);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisG02);


    printf("Nome da cidede N°3: ");
     scanf("%s", &G03);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaG03); 
    printf("Digite a população: ");
     scanf("%d", &populG03);
    printf("Digite o pib: ");
     scanf("%f", &pibG03);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisG03);


    printf("Nome da cidade N°4: ");
     scanf("%s", &G04);
    printf("Digite a área em Km² ");
     scanf("%f", &areaG04); 
    printf("Digite a população: ");
     scanf("%d", &populG04);
    printf("Digite o pib: ");
     scanf("%f", &pibG04);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisG04);

// Cidade H:

printf("Digite 4 cidades para Estado A:\n ");
    printf("Nome da cidade N°1: ");
     scanf("%s", &H01);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaH01); 
    printf("Digite a população: ");
     scanf("%d", &populH01);
    printf("Digite o pib: ");
     scanf("%f", &pibH01);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisH01);

    printf("Nome da cidade N°2: ");
     scanf("%s", &H02);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaH02); 
    printf("Digite a população: ");
     scanf("%d", &populH02);
    printf("Digite o pib: ");
     scanf("%f", &pibH02);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisH02);


    printf("Nome da cidede N°3: ");
     scanf("%s", &H03);
    printf("Digite a área em Km²: ");
     scanf("%f", &areaH03); 
    printf("Digite a população: ");
     scanf("%d", &populH03);
    printf("Digite o pib: ");
     scanf("%f", &pibH03);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisH03);


    printf("Nome da cidade N°4: ");
     scanf("%s", &H04);
    printf("Digite a área em Km² ");
     scanf("%f", &areaH04); 
    printf("Digite a população: ");
     scanf("%d", &populH04);
    printf("Digite o pib: ");
     scanf("%f", &pibH04);
    printf("Digite o número de pontos turisticos: ");
     scanf("%d", &turisH04);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // A:

     printf("Cidade: %s\n ",A01);
     printf("Àrea em Km²: %f\n ",areaA01);
     printf("População: %d\n ",populA01);
     printf("PIB: %f\n ",pibA01);
     printf("Pontos turisticos: %d\n\n",turisA01);

     printf("Cidade: %s\n ",A02);
     printf("Àrea em Km²: %f\n ",areaA02);
     printf("População: %d\n ",populA02);
     printf("PIB: %f\n ",pibA02);
     printf("Pontos turisticos: %d\n ",turisA02);

     printf("Cidade: %s\n ",A03);
     printf("Àrea em Km²: %f\n ",areaA03);
     printf("População: %d\n ",populA03);
     printf("PIB: %f\n ",pibA03);
     printf("Pontos turisticos: %d\n ",turisA03);

     printf("Cidade: %s\n ",A04);
     printf("Àrea em Km²: %f\n ",areaA04);
     printf("População: %d\n ",populA04);
     printf("PIB: %f\n ",pibA04);
     printf("Pontos turisticos: %d\n ",turisA04);

    // B:

     printf("Cidade: %s\n ",B01);
     printf("Àrea em Km²: %f\n ",areaB01);
     printf("População: %d\n ",populB01);
     printf("PIB: %f\n ",pibB01);
     printf("Pontos turisticos: %d\n\n ",turisB01);

     printf("Cidade: %s\n ",B02);
     printf("Àrea em Km²: %f\n ",areaB02);
     printf("População: %d\n ",populB02);
     printf("PIB: %f\n ",pibB02);
     printf("Pontos turisticos: %d\n ",turisB02);

     printf("Cidade: %s\n ",B03);
     printf("Àrea em Km²: %f\n ",areaB03);
     printf("População: %d\n ",populB03);
     printf("PIB: %f\n ",pibB03);
     printf("Pontos turisticos: %d\n ",turisB03);

     printf("Cidade: %s\n ",B04);
     printf("Àrea em Km²: %f\n ",areaB04);
     printf("População: %d\n ",populB04);
     printf("PIB: %f\n ",pibB04);
     printf("Pontos turisticos: %d\n ",turisB04);

    // C:

     printf("Cidade: %s\n ",C01);
     printf("Àrea em Km²: %f\n ",areaC01);
     printf("População: %d\n ",populC01);
     printf("PIB: %f\n ",pibC01);
     printf("Pontos turisticos: %d\n\n ",turisC01);

     printf("Cidade: %s\n ",C02);
     printf("Àrea em Km²: %f\n ",areaC02);
     printf("População: %d\n ",populC02);
     printf("PIB: %f\n ",pibC02);
     printf("Pontos turisticos: %d\n ",turisC02);

     printf("Cidade: %s\n ",C03);
     printf("Àrea em Km²: %f\n ",areaC03);
     printf("População: %d\n ",populC03);
     printf("PIB: %f\n ",pibC03);
     printf("Pontos turisticos: %d\n ",turisC03);

     printf("Cidade: %s\n ",C04);
     printf("Àrea em Km²: %f\n ",areaC04);
     printf("População: %d\n ",populC04);
     printf("PIB: %f\n ",pibC04);
     printf("Pontos turisticos: %d\n ",turisC04);

    // D:

     printf("Cidade: %s\n ",D01);
     printf("Àrea em Km²: %f\n ",areaD01);
     printf("População: %d\n ",populD01);
     printf("PIB: %f\n ",pibD01);
     printf("Pontos turisticos: %d\n\n ",turisD01);

     printf("Cidade: %s\n ",D02);
     printf("Àrea em Km²: %f\n ",areaD02);
     printf("População: %d\n ",populD02);
     printf("PIB: %f\n ",pibD02);
     printf("Pontos turisticos: %d\n ",turisD02);

     printf("Cidade: %s\n ",D03);
     printf("Àrea em Km²: %f\n ",areaD03);
     printf("População: %d\n ",populD03);
     printf("PIB: %f\n ",pibD03);
     printf("Pontos turisticos: %d\n ",turisD03);

     printf("Cidade: %s\n ",D04);
     printf("Àrea em Km²: %f\n ",areaD04);
     printf("População: %d\n ",populD04);
     printf("PIB: %f\n ",pibD04);
     printf("Pontos turisticos: %d\n ",turisD04);

    // E:

     printf("Cidade: %s\n ",E01);
     printf("Àrea em Km²: %f\n ",areaE01);
     printf("População: %d\n ",populE01);
     printf("PIB: %f\n ",pibE01);
     printf("Pontos turisticos: %d\n\n ",turisE01);

     printf("Cidade: %s\n ",E01);
     printf("Àrea em Km²: %f\n ",areaE02);
     printf("População: %d\n ",populE02);
     printf("PIB: %f\n ",pibE02);
     printf("Pontos turisticos: %d\n ",turisE02);

     printf("Cidade: %s\n ",E03);
     printf("Àrea em Km²: %f\n ",areaE03);
     printf("População: %d\n ",populE03);
     printf("PIB: %f\n ",pibE03);
     printf("Pontos turisticos: %d\n ",turisE03);

     printf("Cidade: %s\n ",E04);
     printf("Àrea em Km²: %f\n ",areaE04);
     printf("População: %d\n ",populE04);
     printf("PIB: %f\n ",pibE04);
     printf("Pontos turisticos: %d\n ",turisE04);

    // F:

     printf("Cidade: %s\n ",F01);
     printf("Àrea em Km²: %f\n ",areaF01);
     printf("População: %d\n ",populF01);
     printf("PIB: %f\n ",pibF01);
     printf("Pontos turisticos: %d\n\n ",turisF01);

     printf("Cidade: %s\n ",F02);
     printf("Àrea em Km²: %f\n ",areaF02);
     printf("População: %d\n ",populF02);
     printf("PIB: %f\n ",pibF02);
     printf("Pontos turisticos: %d\n ",turisF02);

     printf("Cidade: %s\n ",F03);
     printf("Àrea em Km²: %f\n ",areaF03);
     printf("População: %d\n ",populF03);
     printf("PIB: %f\n ",pibF03);
     printf("Pontos turisticos: %d\n ",turisF03);

     printf("Cidade: %s\n ",F04);
     printf("Àrea em Km²: %f\n ",areaF04);
     printf("População: %d\n ",populF04);
     printf("PIB: %f\n ",pibF04);
     printf("Pontos turisticos: %d\n ",turisF04);

    // G:

     printf("Cidade: %s\n ",G01);
     printf("Àrea em Km²: %f\n ",areaG01);
     printf("População: %d\n ",populG01);
     printf("PIB: %f\n ",pibG01);
     printf("Pontos turisticos: %d\n\n ",turisG01);

     printf("Cidade: %s\n ",G02);
     printf("Àrea em Km²: %f\n ",areaG02);
     printf("População: %d\n ",populG02);
     printf("PIB: %f\n ",pibG02);
     printf("Pontos turisticos: %d\n ",turisG02);

     printf("Cidade: %s\n ",G03);
     printf("Àrea em Km²: %f\n ",areaG03);
     printf("População: %d\n ",populG03);
     printf("PIB: %f\n ",pibG03);
     printf("Pontos turisticos: %d\n ",turisG03);

     printf("Cidade: %s\n ",G04);
     printf("Àrea em Km²: %f\n ",areaG04);
     printf("População: %d\n ",populG04);
     printf("PIB: %f\n ",pibG04);
     printf("Pontos turisticos: %d\n ",turisG04);

    // H:

     printf("Cidade: %s\n ",H01);
     printf("Àrea em Km²: %f\n ",areaH01);
     printf("População: %d\n ",populH01);
     printf("PIB: %f\n ",pibH01);
     printf("Pontos turisticos: %d\n\n ",turisH01);

     printf("Cidade: %s\n ",H02);
     printf("Àrea em Km²: %f\n ",areaH02);
     printf("População: %d\n ",populH02);
     printf("PIB: %f\n ",pibH02);
     printf("Pontos turisticos: %d\n ",turisH02);

     printf("Cidade: %s\n ",H03);
     printf("Àrea em Km²: %f\n ",areaH03);
     printf("População: %d\n ",populH03);
     printf("PIB: %f\n ",pibH03);
     printf("Pontos turisticos: %d\n ",turisH03);

    

   

    return 0;
}
