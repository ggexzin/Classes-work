#include "Mota.h"
#include <iostream>

using namespace std;

Mota::Mota(const char* nome, int celindrada, const string& cor, float preco, 
             const string& vendedor, const string& marca, const string& matricula)
    : Veiculo(nome), celindrada(celindrada), cor(cor), preco(preco), 
      vendedor(vendedor), marca(marca), matricula(matricula) {}

void Mota::mostrarDetalhes() const {
    cout << "Nome do Veículo: " << nome << endl;
    cout << "Tipo: Mota" << endl;
    cout << "Celindrada: " << celindrada << endl;
    cout << "Cor: " << cor << endl;
    cout << "Preço: " << preco << endl;
    cout << "Vendedor: " << vendedor << endl;
    cout << "Marca: " << marca << endl;
    cout << "Matrícula: " << matricula << endl;
}
