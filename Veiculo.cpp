#include "Veiculo.h"
using namespace std;

Veiculo::Veiculo(const string* nome){}

void Veiculo::mostrarDetalhes() const {
    cout << "Nome do Veículo: " << nome << endl;
}
