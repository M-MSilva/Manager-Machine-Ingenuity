#ifndef OBRA_H
#define OBRA_H

#include <string>
using namespace std;
class Obra
{
	private:
		string nome;
		int numeroFuncionario; //numero de funcionarios
		string proprietario;//const string autor;
		string tipoObra;
		int quantf; //quantidade de material
	public:
		Obra(const string &, int, const string &, const string &, int);
		~Obra();
		
		void setNome(const string &);
		string getNome() const;

		string getProprietario() const;

		void setNumeroFuncionario(int);
		int getNumeroFuncionario() const;
		
		void setQuantf(int);
		int getQuantf();
		
		void setTipoObra(const string &);
		string getTipoObra() const;

		//sobreposicao
		virtual void imprime() const;//metodo virtual
		
		friend class Maquina;		
};
#endif

