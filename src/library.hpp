#ifndef LIBRARY_HPP
#define LIBRARY_HPP

namespace carte{
    class Carte {
        public:
            Carte(const char* titlu, const char* autor, int an_publicare);
            Carte(const Carte& other);
            Carte& operator=(const Carte& other);
            ~Carte();
            void afiseaza() const;

    };
}

#endif // LIBRARY_HPP