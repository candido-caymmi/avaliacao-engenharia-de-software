#include <iostream>

#ifndef TRANSACAO_RECORRENTE_HPP
#define TRANSACAO_RECORRENTE_HPP

class TransacaoRecorrente {
private:
    float valor;
    std::string categoria;
    std::string data;
    std::string descricao;
public:
    void setValor(float valor) { this->valor = valor;}

    void setCategoria(std::string categoria) { this->categoria = categoria;}

    void setData(std::string data) { this->data = data;}

    void setDescricao(std::string descricao) { this->descricao = descricao;}
};

#endif