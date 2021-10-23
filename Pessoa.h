#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;
class Pessoa
{
	private:
		string nome;
		int idade;
	public:
		Pessoa(const string &, int);
		~Pessoa();
		void setNome(const string &);
		string getNome() const;
		void setIdade(int);
		int getIdade() const;
	
//sobreposicao
		virtual void imprime() const;


};
#endif

