// Escreva as classes LivroLivraria e LivroBiblioteca que herdam da classe 
// Livro. Quais as diferenças entre as duas classes, e que campos elas têm em comum? Defina os 
// atributos de cada classe e escreva um aplicativo de teste que demonstre o uso das classes
//  criadas.

#ifndef LIVRO_H
#define LIVRO_H
#include <iostream>

using namespace std;

class Livro{
    private:
    string nomeLivro;
    string nomeAutor;
    int ano; //ano de lançamento
    
    public:
    Livro(const string &name, const string &autor, int years);
    Livro();
    void setNome(const string &nome, const string &autor);
    void setAno(int year);
    string getNome();
    string getAutor();
    int getAno();

    virtual void visualizar();
};


#endif //LIVRO_H