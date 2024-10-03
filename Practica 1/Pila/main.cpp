#include <Pila.hpp>

int main(int argc, char **argv)
{
    Pila pila;
    
    Pila.insertar(1);
    Pila.insertar(2);
    Pila.insertar(3);
    Pila.insertar(4);
    Pila.mostrar();
    
    int cima = Pila.cima();
    Pila.extraer();
    cout << "\tDespues de extraer la cima(" << cima << ")..." << endl;
    Pila.mostrar();
    
    Pila.insertar(5);
    Pila.mostrar();
    Pila.extraer();
    Pila.mostrar();
    Pila.extraer();
    Pila.mostrar();
    Pila.extraer();
    Pila.mostrar();
    Pila.extraer();
    Pila.mostrar();
    
    return 0;
}
