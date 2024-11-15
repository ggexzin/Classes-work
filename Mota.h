#ifndef MOTA_H
#define MOTA_H

#include "Veiculo.h"

class Mota : public Veiculo {
private:
    //atributos da mota
    int celindrada;
    string cor;
    float preco;
    string vendedor;
    string marca;
    string matricula;

public:
    //construtor
    Mota(string nome, int celindrada, string cor, float preco, //recebe o q tem no veiculo e herda o resta das variaveis
         string vendedor, string marca, string matricula) : Veiculo(nome), celindrada(celindrada), cor(cor), preco(preco), 
        vendedor(vendedor), marca(marca), matricula(matricula){};
    void mostrarDetalhes() override;
};

#endif 
