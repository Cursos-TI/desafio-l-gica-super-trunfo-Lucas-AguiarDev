#include <stdio.h>

int main() {

    char confirmacao[3];

    // Definição das variáveis para armazenar as propriedades das cidades
    char nome_A01[20];
    char cod_A01[5];
    float populacao_A01;
    float area_A01;
    float pib_A01;
    int turismo_A01;

    //variaveis para calculos
    float densidade_A01 =0.0;
    float percapta_A01 =0.0;

    char nome_A02[20];
    char cod_A02[5];
    float populacao_A02;
    float area_A02;
    float pib_A02;
    int turismo_A02;
    
    //variaveis para calculos
    float densidade_A02 =0.0;
    float percapta_A02 =0.0;

//------------------------------------------------------------------

    printf("========== CADASTROS JOGO SUPER TRUNFO ==========\n");

//---------- CADASTRO CIDADE 1 ----------

    printf("\n\nCADASTRO DA PRIMEIRA CIDADE \n-------------------------------------------------------- \n");

    printf("Digite o nome da cidade 01: ");
    scanf("%s", &nome_A01);

    printf("Qual o CODIGO da cidade 01? ");
    scanf("%s", &cod_A01);

    printf("Qual é o tamanho da população da cidade %s? ", nome_A01);
    scanf("%f", &populacao_A01);

    printf("Qual a area da cidade %s em km²? ", nome_A01);
    scanf("%f", &area_A01); 

    printf("Qual o PIB da cidade %s? ", nome_A01);
    scanf("%f", &pib_A01);

    printf("Quantos pontos turisticos %s tem? ", nome_A01);
    scanf("%d", &turismo_A01);

    //verificacao para evitar divisao por 0

    if (area_A01 != 0.0) {
        densidade_A01 = populacao_A01 / area_A01;
    } else {
        densidade_A01 = 0.0; //evita NaN
    }

    if (populacao_A01 != 0.0) {
        percapta_A01 = pib_A01 / populacao_A01;
    } else {
        populacao_A01 = 0.0; //evita NaN
    }
    
//---------- CADASTRO CIDADE 2 ----------


printf("========== CADASTRE A SEGUNDA CARTA ==========\n");

    printf("Digite o nome da cidade 02: ");
    scanf("%s", &nome_A02);

    printf("Qual o CODIGO da cidade %s? ", &nome_A02);
    scanf("%s", &cod_A02);

    printf("Qual é o tamanho da população da cidade %s? ", nome_A02);
    scanf("%d", &populacao_A02);

    printf("Qual a area da cidade %s em m²? ", nome_A02);
    scanf("%d", &area_A02); 

    printf("Qual o PIB da cidade %s? ", nome_A02);
    scanf("%d", &pib_A02);

    printf("Quantos pontos turisticos %s tem? ", nome_A02);
    scanf("%d", &turismo_A02);

    //verificacao para evitar divisao por 0

    if (area_A02 != 0.0) {
        densidade_A02 = populacao_A02 / area_A02;
    } else {
        densidade_A02 = 0.0; //evita NaN
    }

    if (populacao_A02 != 0.0) {
        percapta_A02 = pib_A02 / populacao_A02;
    } else {
        populacao_A02 = 0.0; //evita NaN
    }

//---------- EXIBINDO CARTAS CADASTRADAS ----------

printf("========== CONFIRA AS CARTAS CADASTRADAS ==========\n");

printf("\nLISTA DE CARTAS DO JOGO \n-------------------------------------------------------- \n");
    printf("\nCARTA %s: \n-------------------------------------------------------- \n", cod_A01);
    printf("CIDADE: %s \n", nome_A01);
    printf("POPULACAO: %f \n", populacao_A01);
    printf("AREA: %f m² \n", area_A01);
    printf("PIB: R$%f \n", pib_A01);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_A01);
    printf("PIB PER  CAPTA: R$%f \n", percapta_A01);
    printf("PONTOS TURISTICOS: %d \n\n", turismo_A01);

//------------------------------------------------------------------

    printf("-------------------------------------------------------- \n");
    printf("CARTA %s: \n-------------------------------------------------------- \n", cod_A02);
    printf("CIDADE: %s \n", nome_A02);
    printf("POPULACAO: %d \n", populacao_A02);
    printf("AREA: %d m² \n", area_A02);
    printf("PIB: R$%d \n", pib_A02);
    printf("DENSIDADE POPULACIONAL: %f/km² \n", densidade_A02);
    printf("PIB PER  CAPTA: R$%f \n", percapta_A02);
    printf("PONTOS TURISTICOS: %d", turismo_A02);
    printf("\n-------------------------------------------------------- \n");

//---------- LÓGICA DO JOGO ----------

    printf("As cartas cadastradas estão corretas? (SOMENTE SIM OU NAO) \n");
    scanf("%s", &confirmacao);

    if (confirmacao != "NAO") {
        printf("Perfito, vamos para aos resultados! \n");

            if(percapta_A01 > percapta_A02) {
                printf("A cidade %s, venceu com base no atributo RENDA PERCAPTA!", nome_A01);
            } else {
                printf("A cidade %s, venceu com base no atributo RENDA PERCAPTA!", nome_A02);
            }

    } else {
        printf("Parece que tem alguma informação errada, volte para o inicio e realize novamente os cadastros! \n");
    }    

    return 0;
}
