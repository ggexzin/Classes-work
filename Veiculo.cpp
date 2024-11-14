#include "Veiculo.h"
#include <iostream>

using namespace std;

Veiculo::Veiculo(const char* nome) : nome(nome) {}

void Veiculo::mostrarDetalhes() const {
    cout << "Nome do Veículo: " << nome << endl;
}
