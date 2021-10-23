#include <iostream>
#include <string>
using namespace std;
#include "Obra.h"

Obra::Obra(const string &n, int nf,const string &p ,const string &tp, int q):nome(n),numeroFuncionario(nf),proprietario(p),tipoObra(tp), quantf(q)
{
}

Obra::~Obra(void)
{
	cout << "Destruction" << endl;
}

void Obra::setNome(const string &n)
{
	nome = n;
}
string Obra::getNome() const
{
	return nome;
}
string Obra::getProprietario() const
{
	return proprietario;
}


void Obra::setNumeroFuncionario(int nf)
{
	numeroFuncionario = nf;
}
int Obra::getNumeroFuncionario() const
{
	return numeroFuncionario;
}

void Obra::setQuantf(int q)
{
	quantf = q;
}
int Obra::getQuantf()
{
	return quantf;
}
void Obra::setTipoObra(const string &tp)
{
	tipoObra = tp;
}
string Obra::getTipoObra() const
{
	return tipoObra;
}

void Obra::imprime() const
{
    cout << "\n------------Obra--------------";
    cout << "\nNome: " << nome  << "\nnumero de Funcionarios necessarios "<< numeroFuncionario << "\ntipo de obra: " << tipoObra << endl;   
    
}
