#ifndef LIVROLIVRARIA_H
#define LIVROLIVRARIA_H
#include "Livro.h"
#include <iostream>

using namespace std;
class LivroLivraria : public Livro
{
    private:
    float preco;

    public:
    LivroLivraria(const string &name, const string &autor, int years, float price);
    void comprar();
    virtual void visualizar();
    void setPreco(float price);
};

#endif // LivroLivraria