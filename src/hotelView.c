#include "hotelView.h"
#include "hotelModel.h"
#include "hotelController.h"
#include <stdlib.h>
#include <stdio.h>

int menu(){
    int opcao;

    printf("\n<----------------------------------------------->");
    printf("\n                      MENU                      \n");
    printf("<----------------------------------------------->\n");
    printf("\nPor favor escolha uma das opcoes abaixo: \n 0) Hospedes do hotel\n 1) Reservas\n 2) Check- in\n 3) Check-out\n 4) Porcentagem de ocupacao do hotel\n 5) Deseja sair do menu.\n");
    printf("\n<----------------------------------------------->\n");
    scanf("%d",&opcao);
    return opcao;
}

void fimMenu(){
    printf("\nTenha um otimo dia!\n"); //Caso não haja mais nenhuma reserva a ser feita.
}

void invalida(){
    printf("\nSelecione uma opcao valida.\n"); //Digitou uma opção do menu inválida.
}

void avaliarAvalia(int avaliar){
    if(avaliar>-1 && avaliar<=3) //Somente para o usuario fazer uma avaliação do hotel.
    {
        printf("\nObrigado pela avaliacao!Vamos melhorar na proxima!\n");
    }else if(avaliar>3 && avaliar<=6)
    {
        printf("\nObrigado pela avaliacao!Estamos cientes dos problemas,iremos melhorar.\n");
    }else if(avaliar>6 && avaliar<=8)
    {
        printf("\nObrigado pela avaliacao!\n");
    }else if(avaliar>8 && avaliar<11)
    {
        printf("\nObrigado pela avaliacao!Estamos muito contente com sua avaliacao!\n");
    }
    printf("\nSeu check-out foi efetuado com sucesso!Esperamos que tenha gostado!\n");
}

void avalia(int avaliar){
    printf("\nQue nota de 0 a 10 voce daria ao atendimento?\n");
    scanf("%d",&avaliar);
    avaliarAvalia(avaliar);
}

void defineChkout(int define[]){
    printf("\nQual o andar e apartamento em que voce se hospedou?\n"); //Check-out.
    scanf("%d %d",&define[0],&define[1]);
}

void defineChkin(hospedeHotel hotel[21][15],int Ap,int A){
    printf("\nInsira sua senha fornecida na reserva,para confirmar que foi voce quem efetuou a reserva:");
    printf("\n---------------------\n");//Daqui para baixo é tudo confirmando se é a mesma pessoa que fez a reserva.

    scanf("%d",&hotel[A][Ap].senha1);

    if(hotel[A][Ap].senha == hotel[A][Ap].senha1)//Verificando se é a mesma pessoa que fez a reserva.
    {
        printf("\nO check-in do hospede %s no Ap %d andar %d, foi realizado com sucesso!",hotel[A][Ap].nome,Ap,A);
    }else  //Caso não seja a mesma pessoa que reservou o Ap.
    {
        printf("\nEste apartamento pertence a outro hospede, escolha outro.\n");
    }
}

int apartamentoInexistente(){
    int Ap = 0;

    printf("\nDigite o apartamento que voce prefere(1 a 14): ");
    scanf("%d",&Ap);
    while(Ap>14 || Ap<1) //Verificador de Ap,pra ver se escreveu corretamente.
    {
        printf("\nVoce digitou um Ap. inexistente,por favor digite novamente.\n");
        scanf("%d",&Ap);
    }
    return Ap;
}

int andarInexistente(){
    int A;

    printf("\nDigite o andar que voce prefere(1 a 20): "); //Check-in.
    scanf("%d",&A);
    while(A>20 || A<1) //Verificador de andar, pra ver se escreveu corretamente.
    {
        printf("\nVoce digitou um Andar inexistente,por favor digite novamente.\n");
        scanf("%d",&A);
    }
    return A;
}

void verificaApartamento(int Hotel[21][15], int opcao, int A){
    int i = 011;

    for(i=1;i<15;i++) //Esta mostrando os Aps do andar digitado, se está aberto ou fechado.
    {
        if(Hotel[A][i]==0)
    {
        printf("\nNo andar %d o apartamento %d esta aberto.\n",A,i);
    }else if(Hotel[A][i]==1){
    if (opcao == 1)
    {
        printf("\nNo andar %d o apartamento %d esta reservado.\n",A,i);
    }
    else if(opcao == 2)
    {
        printf("\nNo andar %d o apartamento %d esta fechado.\n",A,i);
    }
    }
    }
}



void printSenha(hospedeHotel hotel[21][15], int A, int Ap){
    printf("\nSua senha para fazer o check-in sera:%d\n",hotel[A][Ap].senha);
}

void pedeDadosDoHospede(hospedeHotel hotel[21][15], int A, int Ap){
    printf("\nInsira seus dados:");
    printf("\n---------------------\n");

    printf("\nDigite seu cpf por gentileza(Ex:12078155861):");
    scanf("%s",&hotel[A][Ap].cpf);
    printf("\nDigite seu email por favor:");
    scanf("%s",&hotel[A][Ap].email);
    printf("\nDigite seu nome completo(Sem espaco):");
    scanf("%s",&hotel[A][Ap].nome);
    printf("\nDigite o seu endereco(CEP Ex:13201010):");
    scanf("%s",&hotel[A][Ap].endereco);
    printf("\nDigite sua idade:");
    scanf("%d",&hotel[A][Ap].idade);
    printf("\nDigite seu telefone para completar o check-in(Ex:955500047):");
    scanf("%s",&hotel[A][Ap].telefone);
    printf("\nSua reserva do Ap. %d do andar %d foi efetuada com sucesso.\n",Ap,A);

}

void escolhaOutroApartamento(){
    printf("\nApartamento reservado, escolha outro.\n");
}

void dadosDoHospede(hospedeHotel hotel[21][15])
{
                int A,Ap;

                printf("Digite o andar e o apartamento que voce deseja verificar o hospede: \n");
                scanf("%d%d", &A, &Ap);
                printf("Nome Completo: %s\n", hotel[A][Ap].nome);
                printf("CPF: %s\n", hotel[A][Ap].cpf);
                printf("Telefone: %s\n", hotel[A][Ap].telefone);
                printf("Email: %s\n", hotel[A][Ap].email);
                printf("Endereco: %s\n", hotel[A][Ap].endereco);
                printf("Idade: %d\n", hotel[A][Ap].idade);
}

void printOcupacao(float porcentagemOcup){
    printf("\nA porcentagem de ocupacao no hotel:%.2f",porcentagemOcup);
}
