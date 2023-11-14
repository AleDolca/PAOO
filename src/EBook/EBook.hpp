#pragma once
#ifndef EBOOK_HPP
#define EBOOK_HPP

#include "Carte.hpp"
#include "Detalii.hpp"

namespace Biblioteca{

    class EBook : public Carte {
    private:
        char* limba;

    public:
        EBook(const char* titlu, const char* autor, int an_publicare, const char* limba);
        EBook(const EBook& other);
        ~EBook();
        EBook& operator=(const EBook& other);
        EBook(EBook&& other);

        // Suprascrie funcția virtuală pentru a afișa detaliile specifice cărții speciale
        void detaliiCarte() override;

        void setLimba(const char* newLimba);
        const char* getLimba() const;
    };
}

#endif