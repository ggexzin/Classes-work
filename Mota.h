#ifndef MOTA_H
#define MOTA_H

#include "Veiculo.h"

class Mota : public Veiculo {
private:
    int celindrada;
    string cor;
    float preco;
    string vendedor;
    string marca;
    string matricula;

public:
    Mota(string nome, int celindrada, string cor, float preco, 
         string vendedor, string marca, string matricula);
    void mostrarDetalhes() override;
};

#endif 
