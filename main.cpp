#include <iostream>
#include <cstring>
#include "Carte/Carte.hpp"
using namespace CarteNamespace;

int main() {
     // Exemplu de utilizare
    Carte carte1("The Great Gatsby", "F. Scott Fitzgerald", 1952);
    Carte carte2 = carte1; // Apelul copy constructorului
    Carte carte3("The Adventures of Pinocchio", "Carlo Collodi", 1881);

    cout << "Afisare cărți existente:\n";
    cout << endl;

    carte1.afiseaza();
    carte2.afiseaza();
    carte3.afiseaza();

    cout << "Assignment operator:\n";
    cout << endl;
    carte2=carte3;
    carte2.afiseaza();
    
    return 0;
}