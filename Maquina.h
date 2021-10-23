#ifndef MAQUINA_H
#define MAQUINA_H

#include <string>
using namespace std;
class Obra;

class Maquina: public Obra
{
	private:
		int desempenhoL;
		int qualidade;
		
	public:
		Maquina(string , int , string ,string, int , int , int);
		~Maquina();
		void setDesempenhoL(int);
        int getDesempenhoL() const;
        void setQualidade(int);
        int getQualidade() const;
        //sobreposicao
        void imprime() const;
        //friend
         float calcQuantidade(Obra);

        
};
#endif
