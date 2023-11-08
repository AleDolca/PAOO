#include <iostream>
#include <cstring>
#include "Carte/Carte.hpp"
#include "Detalii/Detalii.hpp"
using namespace std;
using namespace Biblioteca;

int main() {
     // Exemplu de utilizare
    Carte carte1("The Great Gatsby", "F. Scott Fitzgerald", 1952);
    Carte carte2 = carte1; // Apelul copy constructorului
    Carte carte3("The Adventures of Pinocchio", "Carlo Collodi", 1881);

    cout << "Afisare cărți existente:\n";
    cout << endl;

    carte1.detaliiCarte();
    /*carte2.detaliiCarte();
    carte3.detaliiCarte();

    cout << "Assignment operator:\n";
    cout << endl;
    carte2=carte3;
    carte2.detaliiCarte();*/

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
    carte4.detaliiCarte();
    return 0;
}