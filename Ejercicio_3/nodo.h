#include <iostream>
class Nodo
{
private:
    int dato;
    Nodo *next;

public:
    Nodo(int);
    int getDato();
    void setDato(int);
    Nodo *getNext();
    void setNext(Nodo *);
};
Nodo::Nodo(int _dato)
{
    dato = _dato;
    next = nullptr;
}
int Nodo::getDato()
{
    return dato;
}

void Nodo::setDato(int _dato)
{
    dato = _dato;
}

Nodo *Nodo::getNext()
{
    return next;
}
void Nodo::setNext(Nodo *_next)
{
    next = _next;
}