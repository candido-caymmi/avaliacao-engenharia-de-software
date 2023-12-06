#include <iostream>
#include <vector>
#include "../transacoes/TransacaoRecorrente.hpp"

#ifndef CONTA_HPP
#define CONTA_HPP

class Conta {
public:
    Conta() { this->saldo = 0;}
private:
    float saldo;
    std::vector<TransacaoRecorrente> transacoesRecorrentes;
};

#endif