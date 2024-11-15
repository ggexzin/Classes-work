#include "Carro.h"

void Carro::mostrarDetalhes() {
    Veiculo::mostrarDetalhes();
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
