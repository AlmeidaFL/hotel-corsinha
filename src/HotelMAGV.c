#include <stdio.h>
#include <stdlib.h>
#include "hotelView.h"
#include "hotelModel.h"
#include "hotelController.h"

/*Nome: Gustavo Yugi Horiuchi Vasconcellos RA00301461
        Luis Felipe Almeida Beserra Matos RA00303863
        Miguel Martinazzo RA00297631
        Vitor Fernandes Marinelli RA00301478
    Professor: Carlos Eduardo Paes
    Experimento Hotel
    PUCSP - Ciencia da Computacao
    A funcao dele e o seguinte, voce ira entrar em uma opcao e ira escolher se quer fazer
    uma reserva,check-out,check-in ou não deseja fazer mais nada, o programa sempre ira mostrar
    a porcentagem de ocupação do hotel logo após ter feito uma reserva.
*/

int main(void)
{   int Hotel[21][15];

    AndaresApartamentos(Hotel);
    opcoesHotel(Hotel);

    return 0;
}
