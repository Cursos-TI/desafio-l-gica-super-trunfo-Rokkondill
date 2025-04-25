#include<stdio.h>
#include<string.h>

int main() {
    //Declaração das variáveis
    char est = 'A', est2 = 'B';
    char cod[4] = "A01", cod2[4] = "B02", cidade[20] = "Sao Paulo (SP)", cidade2[20] = "Rio de Janeiro (RJ)";
    char atr[50];
    unsigned long int pop = 12325000, pop2 = 6748000, p1, p2;
    long int np = 30, np2 = 30, temp, menu, resp;
    double area = 1521.11, area2 = 1200.25, pib = 699.28, pib2 = 300.50, dens, dens2, ppc, ppc2, sp1, sp2, fp1, fp2, temp2;

    //Inserção de dados da primeira carta
    

    //Cálculo da densidade populacional e PIB per Capita
    dens = (double) pop / area;
    dens2 = (double) pop2 / area2;
    ppc = pib*1000000000 / (double)pop;
    ppc2 =  pib2*1000000000 / (double)pop2;
    sp1 = (double)(pop + np) + area + pib + 1/dens + ppc;
    sp2 = (double)(pop2 + np2) + area2 + pib2 + 1/dens2 + ppc2;

    //Impressão das cartas
    //Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", est);
    printf("Codigo: %s\n", cod);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %lu\n", pop);
    printf("Area: %.2lf km2\n", area);
    printf("PIB: %.2lf bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %ld\n", np);
    printf("Densidade Populacional: %.2lf hab/km2\n", dens);
    printf("PIB per Capita: %.2lf reais\n", ppc);
    printf("Super Poder: %.2lf", sp1);

    //Impressão das cartas
    //Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", est2);
    printf("Codigo: %s\n", cod2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", pop2);
    printf("Area: %.2lf km2\n", area2);
    printf("PIB: %.2lf bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %ld\n", np2);
    printf("Densidade Populacional: %.2lf hab/km2\n", dens2);
    printf("PIB per Capita: %.2lf reais\n", ppc2);
    printf("Super Poder: %.2lf\n", sp2);
    
    //Comparando e exibindo os resultados
    printf("\nComparacao de Cartas (Atributo: Populacao):\n");
    printf("\nDigite um numero de qual atributo será comparado entre as duas cartas:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Numero de Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
    scanf("%ld", &menu);

    switch (menu)
    {
    case 1:
        temp = pop - pop2;
        strcpy(atr,"Populacao");
        p1 = pop;
        p2 = pop2;
        resp = 1;
        break;
    case 2:
        temp2 = area - area2;
        strcpy(atr,"Area");
        fp1 = area;
        fp2 = area2;
        resp = 2;
        break;
    case 3:
        temp2 = pib - pib2;
        strcpy(atr,"PIB");
        fp1 = pib;
        fp2 = pib2;
        resp = 2;
        break;
    case 4:
        temp = np - np2;
        strcpy(atr,"Numero de Pontos Turisticos");
        p1 = np;
        p2 = np2;
        resp = 1;
        break;
    case 5:
        temp2 = dens - dens2;
        strcpy(atr,"Densidade Populacional");
        fp1 = dens;
        fp2 = dens2;
        resp = 3;
        break;
    case 6:
        temp2 = ppc - ppc2;
        strcpy(atr,"PIB per Capita");
        fp1 = ppc;
        fp2 = ppc2;
        resp = 2;
        break;
    case 7:
        temp2 = sp1 - sp2;
        strcpy(atr,"Super Poder");
        fp1 = sp1;
        fp2 = sp2;
        resp = 2;
        break;
    default:
        printf("Opcao invalida!\n");
        return 0;
        break;
    }

    printf("\nCompararacao entre %s e %s\n", cidade, cidade2);
    printf("Atributo: %s\n", atr);
    switch (resp)
    {
    case 1:
        printf("Carta 1: %ld / Carta 2: %ld\n", p1, p2);
        if (temp > 0)
        {
            printf("Carta 1 (%s) venceu!!!\n", cidade);
        } else{
            if (temp < 0)
            {
                printf("Carta 2 (%s) venceu!!!\n", cidade2);
            } else{
                printf("EMPATE!!!\n");
            }
        }
        break;
    case 2:
    printf("Carta 1: %.2lf / Carta 2: %.2lf\n", fp1, fp2);
        if (temp2 > 0)
        {
            printf("Carta 1 (%s) venceu!!!\n", cidade);
        } else{
            if (temp2 < 0)
            {
                printf("Carta 2 (%s) venceu!!!\n", cidade2);
            } else{
                printf("EMPATE!!!\n");
            }
        }
        break;
    case 3:
        printf("Carta 1: %.2lf / Carta 2: %.2lf\n", fp1, fp2);
        if (temp2 < 0)
        {
            printf("Carta 1 (%s) venceu!!!\n", cidade);
        } else{
            if (temp2 > 0)
            {
                printf("Carta 2 (%s) venceu!!!\n", cidade2);
            } else{
                printf("EMPATE!!!\n");
            }
        }
        break;
    
    default:
        printf("Erro na programacao\n");
        break;
    }
    
    
    
    
    return 0;
}
