#include <stdlib.h>
#include <stdio.h>
#include "hotelView.h"
#include "hotelModel.h"
#include "hotelController.h"

void opcoesHotel(int Hotel[21][15]){

    int opcao=0; //Opções do menu.
    float ocupado = 0; //Variaveis para contagem da porcentagem de ocup. do hotel.
    int avaliar; //Variavel que usamos para avaliarificar o hotel.
    int define[2];
    hospedeHotel hospede[21][15]; //Sendo hotel minusculo os hospedes.

    while(opcao !=5) //Menu de opções do hotel.
    {

    opcao = menu();

    switch(opcao) //Usamos o switch/case para fazer um menu interativo com o usuario, para ele fazer as devidas escolhas.
    {

        case 0: dadosDoHospede(hospede);

                break;

        case 1: reservas(Hotel,hospede, opcao);

                break;

        case 2: check_in(Hotel,hospede, opcao);
                ocupado++; //Aumentando 1 nos numeros de ocupados, inicialmente sendo 0.

                break;

        case 3: check_out(Hotel,hospede,avaliar, define);
                ocupado--; //Diminuindo 1 nos numeros de ocupados, inicialmente sendo 0.

                break;

        case 4: ocupacaoDoHotel(ocupado);

                break;

        case 5: fimMenu();

                break;

        default : invalida();

                  break;
    }
    }
    }
