#ifndef CARTE_HPP
#define CARTE_HPP
#include <iostream>
#include <cstring>

using namespace std;

namespace CarteNamespace
{
    class Carte {
        private:
            char* titlu;
            char* autor;
            int an_publicare;

            
        public:
            Carte(const char* titlu, const char* autor, int an_publicare);
            Carte(const Carte& other);
            Carte& operator=(const Carte& other);
            ~Carte();
            void afiseaza() const;
    };
}

#endif
