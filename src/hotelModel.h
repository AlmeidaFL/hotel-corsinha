#ifndef HOTELMODEL_H_INCLUDED
#define HOTELMODEL_H_INCLUDED

#include "hotelView.h"
#include "hotelModel.h"
#include "hotelController.h"

typedef struct hospede //Hospede, todas as coisas que tem cada um.
{
    char cpf[12],nome[60],endereco[80],email[50],telefone[12];
    int senha,senha1;
    int idade;
}hospedeHotel;

void AndaresApartamentos(int Hotel[21][15]);//Definindo cada andar como 0/aberto;

void reservas(int Hotel[21][15],hospedeHotel hotel[21][15], int opcao);//Fazendo todas operações que envolvem calculo nas reservas.

void check_in(int Hotel[21][15],hospedeHotel hotel[21][15], int opcao);//Fazendo todas operações que envolvem calculo no check-in.

void check_out(int Hotel[21][15],hospedeHotel hotel[21][15],int avaliar, int define[]);//Fazendo todas operações que envolvem calculo no check-out.

void SenhaDoQuarto(hospedeHotel hotel[21][15], int A, int Ap, int Hotel[15][21]);//Fazendo a operação da senha,ao fazer a reserva.

void ocupacaoDoHotel(float ocupado);//Define a taxa de ocupação de hotel pelo calculo.

int apReservado(int Hotel[21][15], int A, int Ap);//Verifica se esta reservado e pede um novo apartamento.

#endif // HOTELMODEL_H_INCLUDED
