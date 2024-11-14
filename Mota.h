#ifndef MOTO_H
#define MOTO_H

#include "Veiculo.h"


class Moto : public Veiculo {
private:
    const char* tipoDeGuidao;

public:
    Moto(const char* nome, const char* guidao);
    void mostrarDetalhes() const;
};

#endif
