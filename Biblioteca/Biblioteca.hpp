#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
#include <string>
using namespace std;

namespace BibliotecaNamespace
{
    class Biblioteca
    {
        private:
            string name;

        public:
            Biblioteca(const string &name);

            void setName(const string &name);

            const string &getName() const;
    };
}

#endif