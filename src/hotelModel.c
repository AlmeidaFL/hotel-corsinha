#include "hotelView.h"
#include "hotelModel.h"
#include "hotelController.h"
#include <stdlib.h>
#include <stdio.h>

void AndaresApartamentos(int Hotel[21][15])
{
    int A,Ap;
    for(A=1;A<21;A++) //Contador de andares e define todos apartamentos como 0 ou seja "aberto".
    {
        for(Ap=1;Ap<15;Ap++)
            Hotel[A][Ap] = 0;
    }
}

int apReservado(int Hotel[21][15], int A, int Ap){
    if(Hotel[A][Ap] == 1) //Caso a pessoa tenha escolhido um Ap já ocupado ira repitir os processos.
    {
        escolhaOutroApartamento();
        Ap = apartamentoInexistente();
    }

    return Ap;
}

void reservas(int Hotel[21][15],hospedeHotel hotel[21][15], int opcao)
{
    int A = 0,Ap = 0;

    A = andarInexistente();
    verificaApartamento(Hotel, opcao, A);

    Ap = apartamentoInexistente();

    Ap = apReservado(Hotel, A, Ap);

    pedeDadosDoHospede(hotel, A, Ap);

    SenhaDoQuarto(hotel, A, Ap, Hotel);
    Hotel[A][Ap] = 1;
}
void check_in(int Hotel[21][15],hospedeHotel hotel[21][15], int opcao)
{
    int A,i,Ap;

    A = andarInexistente();

    verificaApartamento(Hotel, opcao, A);

    Ap = apartamentoInexistente();

    defineChkin(hotel, Ap, A);

    Hotel[A][Ap] = 1; //Definindo o Ap como 1 ou seja "fechado".
}

void check_out(int Hotel[21][15],hospedeHotel hotel[21][15],int avaliar, int define[])
{
    defineChkout(define);

    Hotel[define[0]][define[1]] = 0; //Definindo o Ap como 0 ou seja "aberto".
    strcpy(hotel[define[0]][define[1]].nome," ");
    strcpy(hotel[define[0]][define[1]].email," ");
    strcpy(hotel[define[0]][define[1]].cpf," ");
    strcpy(hotel[define[0]][define[1]].endereco," ");
    strcpy(hotel[define[0]][define[1]].telefone," ");
    hotel[define[0]][define[1]].idade = 0;
    avalia(avaliar);
}

void SenhaDoQuarto(hospedeHotel hotel[21][15], int A, int Ap, int Hotel[15][21])
{
    hotel[A][Ap].senha = ((A * Ap)*3)/2;
    if(hotel[A][Ap].senha == hotel[Ap][A].senha)
    {
        hotel[A][Ap].senha = ((A * Ap)*4)/3;
    }
    printSenha(hotel,A,Ap);
}

void ocupacaoDoHotel(float ocupado)
{
    float porcentagemOcup;
    porcentagemOcup=(ocupado*100)/280; //Conta para ver a ocupação no mesmo.
    printOcupacao(porcentagemOcup);
}
