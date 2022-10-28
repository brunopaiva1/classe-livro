#include <iostream>
#include "Livro.h"
#include "LivroLivraria.h"
#include "LivroBiblioteca.h"

using namespace std;

int main(){
Livro a("Programação em c++", "Aguilar", 2008);
LivroLivraria b("programação em c++", "Aguilar", 2008, 655);
LivroBiblioteca c;

a.visualizar();
b.visualizar();
b.comprar();
c.emprestimo();


}