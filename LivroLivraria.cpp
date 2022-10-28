#include <iostream>
#include "LivroLivraria.h"

using namespace std;

LivroLivraria::LivroLivraria(const string &name, const string &autor, int years, float price){
    setNome(name, autor);
    setAno(years);
    setPreco(price);
}
void LivroLivraria::comprar(){
    cout << "Livro adquirido" << endl;
}

void LivroLivraria::visualizar(){
    string n = getNome();
    string a = getAutor();
    int an = getAno();
    cout << "Nome do Livro: " << n << endl;
    cout << "Preço do autor: " << a << endl;
    cout << "Ano de lançamento: " << an << endl;
    cout << "Preço do livro: " << preco << endl;
}
void LivroLivraria::setPreco(float price){
    preco = price;
}
