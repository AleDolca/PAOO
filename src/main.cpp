#include "library.hpp"
#include <iostream>
#include <cstring>

class Carte {
    private:
        char* titlu;
        char* autor;
        int an_publicare;

    public:
        // Constructor care inițializează membrii
        Carte(const char* titlu, const char* autor, int an_publicare) {
            this->titlu = new char[strlen(titlu) + 1];
            strcpy(this->titlu, titlu);

            this->autor = new char[strlen(autor) + 1];
            strcpy(this->autor, autor);

            this->an_publicare = an_publicare;
        }

        // Destructor pentru eliberarea heap-ului: eliberează memoria alocată dinamic pentru 'titlu' și 'autor'
        ~Carte() {
            delete[] titlu;
            delete[] autor;
        }

        // Copy constructor pentru a evita shallow copy (copierea structurii obiectului, în care doar referințele sunt copiate în noul obiect, fără a copia efectiv datele în sine)
        Carte(const Carte& other) {
            this->titlu = new char[strlen(other.titlu) + 1];
            strcpy(this->titlu, other.titlu);

            this->autor = new char[strlen(other.autor) + 1];
            strcpy(this->autor, other.autor);

            this->an_publicare = other.an_publicare;
        }

        // Assignment operator: copiaza datele unui obiect existent intr-un alt obiect existent 
        Carte& operator=(const Carte& other) {
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
        void afiseaza() const{
            std::cout << "Titlu: " << titlu << std::endl;
            std::cout << "Autor: " << autor << std::endl;
            std::cout << "An publicare: " << an_publicare << std::endl;
            std::cout << std::endl;
        }
};


int main() {
     // Exemplu de utilizare
    Carte carte1("The Great Gatsby", "F. Scott Fitzgerald", 1952);
    Carte carte2 = carte1; // Apelul copy constructorului
    Carte carte3("The Adventures of Pinocchio", "Carlo Collodi", 1881);

    std::cout << "Afisare cărți existente:\n";
    std::cout << std::endl;

    carte1.afiseaza();
    carte2.afiseaza();
    carte3.afiseaza();

    std::cout << "Assignment operator:\n";
    std::cout << std::endl;
    carte2=carte3;
    carte2.afiseaza();
    
    return 0;
}


