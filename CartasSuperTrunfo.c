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

    //=================================================================================================
    // Comentario do Programador
    //Optei por "setar" Estados e Cidades para que ficasse mais intuitivo.
    
    //=================================================================================================
    // Variaveis
        // Estado1
            char estado1 [20]= "Amazonas";

                char a01 [20]= "Manaus";
                float a01pop;
                float a01area;
                float a01pib;
                int a01pontos;

                char a02 [20]= "Urucará";
                float a02pop;
                float a02area;
                float a02pib;
                int a02pontos;

                char a03 [20]= "Apui";
                float a03pop;
                float a03area;
                float a03pib;
                int a03pontos;

                char a04 [20]= "Tefé";
                float a04pop;
                float a04area;
                float a04pib;
                int a04pontos;

            // Estado2
            char estado2 [20]= "Piaui";

                char b01 [20]= "Teresina";
                float b01pop;
                float b01area;
                float b01pib;
                int b01pontos;

                char b02 [20]= "Floriano";
                float b02pop;
                float b02area;
                float b02pib;
                int b02pontos;
                
                char b03 [20]= "Picos";
                float b03pop;
                float b03area;
                float b03pib;
                int b03pontos;

                char b04 [20]= "Parnaiba";
                float b04pop;
                float b04area;
                float b04pib;
                int b04pontos;

                // Estado3
                char estado3 [20]= "Maranhão";

                char c01 [20]= "São Luiz";
                float c01pop;
                float c01area;
                float c01pib;
                int c01pontos;

                char c02 [20]= "Caxias";
                float c02pop;
                float c02area;
                float c02pib;
                int c02pontos;
                
                char c03 [20]= "Balsas";
                float c03pop;
                float c03area;
                float c03pib;
                int c03pontos;

                char c04 [20]= "Colinas";
                float c04pop;
                float c04area;
                float c04pib;
                int c04pontos;

                // Estado4
                char estado4 [20]= "Minas Gerais";

                char d01 [20]= "Belo Horizonte";
                float d01pop;
                float d01area;
                float d01pib;
                int d01pontos;

                char d02 [20]= "Juiz de Fora";
                float d02pop;
                float d02area;
                float d02pib;
                int d02pontos;
                
                char d03 [20]= "Uberlândia";
                float d03pop;
                float d03area;
                float d03pib;
                int d03pontos;

                char d04 [20]= "Uberaba";
                float d04pop;
                float d04area;
                float d04pib;
                int d04pontos;

                // Estado5
                char estado5 [20]= "São Paulo";

                char e01 [20]= "Santos";
                float e01pop;
                float e01area;
                float e01pib;
                int e01pontos;

                char e02 [20]= "São Vicente";
                float e02pop;
                float e02area;
                float e02pib;
                int e02pontos;
                
                char e03 [20]= "Praia Grande";
                float e03pop;
                float e03area;
                float e03pib;
                int e03pontos;

                char e04 [20]= "Cubatão";
                float e04pop;
                float e04area;
                float e04pib;
                int e04pontos;

                // Estado6
                char estado6 [20]= "Espirito Santo";

                char f01 [20]= "Vitoria";
                float f01pop;
                float f01area;
                float f01pib;
                int f01pontos;

                char f02 [20]= "Guarapari";
                float f02pop;
                float f02area;
                float f02pib;
                int f02pontos;
                
                char f03 [20]= "Cariacica";
                float f03pop;
                float f03area;
                float f03pib;
                int f03pontos;

                char f04 [20]= "Colatina";
                float f04pop;
                float f04area;
                float f04pib;
                int f04pontos;

                // Estado7
                char estado7 [20]= "Bahia";

                char g01 [20]= "Salvador";
                float g01pop;
                float g01area;
                float g01pib;
                int g01pontos;

                char g02 [20]= "Xique-Xique";
                float g02pop;
                float g02area;
                float g02pib;
                int g02pontos;
                
                char g03 [20]= "Feira de Santana";
                float g03pop;
                float g03area;
                float g03pib;
                int g03pontos;

                char g04 [20]= "Ilheus";
                float g04pop;
                float g04area;
                float g04pib;
                int g04pontos;

                // Estado8
                char estado8 [20]= "Sergipe";

                char h01 [20]= "Aracaju";
                float h01pop;
                float h01area;
                float h01pib;
                int h01pontos;

                char h02 [20]= "Itabaianinha";
                float h02pop;
                float h02area;
                float h02pib;
                int h02pontos;
                
                char h03 [20]= "Muribeca";
                float h03pop;
                float h03area;
                float h03pib;
                int h03pontos;

                char h04 [20]= "Siriri";
                float h04pop;
                float h04area;
                float h04pib;
                int h04pontos;

