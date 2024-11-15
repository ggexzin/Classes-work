#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"
#include <string>

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
    Carro(const char* nome, int portas, int cavalos, const string& cor, float preco, 
          const string& vendedor, const string& marca, const string& matricula);
    void mostrarDetalhes();
};

#endif 
