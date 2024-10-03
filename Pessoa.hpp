#include <stdio.h>
#include <string.h>

class Pessoa {
private:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nome[300];

public:
	Pessoa(int diaNa, int mesNa, int anoNa, const char* nomeNa);
	void Calc_idade(int diaAt, int mesAt, int anoAt);
	int informaIdade(); // devido ao status de privado, ele é necessário
	void imprime();
};