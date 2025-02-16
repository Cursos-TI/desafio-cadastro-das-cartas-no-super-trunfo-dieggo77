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
        printf ("Cidade %s.\n quanto é a população de %s?\n", a01, a01);
            scanf ("%f", &a01pop);

        printf ("Cidade %s.\n qual é a área de %s?\n", a01, a01);
            scanf ("%f", &a01area);

        printf ("Cidade %s.\n qual é o PIB de %s?\n", a01, a01);
            scanf ("%f", &a01pib);


        printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", a01, a01);
            scanf ("%i", &a01pontos);


        //printf ("%f \n %f \n %f \n %d \n", a01pop, a01area, a01pib, a01pontos);

// CIDADE 2 ESTADO 1===============================================================================
        printf ("Cidade %s.\n quanto é a população de %s?\n", a02, a02);
            scanf ("%f", &a02pop);

        printf ("Cidade %s.\n qual é a área de %s?\n", a02, a02);
            scanf ("%f", &a02area);

        printf ("Cidade %s.\n qual é o PIB de %s?\n", a02, a02);
            scanf ("%f", &a02pib);


        printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", a02, a02);
            scanf ("%i", &a02pontos);

// CIDADE 3 ESTADO 1===============================================================================
        printf ("Cidade %s.\n quanto é a população de %s?\n", a03, a03);
            scanf ("%f", &a03pop);

        printf ("Cidade %s.\n qual é a área de %s?\n", a03, a03);
            scanf ("%f", &a03area);

        printf ("Cidade %s.\n qual é o PIB de %s?\n", a03, a03);
            scanf ("%f", &a03pib);


        printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", a03, a03);
            scanf ("%i", &a03pontos);

// CIDADE 4 ESTADO 1===============================================================================
        printf ("Cidade %s.\n quanto é a população de %s?\n", a04, a04);
            scanf ("%f", &a04pop);

        printf ("Cidade %s.\n qual é a área de %s?\n", a04, a04);
            scanf ("%f", &a04area);

        printf ("Cidade %s.\n qual é o PIB de %s?\n", a04, a04);
            scanf ("%f", &a04pib);


        printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", a04, a04);
            scanf ("%i", &a04pontos);



//ESTADO 2 ======================================================================
// CIDADE 1 ESTADO 2

    printf ("Cadastre as cidades do estado %s.\n", estado2);
    printf ("Cidade %s.\n quanto é a população de %s?\n", b01, b01);
        scanf ("%f", &b01pop);

    printf ("Cidade %s.\n qual é a área de %s?\n", b01, b01);
        scanf ("%f", &b01area);

    printf ("Cidade %s.\n qual é o PIB de %s?\n", b01, b01);
        scanf ("%f", &b01pib);


    printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", b01, b01);
        scanf ("%i", &b01pontos);


    //printf ("%f \n %f \n %f \n %d \n", a01pop, a01area, a01pib, a01pontos);

// CIDADE 2 ESTADO 2===============================================================================
    printf ("Cidade %s.\n quanto é a população de %s?\n", b02, b02);
        scanf ("%f", &b02pop);

    printf ("Cidade %s.\n qual é a área de %s?\n", b02, b02);
        scanf ("%f", &b02area);

    printf ("Cidade %s.\n qual é o PIB de %s?\n", b02, b02);
        scanf ("%f", &b02pib);


    printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", b02, b02);
        scanf ("%i", &b02pontos);

// CIDADE 3 ESTADO 2===============================================================================
    printf ("Cidade %s.\n quanto é a população de %s?\n", b03, b03);
        scanf ("%f", &b03pop);

    printf ("Cidade %s.\n qual é a área de %s?\n", b03, b03);
        scanf ("%f", &b03area);

    printf ("Cidade %s.\n qual é o PIB de %s?\n", b03, b03);
        scanf ("%f", &b03pib);


    printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", b03, b03);
        scanf ("%i", &b03pontos);

// CIDADE 4 ESTADO 2===============================================================================
    printf ("Cidade %s.\n quanto é a população de %s?\n", b04, b04);
        scanf ("%f", &b04pop);

    printf ("Cidade %s.\n qual é a área de %s?\n", b04, b04);
        scanf ("%f", &b04area);

    printf ("Cidade %s.\n qual é o PIB de %s?\n", b04, b04);
        scanf ("%f", &b04pib);


    printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", b04, b04);
        scanf ("%i", &b04pontos);


