#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
using namespace std;

class Veiculo {
    private:
        string nome;

    public:
        Veiculo(string nome);
        virtual void mostrarDetalhes();
};

#endif 
