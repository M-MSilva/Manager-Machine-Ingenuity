#ifndef EMPREGADOR_H
#define EMPREGADOR_H

#include <string>
using namespace std;
class Empregador:public Pessoa
{
	private:
		const string cpf;//constante sem setter
	public:
		Empregador(const string &,int i, const string &);
		~Empregador();
		string getCpf() const;
		//sobrecarga
		void imprime() const;
		
};
#endif
