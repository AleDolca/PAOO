#include "EBook.hpp"
#include "../Carte/Carte.cpp"
using namespace CarteNamespace;

//constructor
EBook::EBook(const char* titlu, const char* autor, int an_publicare, const char* limba) : CarteNamespace::Carte(titlu, autor, an_publicare){
    this->limba = new char[strlen(limba) + 1];
    strcpy(this->limba, limba);
}

//destructor
EBook::~EBook() {
    delete[] limba;
}

//copy constructor
EBook::EBook(const EBook& other) {
    this->titlu = new char[strlen(other.titlu) + 1];
    strcpy(this->titlu, other.titlu);

    this->autor = new char[strlen(other.autor) + 1];
    strcpy(this->autor, other.autor);

    this->an_publicare = other.an_publicare;

    this.limba = new char[strlen(other.limba) + 1];
    strcpy(this->limba, other.limba);
}

//assignment operator
EBook& EBook::operator=(const EBook& other) {
    if (this == &other) {
        return *this; // Self-assignment 
    }

    delete[] titlu;
    delete[] autor;
    delete[] limba;

    this->titlu = new char[strlen(other.titlu) + 1];
    strcpy(this->titlu, other.titlu);

    this->autor = new char[strlen(other.autor) + 1];
    strcpy(this->autor, other.autor);

    this->an_publicare = other.an_publicare;

    this.limba = new char[strlen(other.limba) + 1];
    strcpy(this->limba, other.limba);

    return *this;
}

//move constructor
EBook::EBook(Ebook&& other) { 
    cout << "Move Constructor called" << endl;
    titlu = other.titlu;
    autor = other.autor;
    an_publicare = other.an_publicare;
    limba = other.limba;

    other.titlu = nullptr; // pentru a evita ca destructorul obiectului other să elibereze aceleași resurse
    other.autor = nullptr;
    other.an_publicare = nullptr;
    other.limba = nullptr;
}

//funcție pentru afișarea informațiilor cărții
void EBook::detaliiCarte() const{
    cout << "Titlu: " << titlu << endl;
    cout << "Autor: " << autor << endl;
    cout << "An publicare: " << an_publicare << endl;
    cout << "Limba: " << limba << endl;
    cout << endl;
}

void EBook::setLimba(const char* newLimba) {
    delete[] limba;
    limba = new char[strlen(newLimba) + 1];
    strcpy(limba, newLimba);
}

const char* EBook::getLimba() const {
    return limba;
}