#include "Usuario.hpp"
#include <vector>

#ifndef GERENTE_USUARIO_HPP
#define GERENTE_USUARIO_HPP

class GerenteUsuario
{
public:
    GerenteUsuario() { this->usuarioAtual = NULL; }

private:
    std::vector<Usuario> usuarios;
    Usuario *usuarioAtual;

    bool autenticaUsuario(std::string nome, std::string senha)
    {
        for (Usuario usuario : this->usuarios)
            if (nome == usuario.getNome() && senha == usuario.getSenha())
            {
                this->usuarioAtual = &usuario;
                return true;
            }
        return false;
    }

public:
    void cadastro()
    {
        std::string nome, email, senha;

        system("cls");
        std::cout << ("=================\n");
        std::cout << ("#    Cadastro   #\n");
        std::cout << ("=================\n");
        std::cout << "Digite o nome do usuario: ";
        std::cin >> nome;
        std::cout << "Digite o email do usuario: ";
        std::cin >> email;
        std::cout << "Digite a senha: ";
        std::cin >> senha;

        Usuario novoUsuario(nome, email, senha);
        this->usuarios.push_back(novoUsuario);
    }

    void login()
    {
        std::string nome, senha;
        bool autenticado = false;

        system("cls");
        std::cout << ("=================\n");
        std::cout << ("#     Login     #\n");
        std::cout << ("=================\n");
        std::cout << "Digite o nome do usuario: ";
        std::cin >> nome;
        std::cout << "Digite a senha: ";
        std::cin >> senha;

        autenticado = this->autenticaUsuario(nome, senha);

        if (!autenticado)
        {
            std::cout << "\nNome do usuario ou senha incorretos!\n\n";
            system("PAUSE");
        }
    }

    Usuario *getUsuarioAtual() { return this->usuarioAtual; }

    void logoff() { this->usuarioAtual = NULL; }
};

#endif