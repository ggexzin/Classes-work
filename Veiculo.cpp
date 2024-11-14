#include "Veiculo.h"
#include <iostream>

Veiculo::Veiculo(const char* nome) : nome(nome) {}

void Veiculo::mostrarDetalhes() const {
    cout << "Nome do Veículo: " << nome << endl;
}
