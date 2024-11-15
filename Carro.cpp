#include "Carro.h"
#include <iostream>

using namespace std;

Carro::Carro(char* nome, int portas, int cavalos, string cor, float preco, 
             string vendedor, string marca, string matricula)
    : Veiculo(nome), numeroDePortas(portas), cavalos(cavalos), cor(cor), preco(preco), 
      vendedor(vendedor), marca(marca), matricula(matricula) {}

void Carro::mostrarDetalhes() {
    cout << "Nome do Veículo: " << nome << endl;
    cout << "Tipo: Carro" << endl;
    cout << "Número de Portas: " << numeroDePortas << endl;
    cout << "Cavalos: " << cavalos << endl;
    cout << "Cor: " << cor << endl;
    cout << "Preço: " << preco << endl;
    cout << "Vendedor: " << vendedor << endl;
    cout << "Marca: " << marca << endl;
    cout << "Matrícula: " << matricula << endl;
    cout << endl;
}
