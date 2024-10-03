#include "Pessoa.hpp"

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nomeNa) {
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    idadeP = -1;
    strcpy(nome, nomeNa);
}

void Pessoa::Calc_idade(int diaAt, int mesAt, int anoAt) {
    idadeP = anoAt - anoP;
    if (mesP > mesAt)
        idadeP = idadeP - 1;
    else {
        if (mesP == mesAt) {
            if (diaP > diaAt)
                idadeP = idadeP - 1;
        }
    }
}

int Pessoa::informaIdade() { return idadeP; }

void Pessoa::imprime() { printf("A idade de %s seria %d\n", nome, idadeP); }