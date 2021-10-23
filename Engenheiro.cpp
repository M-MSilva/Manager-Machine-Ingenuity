#include <iostream>
#include <string>
using namespace std;
#include "Pessoa.h"
#include "Empregador.h"
#include "Engenheiro.h"

Engenheiro::Engenheiro(const string &n , int i,  const string &na, const string &a) :Pessoa(n, i), creaEngenheiro(na), areaDeAtuacao(a)
{

}
Engenheiro::~Engenheiro()
{
	cout << "Destruction" << endl;
}
void Engenheiro::setCreaEngenheiro(const string &na)
{
	creaEngenheiro = na;
}
string Engenheiro::getCreaEngenheiro() const
{
	return creaEngenheiro;
}
void Engenheiro::setAreaDeAtuacao(const string &a)
{
    areaDeAtuacao = a;
}
string Engenheiro::getAreaDeAtuacao()  const
{
    return areaDeAtuacao;
}
void Engenheiro::imprime() const
{
         cout << "\n------------Engenheiro--------------";
	     cout << "\nNome: " << getNome() << "\nIdade: " << getIdade()  << "\nArea de Atuacao: " <<getAreaDeAtuacao() <<"\nCrea: "<< creaEngenheiro << endl;
	     cout << "\n-----------------------------------\n\n";
}