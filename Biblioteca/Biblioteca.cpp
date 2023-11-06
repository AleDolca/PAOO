#include "Biblioteca.hpp"
using namespace std;
using namespace BibliotecaNamespace;

Biblioteca::Biblioteca(const string &name) : name(name){};

void Biblioteca::setName(const string &name)
{
    this->name = name;
}

const string &Biblioteca::getName() const
{
    return name;
}