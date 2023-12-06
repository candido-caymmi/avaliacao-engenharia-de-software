#include <iostream>
#include "../conta/Conta.hpp"

#ifndef USUARIO_HPP
#define USUARIO_HPP

class Usuario {
private:
    std::string nome;
    std::string email;
    std::string senha;
    Conta conta;

public:
    Usuario(std::string nome, std::string email, std::string senha){
        this->nome = nome;
        this->email = email;
        this->senha = senha;
    }

    std::string getNome() { return this->nome; }

    std::string getEmail() { return this->email; }

    std::string getSenha() { return this->senha; }
};

#endif