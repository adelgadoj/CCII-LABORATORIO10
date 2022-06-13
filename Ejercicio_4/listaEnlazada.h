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
    void insertarEnMedio(int, int);
    void removeUltimo();
    int getSize();
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
        
    }
    size++;
}
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
    size++;
}
void ListaEnlazada::insertarEnMedio(int _dato, int _pos)
{
    Nodo *temp = new Nodo(_dato);
    Nodo *aux = head;
    if(head == nullptr)
    {
        head = temp;
    }
    else{
        for(int i = 1 ; i <= _pos ; i++){
            if(i == _pos){
                temp->setNext(aux->getNext());
                aux->setNext(temp);
            }
            aux = aux->getNext();
        }
    }
    size++;
}
void ListaEnlazada::removeUltimo()
{
    Nodo *aux = head;
    if (head == nullptr)
    {
        cout<<"##Lista vacia##"<<endl;
        system("pause");
        return;
    }
    else
    {
        Nodo *aux = head;
        int cont = 0;
        while (cont != size - 2)
        {
                aux = aux->getNext();
                cont++;
        }
        delete aux->getNext();
        aux->setNext(nullptr);
        size--;
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
int ListaEnlazada::getSize()
{
    return size;
}