// Fim das Variaveis
//===========================================================================================

printf ("Seja bem vindo(a) ao Super Trunfo Países.\n");
printf ("Cadastre as cartas das cidades a seguir.\n ");
printf ("Preencha todas as Informações,\n no final todos os dados cadastrados serão exibidos.\n");
printf ("==========Vamos lá!==========\n");

//ESTADO 1
// CIDADE 1 ESTADO 1

    printf ("Cadastre as cidades do estado %s.\n", estado1);
        printf ("Cidade %s.\n Qual é a população de %s?\n", a01, a01);
            scanf ("%f", &a01pop);

        printf ("Cidade %s.\n Qual é a área de %s?\n", a01, a01);
            scanf ("%f", &a01area);

        printf ("Cidade %s.\n Qual é o PIB de %s?\n", a01, a01);
            scanf ("%f", &a01pib);


        printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", a01, a01);
            scanf ("%i", &a01pontos);


        //printf ("%f \n %f \n %f \n %d \n", a01pop, a01area, a01pib, a01pontos);

// CIDADE 2 ESTADO 1===============================================================================
        printf ("Cidade %s.\n Qual é a população de %s?\n", a02, a02);
            scanf ("%f", &a02pop);

        printf ("Cidade %s.\n Qual é a área de %s?\n", a02, a02);
            scanf ("%f", &a02area);

        printf ("Cidade %s.\n Qual é o PIB de %s?\n", a02, a02);
            scanf ("%f", &a02pib);


        printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", a02, a02);
            scanf ("%i", &a02pontos);

// CIDADE 3 ESTADO 1===============================================================================
        printf ("Cidade %s.\n Qual é a população de %s?\n", a03, a03);
            scanf ("%f", &a03pop);

        printf ("Cidade %s.\n Qual é a área de %s?\n", a03, a03);
            scanf ("%f", &a03area);

        printf ("Cidade %s.\n Qual é o PIB de %s?\n", a03, a03);
            scanf ("%f", &a03pib);


        printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", a03, a03);
            scanf ("%i", &a03pontos);

// CIDADE 4 ESTADO 1===============================================================================
        printf ("Cidade %s.\n Qual é a população de %s?\n", a04, a04);
            scanf ("%f", &a04pop);

        printf ("Cidade %s.\n Qual é a área de %s?\n", a04, a04);
            scanf ("%f", &a04area);

        printf ("Cidade %s.\n Qual é o PIB de %s?\n", a04, a04);
            scanf ("%f", &a04pib);


        printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", a04, a04);
            scanf ("%i", &a04pontos);


            


//ESTADO 2 ======================================================================
// CIDADE 1 ESTADO 2

    printf ("Cadastre as cidades do estado %s.\n", estado2);
    printf ("Cidade %s.\n Qual é a população de %s?\n", b01, b01);
        scanf ("%f", &b01pop);

    printf ("Cidade %s.\n Qual é a área de %s?\n", b01, b01);
        scanf ("%f", &b01area);

    printf ("Cidade %s.\n Qual é o PIB de %s?\n", b01, b01);
        scanf ("%f", &b01pib);


    printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", b01, b01);
        scanf ("%i", &b01pontos);


    //printf ("%f \n %f \n %f \n %d \n", a01pop, a01area, a01pib, a01pontos);

