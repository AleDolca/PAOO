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

    /*cout << "Afisare cărți existente:\n";
    cout << endl;

    carte1.afiseaza();
    carte2.afiseaza();
    carte3.afiseaza();

    cout << "Assignment operator:\n";
    cout << endl;
    carte2=carte3;
    carte2.afiseaza();*/

    cout << "Exemplificare set:\n";
    Carte carte4("Moby Dick", "Herman Melville", 1851);
    carte4.detaliiCarte();
    carte4.setTitlu("Noul Titlu");
    carte4.setAutor("Noul Autor");
    carte4.detaliiCarte();

    cout << "Exemplificare get:\n";
    cout << "Cartea " << carte1.getTitlu() << " are autorul " << carte1.getAutor()<< endl;
    cout << endl;

    cout << "Exemplificare move constructor:\n";
    Carte temp("Robinson Crusoe", "Daniel Defoe", 1719);
    Carte carte5(move(temp));
    carte5.detaliiCarte();
    return 0;
}