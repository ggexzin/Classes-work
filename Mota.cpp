#include "Mota.h"


void Mota::mostrarDetalhes() {
    Veiculo::mostrarDetalhes();
    cout << "Tipo: Mota" << endl;
    cout << "Celindrada: " << celindrada << endl;
    cout << "Cor: " << cor << endl;
    cout << "Preço: " << preco << endl;
    cout << "Vendedor: " << vendedor << endl;
    cout << "Marca: " << marca << endl;
    cout << "Matrícula: " << matricula << endl;
}
