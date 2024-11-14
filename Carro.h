#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"

class Carro : public Veiculo {
private:
    int numeroDePortas;

public:
    Carro(const char* nome, int portas);
    void mostrarDetalhes() const;
};

#endif 
