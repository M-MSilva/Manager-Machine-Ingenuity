#ifndef EGENHEIRO_H
#define EGENHEIRO_H

#include <string>
using namespace std;

class Engenheiro : public Pessoa
{
	private:
		string creaEngenheiro;
	protected:
	    string  areaDeAtuacao;
		
	public:
		Engenheiro(const string &, int, const string &,const string &);//nome /idade/
		~Engenheiro();
		
		void setCreaEngenheiro(const string &);
		string getCreaEngenheiro() const;
		
		void setAreaDeAtuacao(const string &);
		string getAreaDeAtuacao() const;  
		

		void imprime() const;

};
#endif
