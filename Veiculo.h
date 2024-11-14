#ifndef VEICULO_H
#define VEICULO_H

class Veiculo {
protected:
    const char* nome;

public:
    Veiculo(const char* nome);
    void mostrarDetalhes() const;
};

#endif 
