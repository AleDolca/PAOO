#ifndef CARTE_HPP
#define CARTE_HPP

#include "Detalii.hpp"

namespace Biblioteca
{
    class Carte : public Detalii{
        private:
            char* titlu;
            char* autor;
            int an_publicare;

            
        public:

            // constructor
            Carte(const char* titlu, const char* autor, int an_publicare);

            // destructor
            ~Carte();

            // copy constructor
            Carte(const Carte& other);

            // assignment operator
            Carte& operator=(const Carte& other);

            // move constructor
            Carte(Carte&& other);

            // metoda pentru afișarea detaliilor unei cărți
            void detaliiCarte() override;

            // setters
            void setTitlu(const char* newTitlu);
            void setAutor(const char* newAutor);
            void setAnPublicare(int newAnPublicare);

            // getters
            const char* getTitlu();
            const char* getAutor();
            int getAnPublicare();
    };
}

#endif
