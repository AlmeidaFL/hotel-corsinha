#ifndef HOTELVIEW_H_INCLUDED
#define HOTELVIEW_H_INCLUDED

#include "hotelView.h"
#include "hotelModel.h"
#include "hotelController.h"

int menu();//Printa as op��es da interface.
void fimMenu();//Sai do menu.
void invalida();//Se a pessoa n�o escolheu uma das op��es disponiveis no menu, ele ira pedir novamente para escolher.
void avalia(int avaliar);//Pede para a pessoa classificar a estadia no hotel.
void defineChkout(int define[]);//Scaneia os valores de apartamento e andar(Qual andar e apartamento o individuo se alojou).
void defineChkin(hospedeHotel hotel[21][15],int Ap,int A);//Printa se a pessoa conseguiu ou n�o realizar o check-in com sucesso.
int apartamentoInexistente();//Caso o usuario tenha digitado o apartamento errado, pede para que ele digite novamente.
int andarInexistente();//Caso o usuario tenha digitado o andar errado, pede para que ele digite novamente.
void verificaApartamento(int Hotel[21][15], int opcao, int A);//Verifica se o apartamento esta aberto, fechado ou reservado.
void printSenha(hospedeHotel hotel[21][15], int A, int Ap);//Esta printando a senha.
void pedeDadosDoHospede(hospedeHotel hotel[21][15], int A, int Ap);//Solicita os dados do hospede.
void escolhaOutroApartamento();//Pede para que o usuario escolha outro apartamento.
void dadosDoHospede(hospedeHotel hotel[21][15]);//Mostra os dados do hospede que esta naquele quarto.
void printOcupacao(float porcentagemOcup);//Printa a ocupa��o.

#endif // HOTELVIEW_H_INCLUDED
