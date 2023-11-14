#ifndef COLECTIE_HPP
#define COLECTIE_HPP

#include <iostream>
#include <cstring>
#include <string>
#include <memory>
#include <vector>
using namespace std;

namespace Biblioteca {

    template<typename BookType>
        class Colectie {
        private:
            vector<shared_ptr<BookType>> colectieCarti;

        public:
            void adaugaCarte(shared_ptr<BookType> carte) {
                colectieCarti.push_back(carte);
            } 

            void afisareColectie(){
                for(const auto& carte : colectieCarti){
                    cout << "Titlu: " << carte->getTitlu()<< endl;
                    cout << "Autor: " << carte->getAutor()<< endl;
                    cout << "An publicare: " << carte->getAnPublicare()<< endl;
                    cout << endl;
                }
            }

            const vector<shared_ptr<BookType>>& getColectieCarti() const {
                return colectieCarti;
        }
    };

        
    template<typename BookType>
    void afisareDetaliiCarte(BookType& carte) {
        cout << "Cartea " << carte.getTitlu() << " a aparut acum " << (2023 - carte.getAnPublicare()) << " ani" << endl;
        cout << endl;

    }

} 

#endif 