#include <iostream>
#include <cstring>
#include "Carte/Carte.hpp"
#include "Detalii/Detalii.hpp"
#include "EBook/EBook.hpp"
#include "Colectie/Colectie.hpp"
using namespace std;
using namespace Biblioteca;

int main() {
     // Exemplu de utilizare
    /*Carte carte1("The Great Gatsby", "F. Scott Fitzgerald", 1952);
    Carte carte2 = carte1; // Apelul copy constructorului
    Carte carte3("The Adventures of Pinocchio", "Carlo Collodi", 1881);

    cout << "Afisare cărți existente:\n";
    cout << endl;

    carte1.detaliiCarte();
    carte2.detaliiCarte();
    carte3.detaliiCarte();

    cout << "Assignment operator:\n";
    cout << endl;
    carte2=carte3;
    carte2.detaliiCarte();

    cout << "Exemplificare set:\n";
    carte1.setTitlu("Noul Titlu");
    carte1.setAutor("Noul Autor");
    carte1.detaliiCarte();

    cout << "Exemplificare get:\n";
    cout << "Cartea " << carte3.getTitlu() << " are autorul " << carte3.getAutor()<< endl;
    cout << endl;

    cout << "Exemplificare move constructor:\n";
    Carte temp("Robinson Crusoe", "Daniel Defoe", 1719);
    Carte carte4(move(temp));
    temp.detaliiCarte();
    carte4.detaliiCarte();

    EBook ebook1("Robinson Crusoe", "Daniel Defoe", 1719, "romana");
    ebook1.detaliiCarte();*/

    
    Colectie<Carte> biblioteca;

    unique_ptr<Carte> carte1 = make_unique<Carte>("Titlu1", "Autor1", 2020);
    biblioteca.adaugaCarte(shared_ptr<Carte>(move(carte1)));  //adaugaCarte() asteapta un shared pointer
    //se face o mutare a resurselor din carte1 către shared_ptr pe care îl primește adaugaCarte
    //carte1 nu mai detine resursele, ci shared_ptr le detine

    shared_ptr<Carte> carte2 = make_shared<Carte>("Titlu2", "Autor2", 2021);
    biblioteca.adaugaCarte(carte2);

    shared_ptr<Carte> carte3 = carte2; //// Împărtășește resursa cu un alt smart pointer
    biblioteca.adaugaCarte(carte3);

    shared_ptr<EBook> ebook1 = make_shared<EBook>("Titlu3", "Autor3", 2001, "romana");
    biblioteca.adaugaCarte(ebook1);

    biblioteca.afisareColectie();

    // Afisare perioada aparitie
    for (const auto& carte : biblioteca.getColectieCarti()) {  //auto: deduce tipul variabilei
        afisareDetaliiCarte(*carte);
    }


    return 0;
}