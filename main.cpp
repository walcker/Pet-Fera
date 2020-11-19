#include <iostream>

#include "veterinario.hpp"
#include "tratador.hpp"
#include "animal.hpp"

using namespace std;

void pausar() {
#if defined _WIN32
    system("pause");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("read -n 1 -s -p \"Pressione qualquer tecla para continuar...\"");
#elif defined (__APPLE__)
    system("read -n 1 -s -p \"Pressione qualquer tecla para continuar...\"");
#endif
}
void limpaTela()
{
#if defined _WIN32
    system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
#elif defined (__APPLE__)
    system("clear");
#endif
}

/*void menuPrincipal(Agencia* ag) {
	char opcao;
	limpaTela();
	do {	 
		cout<< endl << "Opções: ";
		cout<< endl << "========";
		cout<< endl << "C - Criar uma conta.";
		cout<< endl << "R - Remover uma conta.";
		cout<< endl << "L - Listar contas.";
		cout<< endl << "S - Efetuar saque.";
		cout<< endl << "D - Efetuar depósito.";
		cout<< endl << "T - Efetuar transferência entre contas.";
		cout<< endl << "I - Imprimir saldo.";
		cout<< endl << "E - Imprimir extrato.";
		cout<< endl << "---------";
		cout<< endl << endl << "X - Encerrar.";

		cout<< endl << endl << "Selecione a opção: ";

		cin >> opcao;

		limpaTela();
		 
		switch(opcao)
		{
			case 'C' :
			case 'c' :{ ag->criarConta();}
			break;
			case 'R' :
			case 'r' :{ ag->removeConta();}
			break;
			case 'L' :
			case 'l' :{ ag->listarContas();}
			break;
			case 'S' :
			case 's' :{ ag->saque();}
			break;
			case 'D' :
			case 'd' :{ ag->deposito();}
			break;
			case 'T' :
			case 't' :{ ag->transferencia();}
			break;
			case 'I' :
			case 'i' :{ ag->saldo();}
			break;
			case 'E' :
			case 'e' :{ ag->extrato();}
			break;
			case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opção inválida!";
		}
		cout << endl;

		pausar();
		limpaTela();
	
	} while (opcao != 'X' && opcao !='x');
}*/

int main(int argc, char const *argv[]){
 
  Veterinario* maria = new Veterinario("Maria Antonieta","25843","02/04/1999");//usando construtor
      
  Veterinario* jaspion = new Veterinario("Jaspion police", "65432", "05/12/2000");//usando construtor
    
  Tratador* lampiao = new Tratador("Lampião bandido", "Azul", "01/04/2005");//usando construtor
  
  Animal* capivara1 = new Animal("0001", "Mamífero", "Capivara", "Fêmea", "Silvestre nativo", "ameaçada");//usando construtor
      
  cout << endl;
  cout << "Veterinarios: " << jaspion->getNome() << endl;
  cout << "Veterinarios: " << maria->getNome() << endl;
  cout << "Tratadores: " << lampiao->getNome() << endl;
  cout << "Animal: " << capivara1->getEspecie() << endl;

  return 0;
}