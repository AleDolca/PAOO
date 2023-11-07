#include "Carte.hpp"
#include <iostream>
#include <cstring>
using namespace std;

namespace Biblioteca{

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

    // Move constructor
    Carte::Carte(Carte&& other){
        cout << "Move Constructor apelat" << endl;
        this->titlu = move(other.titlu);
        this->autor = move(other.autor);
        this->an_publicare = other.an_publicare;

        other.titlu = nullptr;
        other.autor = nullptr;
        other.an_publicare = 0;
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
    void Carte::detaliiCarte() {
        cout << "Titlu: " << titlu << endl;
        cout << "Autor: " << autor << endl;
        cout << "An publicare: " << an_publicare << endl;
        cout << endl;
    }

        //seters
        void Carte::setTitlu(const char* newTitlu) {
            delete[] titlu; // Eliberăm memoria veche (dacă există)
            titlu = new char[strlen(newTitlu) + 1];
            strcpy(titlu, newTitlu);
        }

        void Carte::setAutor(const char* newAutor) {
            delete[] autor;
            autor = new char[strlen(newAutor) + 1];
            strcpy(autor, newAutor);
        }

        void Carte::setAnPublicare(int newAnPublicare) {
            an_publicare = newAnPublicare; 
        }


        //getters
        const char* Carte::getTitlu() const {
            return titlu;
        }

        const char* Carte::getAutor() const {
            return autor;
        }

        int Carte::getAnPublicare() const {
            return an_publicare;
        }
}

