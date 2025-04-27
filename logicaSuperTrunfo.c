#include<stdio.h>
#include<string.h>

int main() {
    //Declaração das variáveis
    char est = 'A', est2 = 'B';
    char cod[4] = "A01", cod2[4] = "B02", cidade[20] = "Sao Paulo (SP)", cidade2[20] = "Rio de Janeiro (RJ)";
    char *atr, *atr2;
    unsigned long int pop = 12325000, pop2 = 6748000, p1, p2, p12, p22;
    long int np = 30, np2 = 30, temp, temp12, soma, soma2;
    int menu, menu2, resp, resp2, resp3;
    double area = 1521.11, area2 = 1200.25, pib = 699.28, pib2 = 300.50, dens, dens2, ppc, ppc2, sp1, sp2, fp1, fp2, fp12, fp22, temp2, temp22, fsoma, fsoma2;

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
    printf("Super Poder: %.2lf\n", sp1);

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
    printf("\nComparacao de Cartas:\n");
    //Escolha do primeiro atributo
    printf("Escolha o primeiro atributo para comparacao.\n");
    printf("\nDigite um numero de qual atributo será comparado entre as duas cartas:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Numero de Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
    scanf("%d", &menu);
    
    //Validação do menu
    if (menu < 1 || menu > 7)
    {
        printf("Opcao invalida.\n");
        return 0;
    }
    
    //Escolha do segundo atributo
    printf("Escolha o segundo atributo para comparacao.\n");
    printf("\nDigite um numero de qual atributo será comparado entre as duas cartas (exceto %d, escolhido anteriormente):\n", menu);
    switch (menu)
    {
    case 1:
        printf("2 - Area\n3 - PIB\n4 - Numero de Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
        break;
    case 2:
        printf("1 - Populacao\n3 - PIB\n4 - Numero de Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
        break;
    case 3:
        printf("1 - Populacao\n2 - Area\n4 - Numero de Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
        break;
    case 4:
        printf("1 - Populacao\n2 - Area\n3 - PIB\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
        break;
    case 5:
        printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Numero de Pontos Turisticos\n6 - PIB per Capita\n7 - Super Poder\n");
        break;
    case 6:
        printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Numero de Pontos Turisticos\n5 - Densidade Populacional\n7 - Super Poder\n");
        break;
    case 7:
        printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Numero de Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n");
        break;
    
    default:
        printf("Erro 1.\n");
        break;
    }
    scanf("%d", &menu2);
    
    //Validacao do menu 2
    if(menu2 < 1 || menu2 > 7 || menu == menu2){
        printf("Opcao invalida!\n");
        return 0;
    }

    //Comparacao do primeiro atributo
    switch (menu)
    {
    case 1:
        temp = pop - pop2;
        atr = "Populacao";
        p1 = pop;
        p2 = pop2;
        resp = 1;
        break;
    case 2:
        temp2 = area - area2;
        atr = "Area";
        fp1 = area;
        fp2 = area2;
        resp = 2;
        break;
    case 3:
        temp2 = pib - pib2;
        atr = "PIB";
        fp1 = pib;
        fp2 = pib2;
        resp = 2;
        break;
    case 4:
        temp = np - np2;
        atr = "Numero de Pontos Turisticos";
        p1 = np;
        p2 = np2;
        resp = 1;
        break;
    case 5:
        temp2 = dens - dens2;
        atr = "Densidade Populacional";
        fp1 = dens;
        fp2 = dens2;
        resp = 3;
        break;
    case 6:
        temp2 = ppc - ppc2;
        atr = "PIB per Capita";
        fp1 = ppc;
        fp2 = ppc2;
        resp = 2;
        break;
    case 7:
        temp2 = sp1 - sp2;
        atr = "Super Poder";
        fp1 = sp1;
        fp2 = sp2;
        resp = 2;
        break;
    default:
        printf("Erro menu 1!\n");
        return 0;
        break;
    }
    
    //Comparacao do segundo atributo
    switch (menu2)
    {
    case 1:
        temp12 = pop - pop2;
        atr2 = "Populacao";
        p12 = pop;
        p22 = pop2;
        resp2 = 1;
        break;
    case 2:
        temp22 = area - area2;
        atr2 = "Area";
        fp12 = area;
        fp22 = area2;
        resp2 = 2;
        break;
    case 3:
        temp22 = pib - pib2;
        atr2 = "PIB";
        fp12 = pib;
        fp22 = pib2;
        resp2 = 2;
        break;
    case 4:
        temp12 = np - np2;
        atr2 = "Numero de Pontos Turisticos";
        p12 = np;
        p22 = np2;
        resp2 = 1;
        break;
    case 5:
        temp22 = dens - dens2;
        atr2 = "Densidade Populacional";
        fp12 = dens;
        fp22 = dens2;
        resp2 = 3;
        break;
    case 6:
        temp22 = ppc - ppc2;
        atr2 = "PIB per Capita";
        fp12 = ppc;
        fp22 = ppc2;
        resp2 = 2;
        break;
    case 7:
        temp22 = sp1 - sp2;
        atr2 = "Super Poder";
        fp12 = sp1;
        fp22 = sp2;
        resp2 = 2;
        break;
    default:
        printf("Erro menu 1!\n");
        return 0;
        break;
    }

    //Soma dos atributos
    if(menu == 1 || menu == 4 ){
        if(menu2 == 1 || menu2 == 4){
            soma = p1 + p12;
            soma2 = p2 + p22;
            resp3 = 1;
        } else{
            fsoma = (double) p1 + fp12;
            fsoma2 = (double) p2 + fp22;
            resp3 = 2;
        }
    } else{
        if(menu2 == 1 || menu2 == 4){
            fsoma = fp1 + (double) p12;
            fsoma2 = fp2 + (double) p22;
            resp3 = 2;
        } else{
            fsoma = fp1 + fp12;
            fsoma2 = fp2 + fp22;
            resp3 = 2;
        }
    }


    //Respostas primeiro atributo
    printf("\nCompararacao entre %s e %s\n", cidade, cidade2);
    printf("\nAtributo: %s\n", atr);
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

    //Respostas segundo atributo
    printf("\nAtributo: %s\n", atr2);
    switch (resp2)
    {
    case 1:
        printf("Carta 1: %ld / Carta 2: %ld\n", p12, p22);
        if (temp12 > 0)
        {
            printf("Carta 1 (%s) venceu!!!\n", cidade);
        } else{
            if (temp12 < 0)
            {
                printf("Carta 2 (%s) venceu!!!\n", cidade2);
            } else{
                printf("EMPATE!!!\n");
            }
        }
        break;
    case 2:
    printf("Carta 1: %.2lf / Carta 2: %.2lf\n", fp12, fp22);
        if (temp22 > 0)
        {
            printf("Carta 1 (%s) venceu!!!\n", cidade);
        } else{
            if (temp22 < 0)
            {
                printf("Carta 2 (%s) venceu!!!\n", cidade2);
            } else{
                printf("EMPATE!!!\n");
            }
        }
        break;
    case 3:
        printf("Carta 1: %.2lf / Carta 2: %.2lf\n", fp12, fp22);
        if (temp22 < 0)
        {
            printf("Carta 1 (%s) venceu!!!\n", cidade);
        } else{
            if (temp22 > 0)
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
    
    //Respostas soma de atributos
    printf("\nSoma dos atributos: %s e %s\n", atr, atr2);
    switch (resp3)
    {
    case 1:
        printf("Carta 1: %ld / Carta 2: %ld\n", soma, soma2);
        if (soma - soma2 > 0)
        {
            printf("Carta 1 (%s) venceu!!!\n", cidade);
        } else{
            if (soma - soma2 < 0)
            {
                printf("Carta 2 (%s) venceu!!!\n", cidade2);
            } else{
                printf("EMPATE!!!\n");
            }
        }
        break;
    case 2:
    printf("Carta 1: %.2lf / Carta 2: %.2lf\n", fsoma, fsoma2);
        if (fsoma - fsoma2 > 0)
        {
            printf("Carta 1 (%s) venceu!!!\n", cidade);
        } else{
            if (fsoma - fsoma2 < 0)
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
    printf("\n");
    
    
    return 0;
}
