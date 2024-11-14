#include "Carro.h"
#include <iostream>

Carro::Carro(const char* nome, int portas) : Veiculo(nome), numeroDePortas(portas) {}

void Carro::mostrarDetalhes() const {
    Veiculo::mostrarDetalhes();
    cout << "Tipo: Carro" << endl;
    cout << "Número de Portas: " << numeroDePortas << endl;
}
