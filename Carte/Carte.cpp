#include "Carte.hpp"
using namespace CarteNamespace;

// Constructor care inițializează membrii
Carte::Carte(const char* titlu, const char* autor, int an_publicare) {
    this->titlu = new char[strlen(titlu) + 1];
    strcpy(this->titlu, titlu);

    this->autor = new char[strlen(autor) + 1];
    strcpy(this->autor, autor);

    this->an_publicare = an_publicare;
}

// Destructor pentru eliberarea heap-ului: eliberează memoria alocată dinamic pentru 'titlu' și 'autor'
Carte::~Carte() {
    delete[] titlu;
    delete[] autor;
}

// Copy constructor pentru a evita shallow copy (copierea structurii obiectului, în care doar referințele sunt copiate în noul obiect, fără a copia efectiv datele în sine)
Carte::Carte(const Carte& other) {
    this->titlu = new char[strlen(other.titlu) + 1];
    strcpy(this->titlu, other.titlu);

    this->autor = new char[strlen(other.autor) + 1];
    strcpy(this->autor, other.autor);

    this->an_publicare = other.an_publicare;
}

// Assignment operator: copiaza datele unui obiect existent intr-un alt obiect existent 
Carte& Carte::operator=(const Carte& other) {
    if (this == &other) {
        return *this; // Self-assignment 
    }

    delete[] titlu;
    delete[] autor;

    this->titlu = new char[strlen(other.titlu) + 1];
    strcpy(this->titlu, other.titlu);

    this->autor = new char[strlen(other.autor) + 1];
    strcpy(this->autor, other.autor);

    this->an_publicare = other.an_publicare;

    return *this;
}

// Funcție pentru afișarea informațiilor cărții
void Carte::afiseaza() const{
    cout << "Titlu: " << titlu << endl;
    cout << "Autor: " << autor << endl;
    cout << "An publicare: " << an_publicare << endl;
    cout << endl;
}




