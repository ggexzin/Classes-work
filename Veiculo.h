#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
using namespace std;

class Veiculo {
private:
    const string* nome;

public:
    Veiculo(const string* nome);
    void mostrarDetalhes();
};

#endif 
