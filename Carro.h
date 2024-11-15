#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"

class Carro : public Veiculo {
    private:
        //atributos do carro
        int numeroDePortas;
        int cavalos;
        string cor;
        float preco;
        string vendedor;
        string marca;
        string matricula;
    
    public:
        //construtor
        Carro(string nome, int portas, int cavalos, string cor, float preco, //recebe o q tem no veiculo e herda o resta das variaveis
              string vendedor, string marca, string matricula) : Veiculo(nome), numeroDePortas(numeroDePortas), cavalos(cavalos), cor(cor), preco(preco), 
            vendedor(vendedor), marca(marca), matricula(matricula){}
        void mostrarDetalhes() override;
};

#endif 
