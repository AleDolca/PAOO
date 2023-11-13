#ifndef EBOOK_HPP
#define EBOOK_HPP
#include <iostream>
#include <cstring>
#include "../Carte/Carte.hpp"

namespace CarteNamespace{

    class EBook : public Carte {
    private:
        char* limba;

    public:
        EBook(const char* titlu, const char* autor, int an_publicare, char* limba);
        ~EBook();
        EBook(const EBook& other);
        EBook& operator=(const EBook& other);
        EBook(EBook&& other);

        // Suprascrie funcția virtuală pentru a afișa detaliile specifice cărții speciale
        void detaliiCarte() const override;

        void setLimba(const char* newLimba);
        const char* getLimba() const;
    };
}

#endif