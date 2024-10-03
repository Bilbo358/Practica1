#include "Pila.hpp"

Pila::Pila::Pila()
{
    ultimo = NULL;
    longitud = 0;
}
void Pila::Pila::insertar(int v)
{
    pnodoPila nuevo;
    nuevo = new NodoPila(v, ultimo);
    ultimo = nuevo;
    longitud++;
}
int Pila::Pila::extraer()
{
    pnodoPila nodo;
    int v;
    if(!ultimo)
        return 0;
    nodo = ultimo;
    ultimo = nodo ->siguiente;
    v = nodo -> valor;
    longitud--;
    delete nodo;
    return v;
}
int Pila::Pila::cima()
{
    pnodoPila nodo;
    if(!ultimo)
        return 0;
    return ultimo ->valor;
}
void Pila::Pila::mostrar()
{
    pnodoPila aux = ultimo;
    cout << "\tEl contenido de la pila es: ";
    while (aux){
        cout << "-> " << aux -> valor;
        aux = aux -> siguiente;
    }
    cout << endl;
}
int Pila::Pila::getLongitud()
{
    return this ->longitud;
}
Pila::Pila::~Pila()
{
    pnodoPila aux;
    while(ultimo){
        aux = ultimo;
        ultimo = ultimo -> siguiente;
        delete aux;
    }
}

