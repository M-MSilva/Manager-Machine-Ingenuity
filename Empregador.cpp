#include <iostream>
#include <string>
using namespace std;
#include "Pessoa.h"
#include "Empregador.h"

//Empregador.cpp
Empregador::Empregador(const string &n, int i , const string &c):Pessoa (n, i), cpf(c)
{
}
Empregador::~Empregador(void)
{
	cout << "Destruction" << endl;
}
string Empregador::getCpf() const
{
	return cpf;
}
void Empregador::imprime() const
{   
      cout << "\n------------Epregador--------------";
	  cout << "\nNome: " << getNome() << "\nIdade:  " << getIdade() << "\nCPF: "<<   cpf ;  
	  cout << "\n-----------------------------------";
}