// CIDADE 2 ESTADO 2===============================================================================
    printf ("Cidade %s.\n Qual é a população de %s?\n", b02, b02);
        scanf ("%f", &b02pop);

    printf ("Cidade %s.\n Qual é a área de %s?\n", b02, b02);
        scanf ("%f", &b02area);

    printf ("Cidade %s.\n Qual é o PIB de %s?\n", b02, b02);
        scanf ("%f", &b02pib);


    printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", b02, b02);
        scanf ("%i", &b02pontos);

// CIDADE 3 ESTADO 2===============================================================================
    printf ("Cidade %s.\n Qual é a população de %s?\n", b03, b03);
        scanf ("%f", &b03pop);

    printf ("Cidade %s.\n Qual é a área de %s?\n", b03, b03);
        scanf ("%f", &b03area);

    printf ("Cidade %s.\n Qual é o PIB de %s?\n", b03, b03);
        scanf ("%f", &b03pib);


    printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", b03, b03);
        scanf ("%i", &b03pontos);

// CIDADE 4 ESTADO 2===============================================================================
    printf ("Cidade %s.\n Qual é a população de %s?\n", b04, b04);
        scanf ("%f", &b04pop);

    printf ("Cidade %s.\n Qual é a área de %s?\n", b04, b04);
        scanf ("%f", &b04area);

    printf ("Cidade %s.\n Qual é o PIB de %s?\n", b04, b04);
        scanf ("%f", &b04pib);


    printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", b04, b04);
        scanf ("%i", &b04pontos);


//ESTADO 3 ======================================================================
// CIDADE 1 ESTADO 3

