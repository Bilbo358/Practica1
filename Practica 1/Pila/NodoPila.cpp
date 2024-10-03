#include "NodoPila.hpp"

NodoPila::NodoPila::NodoPila(int v, NodoPila* sig)
{
    valor = v;
    siguiente = sig;
}

NodoPila::NodoPila::~NodoPila()
{
}

  