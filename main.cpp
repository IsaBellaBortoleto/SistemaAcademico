#include "Pessoa.hpp"

int main(void) {
	Pessoa Einstein(14, 3, 1879, "Einstein");
	Pessoa Newton(4, 1, 1643, "Newton");

	Einstein.Calc_idade(2, 10, 2024);
	Newton.Calc_idade(2, 10, 2024);

	// imprime o nome e idade
	Einstein.imprime();
	Newton.imprime();

	getchar();
	return 0;
}