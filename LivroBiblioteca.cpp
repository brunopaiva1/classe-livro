#include <iostream>
#include "LivroBiblioteca.h"
#include "Livro.h"

using namespace std;

void LivroBiblioteca::emprestimo(){
    int x;

    cout << "Confirme o emprestimo: " <<endl;
    cin >> x;
    if(x != 0){
    cout << "Emprestimo válido" << endl;
    }else{
        cout << "Emprestimo invalido" << endl;
    }
}
