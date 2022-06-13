#include <iostream>
#include "nodo.h"
using namespace std;
class ListaEnlazada
{
private:
    Nodo *head;
    int size;

public:
    ListaEnlazada();
    ~ListaEnlazada();
    void insertarFinal(int);
    void insertarPrincipio(int);
    void print();
};
ListaEnlazada::ListaEnlazada()
{
    head = nullptr;
    size = 0;
}
ListaEnlazada::~ListaEnlazada()
{
    Nodo *aux = head;
    while (head != nullptr)
    {
        aux = head->getNext();
        delete head;
        head = aux;
    }
}
void ListaEnlazada::insertarFinal(int _dato){
    Nodo *temp = new Nodo(_dato);
    Nodo *aux = head;
    if(head == nullptr){
        head = temp;
    }
    else{
        while (aux->getNext() != nullptr)
        {
            aux = aux->getNext();
        }
        aux->setNext(temp);
        size++;
    }
}
//Funcion Nueva Para insertar elementos al principio de la lista
void ListaEnlazada::insertarPrincipio(int _dato)
{
    Nodo *temp = new Nodo(_dato);
    Nodo *aux = head;
    if (head == nullptr)
    {
        head = temp;
    }
    else
    {
        temp->setNext(aux);
        head = temp;
    }
}
void ListaEnlazada::print()
{
    Nodo *aux = head;
    while (aux)
    {
        cout << aux->getDato() << " ";
        aux = aux->getNext();
    }
    cout<<endl;
}