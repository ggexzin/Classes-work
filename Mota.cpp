#include "Mota.h"
#include <iostream>

using namespace std;

Moto::Moto(const char* nome, const char* guidao) : Veiculo(nome), tipoDeGuidao(guidao) {}

void Moto::mostrarDetalhes() const {
    cout << "Nome do Veículo: " << nome << endl;
    cout << "Tipo: Moto" << endl;
    cout << "Tipo de Guidão: " << tipoDeGuidao << endl;
}
