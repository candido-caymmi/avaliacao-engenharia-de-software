
#include <iostream>
#include "classes/InterfaceUsuario.hpp"
#include "classes/usuario/GerenteUsuario.hpp"
#include "classes/transacoes/GerenteTransacaoRecorrente.hpp"

int main()
{
    GerenteUsuario gerenteUsuario;
    GerenteTransacaoRecorrente gerenteTransacaoRecorrente;

    InterfaceUsuario interfaceUsuario(
        gerenteUsuario,
        gerenteTransacaoRecorrente
    );

    // Ponto de entrada do programa
    interfaceUsuario.bemVindo();

    return 0;
}
