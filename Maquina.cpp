#include <iostream>
#include <string>
using namespace std;
#include "Obra.h"
#include "Maquina.h"

Maquina::Maquina(string n, int t,string p,string m, int q, int d, int qua):Obra(n, t,p, m, q), desempenhoL(d), qualidade(qua)
{
}
Maquina::~Maquina()
{
	cout << "Destruction" << endl;

}
void Maquina::setDesempenhoL(int d)
{
		desempenhoL = d;
}
int Maquina::getDesempenhoL() const
{
	return desempenhoL;
}
void Maquina::setQualidade(int qua)
{
   	qualidade = qua;
}
int Maquina::getQualidade() const
{
  return qualidade;
}
void Maquina::imprime() const
{
    if (qualidade == 1)
    {
            cout << "\n------------Maquina--------------";
     	 	cout << "\nNome: " << getNome()<<"\nPropietario: " << getProprietario() << "\nNumero de Funcionarios necessarios : "<< getNumeroFuncionario() << "\nTipo de Obra: " << getTipoObra() << "\nMaterial de Qualidade alta, seguranca assegurada" << endl;
     	 	
    }
    else
    {
        cout << "\n------------Maquina--------------";
       	cout << "\nNome: " << getNome()<<"\nPropietario: " << getProprietario()<< "\nNumero de Funcionarios necessarios : "<< getNumeroFuncionario() << "\nTipo de Obra: " << getTipoObra() << "\nQualidade do material Ruim: Risco de desastre" << endl;
       	
    } 
}
//material de qualidade ou nao 

float Maquina::calcQuantidade(Obra d)//friend
{
    return d.quantf*desempenhoL;
}//
  
