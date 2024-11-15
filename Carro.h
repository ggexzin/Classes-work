#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"

class Carro : public Veiculo {
private:
    int numeroDePortas;
    int cavalos;
    string cor;
    float preco;
    string vendedor;
    string marca;
    string matricula;

public:
    Carro(string nome, int portas, int cavalos, string cor, float preco, 
          string vendedor, string marca, string matricula);
    void mostrarDetalhes() override;
};

#endif 
