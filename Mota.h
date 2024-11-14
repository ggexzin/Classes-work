#ifndef MOTA_H
#define MOTA_H

#include "Veiculo.h"
#include <string>

class Mota : public Veiculo {
private:
    int celindrada;
    string cor;
    float preco;
    string vendedor;
    string marca;
    string matricula;

public:
    Mota(const char* nome, int celindrada, const string& cor, float preco, 
          const string& vendedor, const string& marca, const string& matricula);
    void mostrarDetalhes() const;
};

#endif 