//ESTADO 3 ======================================================================
// CIDADE 1 ESTADO 3

printf ("Cadastre as cidades do estado %s.\n", estado3);
printf ("Cidade %s.\n quanto é a população de %s?\n", c01, c01);
    scanf ("%f", &c01pop);

printf ("Cidade %s.\n qual é a área de %s?\n", c01, c01);
    scanf ("%f", &c01area);

printf ("Cidade %s.\n qual é o PIB de %s?\n", c01, c01);
    scanf ("%f", &c01pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", c01, c01);
    scanf ("%i", &c01pontos);




// CIDADE 2 ESTADO 3===============================================================================
printf ("Cidade %s.\n quanto é a população de %s?\n", c02, c02);
    scanf ("%f", &c02pop);

printf ("Cidade %s.\n qual é a área de %s?\n", c02, c02);
    scanf ("%f", &c02area);

printf ("Cidade %s.\n qual é o PIB de %s?\n", c02, c02);
    scanf ("%f", &c02pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", c02, c02);
    scanf ("%i", &c02pontos);

// CIDADE 3 ESTADO 3===============================================================================
printf ("Cidade %s.\n quanto é a população de %s?\n", c03, c03);
    scanf ("%f", &c03pop);

printf ("Cidade %s.\n qual é a área de %s?\n", c03, c03);
    scanf ("%f", &c03area);

printf ("Cidade %s.\n qual é o PIB de %s?\n", c03, c03);
    scanf ("%f", &c03pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", c03, c03);
    scanf ("%i", &c03pontos);

// CIDADE 4 ESTADO 3===============================================================================
printf ("Cidade %s.\n quanto é a população de %s?\n", c04, c04);
    scanf ("%f", &c04pop);

printf ("Cidade %s.\n qual é a área de %s?\n", c04, c04);
    scanf ("%f", &c04area);

printf ("Cidade %s.\n qual é o PIB de %s?\n", c04, c04);
    scanf ("%f", &c04pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", c04, c04);
    scanf ("%i", &c04pontos);


//ESTADO 4 ======================================================================
// CIDADE 1 ESTADO 4

printf ("Cadastre as cidades do estado %s.\n", estado4);
printf ("Cidade %s.\n quanto é a população de %s?\n", d01, d01);
    scanf ("%f", &d01pop);

printf ("Cidade %s.\n qual é a área de %s?\n", d01, d01);
    scanf ("%f", &d01area);

printf ("Cidade %s.\n qual é o PIB de %s?\n", d01, d01);
    scanf ("%f", &d01pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", d01, d01);
    scanf ("%i", &d01pontos);




// CIDADE 2 ESTADO 4===============================================================================
printf ("Cidade %s.\n quanto é a população de %s?\n", d02, d02);
    scanf ("%f", &d02pop);

printf ("Cidade %s.\n qual é a área de %s?\n", d02, d02);
    scanf ("%f", &d02area);

printf ("Cidade %s.\n qual é o PIB de %s?\n", d02, d02);
    scanf ("%f", &d02pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", d02, d02);
    scanf ("%i", &d02pontos);

// CIDADE 3 ESTADO 4===============================================================================
printf ("Cidade %s.\n quanto é a população de %s?\n", d03, d03);
    scanf ("%f", &d03pop);

printf ("Cidade %s.\n qual é a área de %s?\n", d03, d03);
    scanf ("%f", &d03area);

printf ("Cidade %s.\n qual é o PIB de %s?\n", d03, d03);
    scanf ("%f", &d03pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", d03, d03);
    scanf ("%i", &d03pontos);

// CIDADE 4 ESTADO 4===============================================================================
printf ("Cidade %s.\n quanto é a população de %s?\n", d04, d04);
    scanf ("%f", &d04pop);

printf ("Cidade %s.\n qual é a área de %s?\n", d04, d04);
    scanf ("%f", &d04area);

printf ("Cidade %s.\n qual é o PIB de %s?\n", d04, d04);
    scanf ("%f", &d04pib);


printf ("Cidade %s.\n Qual é o numero de Pontos Turísticos de %s?\n", d04, d04);
    scanf ("%i", &d04pontos);


    return 0;
}
