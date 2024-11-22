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
              string vendedor, string marca, string matricula) : Veiculo(nome), numeroDePortas(numeroDePortas), cavalos(cavalos), cor(cor), preco(preco), //isso aqui tá atribuindo o valor do parametro do contrutor ao atributo
            vendedor(vendedor), marca(marca), matricula(matricula){}
        void mostrarDetalhes() override; //a classe ta a dar override no metodo
};

#endif 
