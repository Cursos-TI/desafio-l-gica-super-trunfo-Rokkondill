#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Declaração das variáveis
    char est = 'A', est2 = 'B';
    char cod[4] = "A01", cod2[4] = "B02", cidade[20] = "Sao Paulo (SP)", cidade2[20] = "Rio de Janeiro (RJ)";
    unsigned long int pop = 12325000, pop2 = 6748000;
    int np = 50, np2 = 30, temp;
    float area = 1521.11, area2 = 1200.25, pib = 699.28, pib2 = 300.50, dens, dens2, ppc, ppc2, sp1, sp2;

    //Inserção de dados da primeira carta
    

    //Cálculo da densidade populacional e PIB per Capita
    dens = (float) pop / area;
    dens2 = (float) pop2 / area2;
    ppc = pib*1000000000 / (float)pop;
    ppc2 =  pib2*1000000000 / (float)pop2;
    sp1 = (float)(pop + np) + area + pib + 1/dens + ppc;
    sp2 = (float)(pop2 + np2) + area2 + pib2 + 1/dens2 + ppc2;

    //Impressão das cartas
    //Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", est);
    printf("Codigo: %s\n", cod);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %lu\n", pop);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", np);
    printf("Densidade Populacional: %.2f hab/km2\n", dens);
    printf("PIB per Capita: %.2f reais\n", ppc);
    printf("Super Poder: %.2f", sp1);

    //Impressão das cartas
    //Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", est2);
    printf("Codigo: %s\n", cod2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", pop2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", np2);
    printf("Densidade Populacional: %.2f hab/km2\n", dens2);
    printf("PIB per Capita: %.2f reais\n", ppc2);
    printf("Super Poder: %.2f\n", sp2);
    
    //Comparando e exibindo os resultados
    printf("\nComparacao de Cartas (Atributo: Populacao):\n");
    printf("Carta 1 - %s: %lu\n", cidade, pop);
    printf("Carta 2 - %s: %lu\n", cidade2, pop2);
    temp = pop > pop2;
    if (temp)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade);
    }

    return 0;
}
