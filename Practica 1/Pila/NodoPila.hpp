#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include <iostream>
using namespace std;

namespace NodoPila
{

class NodoPila
{
public:
    NodoPila(int v, NodoPila* sig = NULL);
    ~NodoPila();
private:
    int valor;
    NodoPila* siguietne;
    friend class Pila;
};

typedef NodoPila* pnodoPila;

}

#endif // NODOPILA_HPP
