#include "NodoCola.hpp"

NodoCola::NodoCola::NodoCola(int v, NodoCola* sig)
{
    valor = v;
    siguiente = sig;
}

NodoCola::NodoCola::~NodoCola()
{
}

