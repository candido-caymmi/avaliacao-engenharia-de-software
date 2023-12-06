#include <iostream>
#include <cstdlib>
#include "usuario/GerenteUsuario.hpp"
#include "transacoes/GerenteTransacaoRecorrente.hpp"

#ifndef INTERFACE_USUARIO_HPP
#define INTERFACE_USUARIO_HPP

class InterfaceUsuario
{
private:
   GerenteUsuario gerenteUsuario;
   GerenteTransacaoRecorrente gerenteTransacaoRecorrente;

public:
   InterfaceUsuario(GerenteUsuario gerenteUsuario, GerenteTransacaoRecorrente gerenteTransacaoRecorrente)
   {
      this->gerenteUsuario = gerenteUsuario;
      this->gerenteTransacaoRecorrente = gerenteTransacaoRecorrente;
   }

   void bemVindo()
   {
      int opc;
      do
      {
         system("cls");
         std::cout << ("=========================\n");
         std::cout << ("#       Bem - Vindo     #\n");
         std::cout << ("=========================\n");
         std::cout << "1. Cadastro\n2. Login\n3. Sair\nOpcao: ";
         std::cin >> opc;
         switch (opc)
         {
         case 1:
            this->gerenteUsuario.cadastro();
            break;

         case 2:
            this->gerenteUsuario.login();
             // Verifica se o usuário está logado
            if(this->gerenteUsuario.getUsuarioAtual())
               this->menuPrincipal();
            break;

         case 3:
            std::cout << "\nSaindo...\n\n";
            break;

         default:
            std::cout << "\nPor favor, informe um numero valido!\n\n";
            system("PAUSE");
            break;
         }
      } while (opc != 3);
   }

   void menuPrincipal()
   {
      int opc;
      do
      {
         system("cls");
         std::cout << ("=========================\n");
         std::cout << ("#     Menu principal    #\n");
         std::cout << ("=========================\n");
         std::cout << "1. Cadastro de receita\\gasto\n2. Gerenciar gastos recorrentes\n3. Relatorios\n4. Logoff\n5. Sair\nOpcao: ";
         std::cin >> opc;
         switch (opc)
         {
         case 1:
            this->cadastroReceitaGasto();
            break;

         case 2:
            this->gerenciarRecorrencia();
            break;

         case 3:
            this->relatorios();
            break;

         case 4:
            this->gerenteUsuario.logoff();
            this->bemVindo();
            break;
         
         case 5:
            std::cout << "\nSaindo...\n\n";
            break;

         default:
            std::cout << "\nPor favor, informe um numero valido!\n\n";
            system("PAUSE");
            break;
         }
      } while (opc != 5);
   }

   void cadastroReceitaGasto()
   {
      int opc;
      do
      {
         system("cls");
         std::cout << ("========================================\n");
         std::cout << ("#     Cadastro de receitas e gastos    #\n");
         std::cout << ("========================================\n");
         std::cout << "1. Receita\n2. Gasto\n3. Voltar\nOpcao: ";
         std::cin >> opc;
         switch (opc)
         {
         case 1:
            // receita()
            break;

         case 2:
            // gasto()
            break;

         case 3:
            // Voltar
            break;

         default:
            std::cout << "\nPor favor, informe um numero valido!\n\n";
            system("PAUSE");
            break;
         }
      } while (opc < 1 && opc > 3);
   }

   void gerenciarRecorrencia()
   {
      int opc;
      do
      {
         system("cls");
         std::cout << ("========================================\n");
         std::cout << ("#      Gerencia gastos recorrentes     #\n");
         std::cout << ("========================================\n");
         std::cout << "1. Adicionar recorrencia\n2. Editar recorrencia\n3. Remover recorrencia\n4. Voltar\nOpcao: ";
         std::cin >> opc;
         switch (opc)
         {
         case 1:
            // adicionaRecorrencia()
            break;

         case 2:
            // editaRecorrencia()
            break;

         case 3:
            // removeRecorrencia();
            break;

         case 4:
            // Voltar
            break;

         default:
            std::cout << "\nPor favor, informe um numero valido!\n\n";
            system("PAUSE");
            break;
         }
      } while (opc < 1 && opc > 4);
   }

   void relatorios()
   {
      int opc;
      do
      {
         system("cls");
         std::cout << ("=======================\n");
         std::cout << ("#      Relatorios     #\n");
         std::cout << ("=======================\n");
         std::cout << "1. Relatorio por data\n2. Relatorio por categoria\n3. Voltar\nOpcao: ";
         std::cin >> opc;
         switch (opc)
         {
         case 1:
            // relatorioData()
            break;

         case 2:
            // relatorioCategoria()
            break;

         case 3:
            // Voltar
            break;
         
         default:
            std::cout << "\nPor favor, informe um numero valido!\n\n";
            system("PAUSE");
            break;
         }
      } while (opc < 1 && opc > 3);
   }
};

#endif