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
         string vendedor, string marca, string matricula) : Veiculo(nome), celindrada(celindrada), cor(cor), preco(preco), 
        vendedor(vendedor), marca(marca), matricula(matricula){};
    void mostrarDetalhes() override;
};

#endif 
