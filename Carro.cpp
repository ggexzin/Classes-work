#include "Carro.h"
#include <iostream>

using namespace std;

Carro::Carro(const char* nome, int portas) : Veiculo(nome), numeroDePortas(portas) {}

void Carro::mostrarDetalhes() const {
    cout << "Nome do Veículo: " << nome << endl;
    cout << "Tipo: Carro" << endl;
    cout << "Número de Portas: " << numeroDePortas << endl;
}
