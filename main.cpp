#include <string>
#include <iostream>
#include <stdio.h>
#include "Pessoa.h"
#include "Empregador.h"
#include "Engenheiro.h"
#include "Obra.h"
#include "Maquina.h"

int verify(string *c)//cpf com mais de 11 caracters
{
	string d;
	d = *c;//d igualando ao apontador c
	if(d.length() == 11)//length()==retorna o comprimento da string/
		return 1;
	cout << "\n\nDigite novamente com 11 caracteres\n"<<endl;
	return 0;
}

void verificar(int a,string *c,int op)
{
    while(a==0)
    {
        if(a==0)
        {
            if(op==1)
            {
                
                cout << "\n Crea do engenheiro"<< endl;
                cin >> *c;
                a = verify(c);//c nao e alterado, sendo utilizado a propria variavel
                
            }
            else
            {
                cout << "\n CPF do empregador"<< endl;
                cin >> *c;
                a = verify(c);//c nao e alterado, sendo utilizado a propria variavel
            }
        }
    }
}


//sobrecarga
int numeroTotalFuncionario(int a)
{
	return a;
}

int numeroTotalFuncionario(int a, int b)
{
	return (a+b);
}
double DinheiroFunc(int a)
{
    return (1600*a);
}
double DinheiroFunc(int a, int b)
{
    return (1600*a + 1600*b);
}

int main()
{
    
	string nome, cpf, tipoObra,area;
	int idade, a, nf, qua, d, op, quantf,uni;
	
	string *const c = &cpf;//inicializando o ponteiro constante para a string nao constante que pode ser modificado por c ,alem deapontar E.D.M do cpf
    Empregador *empre1 = NULL;//inicializando ponteiro apontando para Null, representando  a subclasse empregador
	Engenheiro *enge1 = NULL;
	Obra *obra1 = NULL;
	Maquina *maquina1 = NULL; 


    a = 0;
    op = 1;
	while(op != 0)
	{
        cout << "------------------Fazendo uma Engenho - Logistica---------------------------\n" << endl;
		cout << "1 - Engenheiro\t2 - Empregador\t3 - ir para a producao - 4 - sair\n" << endl;
		cout << "OBS: soh pode produzir algo , apos definir empregador e engenheiro\n" << endl;
		cin >> op;
		
		switch (op)
    	{   
    	    	case 1:
                	cout << "\nEngenheiro\n";
        			cout << "\nnome: ";
        			cin >> nome;
        			cout << "\nidade: ";
        			cin >> idade;
        			cout << "\nArea de Atuacao: ";
        			cin >> area;
        			verificar(a,c,op);
        			
        			enge1 = new Engenheiro(nome, idade, *c,area);//cria nova variavel dinamica da subclasse  para engenheiro
        
        			//imprime O Engenheiro aplicando a sobreposicao
        			enge1->imprime();
    		break;
    		
            	case 2:
        		a = 0;
        		cout << "\n\nEmpregador \n";
        		cout << "\nNome: ";
        		cin >> nome;
        		cout << "\nIdade: ";
        		cin >> idade;
        		
        		verificar(a,c,op);
        			
        		empre1 = new Empregador(nome, idade, *c);//cria nova variavel dinamica da subclasse  enpregado
        			
        		//aplica a sobreposicao
        		empre1->imprime();
        		cout << "\n"<< endl;//estetica
             break;
    	    	
    	     case 3:
    	       
        		cout << "1 - Produzir uma obra\t2 - Produzir - Equipamento/maquina/instrumento/Aparelho\t0 - Sair\n" << endl;
        		cin >> op;
        		if(op==1)
        		{	    
        			cout<< "\n\nObra\n";
        			cout << "\nnome da Obra: ";
        			cin >> nome;
        			cout << "\nnumero de funcionarios necessarios para a operacao: ";
        			cin >> nf;
        			cout << "\nComo o empregador deseja que a obra seja feita: ";
        			cin >> tipoObra;
        			cout << "\nQuantidade de material: ";
        			cin >> quantf;
        			obra1 = new Obra(nome, nf, empre1->getNome(), tipoObra, quantf);//mandando tambem o porprietario da obra
        			obra1->imprime();//aplica a sobreposicao
        			cout << "\nFuncionario total: " << numeroTotalFuncionario(obra1->getNumeroFuncionario())<<endl;
        			cout << "\nTotal pagar para os Funcionarios: R$" << DinheiroFunc(obra1->getNumeroFuncionario())<<endl;
        			cout << "\n-----------------------------------\n";
        		}		
        		else
        		{  
                    if(op==2)
                    {
        				cout<< "\n\nEquipamento/maquina/instrumento/Aparelho\n";
        				cout << "\nnome: ";
        				cin >> nome;
        				cout << "\nNumero de funcionarios necessarios para operacao: ";
        				cin >> nf;
        				cout << "\n produzido de que maneira : ";
        				cin >> tipoObra;
        				cout << "\nQuantidade de material: ";
        				cin >> quantf;
        				cout << "\nDesempenho do equipamento: ";
        				cin >> d;
        				cout << "\nMaterial utilisado de Qualidade sim - 1 , 2 - nao: ";
        				cin >> qua;
        				maquina1 = new Maquina(nome, nf, empre1->getNome(), tipoObra, quantf, d,qua);
        				maquina1->imprime();//aplica a sobreposicao
        
        			}
        			cout << "\nFuncionario total: " << numeroTotalFuncionario(maquina1->getNumeroFuncionario())<<endl;
        			cout << "\nTotal pagar para os Funcionarios: R$ " << DinheiroFunc(maquina1->getNumeroFuncionario())<<endl;
        			cout << "\n-----------------------------------\n";
        		}
        		if (maquina1 != NULL && obra1 != NULL)
        		{
        			cout << "\nDesempenho" << maquina1->calcQuantidade(*obra1) << "\nquantidade total de funcionarios para maquina e obra qualquer: "<< numeroTotalFuncionario(maquina1->getNumeroFuncionario(), obra1->getNumeroFuncionario())<<endl;
        			                        //passando o valor do apontato                                                                                  usando o ponteiro            
        			cout << "\nTotal pagar para os Funcionarios: R$ " << DinheiroFunc(maquina1->getNumeroFuncionario(),obra1->getNumeroFuncionario())<<endl;
        			cout << "\n-----------------------------------\n";
        		}
        		
    	     break;
    	    
    	     case 4:
    	         exit(0);
    	        
    	     default:
    	         cout << "\nOperacao invalida pois o while(op!=0): " << endl;
	   }
	}//fim do while

}//fim da main
