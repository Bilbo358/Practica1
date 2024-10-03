#ifndef PILA_HPP
#define PILA_HPP
#include "NodoPila.hpp"
namespace Pila
{

class Pila
{
public:
    Pila();
    ~Pila();
    void insertar(int v);
    int extraer();
    int cima();
    void mostrar();
    int getLongitud();

private:
        pnodoPila ultimo;
        int longitud;

};

}

#endif // PILA_HPP
