#include "Carro.h"
#include "Moto.h"
#include <iostream>
using namespace std;

int main() {
    Carro carro("Toyota Corolla", 4);
    Moto moto("Honda CG", "Esportivo");

    cout << "Detalhes do Carro:" << endl;
    carro.mostrarDetalhes();

    cout << "\nDetalhes da Moto:" << endl;
    moto.mostrarDetalhes();

    return 0;
}
