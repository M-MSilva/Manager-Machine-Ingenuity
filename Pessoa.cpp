#include <iostream>
#include <string>
using namespace std;
#include "Pessoa.h"

Pessoa::Pessoa(const string &n, int i):nome(n), idade(i)
{
}

Pessoa::~Pessoa(void)
{
	cout << "Destruction" << endl;
}

void Pessoa::setNome(const string &n)
{
	nome = n;
}
string Pessoa::getNome() const
{
	return nome;
}
void Pessoa::setIdade(int i)
{
	idade = i;
}
int Pessoa::getIdade() const
{
	return idade;
}
void Pessoa::imprime() const
{
	    cout << "\nNome: " << nome << "\nIdade: " << idade << endl;    
}
