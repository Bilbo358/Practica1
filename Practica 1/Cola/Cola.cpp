#include "Cola.hpp"

Cola::Cola::Cola()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

void Cola::Cola::insertar(int v)
{
    pnodoCola nuevo;
    nuevo = new NodoCola(v);
    if(ultimo)
        ultimo ->siguiente = nuevo;
    
    ultimo = nuevo;
    
    if(!primero)
        primero = nuevo;
    longitud++;
}
void Cola::Cola::mostrar()
{
    pnodoCola aux = primero;
    cout << "\tEl contenido de la cola es: ";
    while(aux){
        cout << "-> " << aux -> valor;
        aux = aux -> siguiente;
    }
    cout << endl;
}
int Cola::Cola::eliminar()
{
    pnodoCola nodo;
    int v;
    nodo = primero;
    if(!nodo)
        return 0;
    primero = nodo ->siguiente;
    v = nodo -> valor;
    delete nodo;
    if(!primero)
        ultimo = NULL;
    longitud--;
    return v;
}
int Cola::Cola::verPrimero(){
    return primero ->valor;
}
Cola::Cola::~Cola()
{
    while(primero)
        eliminar();
}

