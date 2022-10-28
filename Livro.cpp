// Escreva as classes LivroLivraria e LivroBiblioteca que herdam da classe 
// Livro. Quais as diferenças entre as duas classes, e que campos elas têm em comum? Defina os 
// atributos de cada classe e escreva um aplicativo de teste que demonstre o uso das classes
//  criadas.

#include <iostream>
#include "Livro.h"

using namespace std;

Livro::Livro(const string &name, const string &autor, int years){
    setNome(name, autor);
    setAno(years);
}

Livro::Livro(){

}
void Livro::setNome(const string &nome, const string &autor){
    nomeLivro = nome;
    nomeAutor = autor;
}

void Livro::setAno(int year){
    ano = year;
}

string Livro::getNome(){
    return nomeLivro;
}

string Livro::getAutor(){
    return nomeAutor;
}

int Livro::getAno(){
    return ano;
}

void Livro::visualizar(){
    cout << "nome do livro: " << nomeLivro << endl;
    cout << "nome do autor: " << nomeAutor << endl;
    cout << "ano de lançamento: " << ano << endl;
}