printf ("Cadastre as cidades do estado %s.\n", estado3);
printf ("Cidade %s.\n Qual é a população de %s?\n", c01, c01);
    scanf ("%f", &c01pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", c01, c01);
    scanf ("%f", &c01area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", c01, c01);
    scanf ("%f", &c01pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", c01, c01);
    scanf ("%i", &c01pontos);




// CIDADE 2 ESTADO 3===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", c02, c02);
    scanf ("%f", &c02pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", c02, c02);
    scanf ("%f", &c02area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", c02, c02);
    scanf ("%f", &c02pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", c02, c02);
    scanf ("%i", &c02pontos);

// CIDADE 3 ESTADO 3===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", c03, c03);
    scanf ("%f", &c03pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", c03, c03);
    scanf ("%f", &c03area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", c03, c03);
    scanf ("%f", &c03pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", c03, c03);
    scanf ("%i", &c03pontos);

// CIDADE 4 ESTADO 3===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", c04, c04);
    scanf ("%f", &c04pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", c04, c04);
    scanf ("%f", &c04area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", c04, c04);
    scanf ("%f", &c04pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", c04, c04);
    scanf ("%i", &c04pontos);


//ESTADO 4 ======================================================================
// CIDADE 1 ESTADO 4

printf ("Cadastre as cidades do estado %s.\n", estado4);
printf ("Cidade %s.\n Qual é a população de %s?\n", d01, d01);
    scanf ("%f", &d01pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", d01, d01);
    scanf ("%f", &d01area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", d01, d01);
    scanf ("%f", &d01pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", d01, d01);
    scanf ("%i", &d01pontos);




// CIDADE 2 ESTADO 4===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", d02, d02);
    scanf ("%f", &d02pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", d02, d02);
    scanf ("%f", &d02area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", d02, d02);
    scanf ("%f", &d02pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", d02, d02);
    scanf ("%i", &d02pontos);

// CIDADE 3 ESTADO 4===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", d03, d03);
    scanf ("%f", &d03pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", d03, d03);
    scanf ("%f", &d03area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", d03, d03);
    scanf ("%f", &d03pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", d03, d03);
    scanf ("%i", &d03pontos);

// CIDADE 4 ESTADO 4===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", d04, d04);
    scanf ("%f", &d04pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", d04, d04);
    scanf ("%f", &d04area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", d04, d04);
    scanf ("%f", &d04pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", d04, d04);
    scanf ("%i", &d04pontos);



//ESTADO 5 ======================================================================
// CIDADE 1 ESTADO 5

printf ("Cadastre as cidades do estado %s.\n", estado5);
printf ("Cidade %s.\n Qual é a população de %s?\n", e01, e01);
    scanf ("%f", &e01pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", e01, e01);
    scanf ("%f", &e01area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", e01, e01);
    scanf ("%f", &e01pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", e01, e01);
    scanf ("%i", &e01pontos);




// CIDADE 2 ESTADO 5===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", e02, e02);
    scanf ("%f", &e02pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", e02, e02);
    scanf ("%f", &e02area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", e02, e02);
    scanf ("%f", &e02pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", e02, e02);
    scanf ("%i", &e02pontos);

// CIDADE 3 ESTADO 5===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", e03, e03);
    scanf ("%f", &e03pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", e03, e03);
    scanf ("%f", &e03area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", e03, e03);
    scanf ("%f", &e03pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", e03, e03);
    scanf ("%i", &e03pontos);

// CIDADE 4 ESTADO 5===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", e04, e04);
    scanf ("%f", &e04pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", e04, e04);
    scanf ("%f", &e04area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", e04, e04);
    scanf ("%f", &e04pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", e04, e04);
    scanf ("%i", &e04pontos);

//ESTADO 6 ======================================================================
// CIDADE 1 ESTADO 6

printf ("Cadastre as cidades do estado %s.\n", estado6);
printf ("Cidade %s.\n Qual é a população de %s?\n", f01, f01);
    scanf ("%f", &f01pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", f01, f01);
    scanf ("%f", &f01area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", f01, f01);
    scanf ("%f", &f01pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", f01, f01);
    scanf ("%i", &f01pontos);




// CIDADE 2 ESTADO 6===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", f02, f02);
    scanf ("%f", &f02pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", f02, f02);
    scanf ("%f", &f02area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", f02, f02);
    scanf ("%f", &f02pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", f02, f02);
    scanf ("%i", &f02pontos);

// CIDADE 3 ESTADO 6===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", f03, f03);
    scanf ("%f", &f03pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", f03, f03);
    scanf ("%f", &f03area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", f03, f03);
    scanf ("%f", &f03pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", f03, f03);
    scanf ("%i", &f03pontos);

// CIDADE 4 ESTADO 6===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", f04, f04);
    scanf ("%f", &f04pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", f04, f04);
    scanf ("%f", &f04area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", f04, f04);
    scanf ("%f", &f04pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", f04, f04);
    scanf ("%i", &f04pontos);


//ESTADO 7 ======================================================================
// CIDADE 1 ESTADO 7

printf ("Cadastre as cidades do estado %s.\n", estado7);
printf ("Cidade %s.\n Qual é a população de %s?\n", g01, g01);
    scanf ("%f", &g01pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", g01, g01);
    scanf ("%f", &g01area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", g01, g01);
    scanf ("%f", &g01pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", g01, g01);
    scanf ("%i", &g01pontos);




// CIDADE 2 ESTADO 7===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", g02, g02);
    scanf ("%f", &g02pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", g02, g02);
    scanf ("%f", &g02area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", g02, g02);
    scanf ("%f", &g02pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", g02, g02);
    scanf ("%i", &g02pontos);

// CIDADE 3 ESTADO 7===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", g03, g03);
    scanf ("%f", &g03pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", g03, g03);
    scanf ("%f", &g03area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", g03, g03);
    scanf ("%f", &g03pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", g03, g03);
    scanf ("%i", &g03pontos);

// CIDADE 4 ESTADO 7===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", g04, g04);
    scanf ("%f", &g04pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", g04, g04);
    scanf ("%f", &g04area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", g04, g04);
    scanf ("%f", &g04pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", g04, g04);
    scanf ("%i", &g04pontos);


//ESTADO 8 ======================================================================
// CIDADE 1 ESTADO 8

printf ("Cadastre as cidades do estado %s.\n", estado8);
printf ("Cidade %s.\n Qual é a população de %s?\n", h01, h01);
    scanf ("%f", &h01pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", h01, h01);
    scanf ("%f", &h01area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", h01, h01);
    scanf ("%f", &h01pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", h01, h01);
    scanf ("%i", &h01pontos);




// CIDADE 2 ESTADO 8===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", h02, h02);
    scanf ("%f", &h02pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", h02, h02);
    scanf ("%f", &h02area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", h02, h02);
    scanf ("%f", &h02pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", h02, h02);
    scanf ("%i", &h02pontos);

// CIDADE 3 ESTADO 8===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", h03, h03);
    scanf ("%f", &h03pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", h03, h03);
    scanf ("%f", &h03area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", h03, h03);
    scanf ("%f", &h03pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", h03, h03);
    scanf ("%i", &h03pontos);

// CIDADE 4 ESTADO 8===============================================================================
printf ("Cidade %s.\n Qual é a população de %s?\n", h04, h04);
    scanf ("%f", &h04pop);

printf ("Cidade %s.\n Qual é a área de %s?\n", h04, h04);
    scanf ("%f", &h04area);

printf ("Cidade %s.\n Qual é o PIB de %s?\n", h04, h04);
    scanf ("%f", &h04pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", h04, h04);
    scanf ("%i", &h04pontos);

//FIM DO CADASTRO DAS CARTAS=========================================================================

//EXIBINDO TODAS AS CARTAS==========================================================================

printf ("Exibindo todas as cartas cadatradas.\n");

printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado1, a01, a01pop, a01area, a01pib, a01pontos);



printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado1, a02, a02pop, a02area, a02pib, a02pontos);



printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado1, a03, a03pop, a03area, a03pib, a03pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado1, a04, a04pop, a04area, a04pib, a04pontos);

//estado 2



printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado2, b01, b01pop, b01area, b01pib, b01pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado2, b02, b02pop, b02area, b02pib, b02pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado2, b03, b03pop, b03area, b03pib, b03pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado2, b04, b04pop, b04area, b04pib, b04pontos);

//estado 3


printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado3, c01, c01pop, c01area, c01pib, c01pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado3, c02, c02pop, c02area, c02pib, c02pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado3, c03, c03pop, c03area, c03pib, c03pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado3, c04, c04pop, c04area, c04pib, c04pontos);

//estado 4




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado4, d01, d01pop, d01area, d01pib, d01pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado4, d02, d02pop, d02area, d02pib, d02pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado4, d03, d03pop, d03area, d03pib, d03pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado4, d04, d04pop, d04area, d04pib, d04pontos);



//estado 5



printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado5, e01, e01pop, e01area, e01pib, e01pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado5, e02, e02pop, e02area, e02pib, e02pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado5, e03, e03pop, e03area, e03pib, e03pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado5, e04, e04pop, e04area, e04pib, e04pontos);


//estado 6



printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado6, f01, f01pop, f01area, f01pib, f01pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado6, f02, f02pop, f02area, f02pib, f02pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado6, f03, f03pop, f03area, f03pib, f03pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado6, f04, f04pop, f04area, f04pib, f04pontos);



//estado 7



printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado7, g01, g01pop, g01area, g01pib, g01pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado7, g02, g02pop, g02area, g02pib, g02pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado7, g03, g03pop, g03area, g03pib, g03pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado7, g04, g04pop, g04area, g04pib, g04pontos);


//estado 8



printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado8, h01, h01pop, h01area, h01pib, h01pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado8, h02, h02pop, h02area, h02pib, h02pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado8, h03, h03pop, h03area, h03pib, h03pontos);




printf ("Estado %s \n========================\nCidade %s.\nPopulação: %f.\nÁrea: %f.\nPIB da cidade: %f.\nPontos Turísticos: %i.\n\n", estado8, h04, h04pop, h04area, h04pib, h04pontos);


    return 0;
}
