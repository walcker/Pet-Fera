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

void menuPrincipal(Animal* an) {
	char opcao;
	limpaTela();
	do {	 
		cout<< endl << "Opções: ";
		cout<< endl << "========";
		cout<< endl << "1 - Cadastrar um animal.";
    cout<< endl << "2 - Listar animais.";
		/*cout<< endl << "R - Remover uma conta.";
		  cout<< endl << "S - Efetuar saque.";
		cout<< endl << "D - Efetuar depósito.";
		cout<< endl << "T - Efetuar transferência entre contas.";
		cout<< endl << "I - Imprimir saldo.";
		cout<< endl << "E - Imprimir extrato.";*/
		cout<< endl << "---------";
		cout<< endl << endl << "X - Encerrar.";

		cout<< endl << endl << "Selecione a opção: ";

		cin >> opcao;

		limpaTela();
		 
		switch(opcao)
		{
			case '1' :{ an->criarAnimal();}
			break;
      case '2' :{ an->listarAnimal();}
			break;
			/*case 'R' :
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
			break;*/
			case 'X' :
			case 'x' :{ return;}
			break;
			default : cout << endl << "Opção inválida!";
		}
		cout << endl;

		pausar();
		limpaTela();
	
	} while (opcao != 'X' && opcao !='x');
}

void 
Animal::criarAnimal() {
  string nome;
	string classe;
  string especie;
  string sexo;
  string habitat;
  string extincao;

  cout << "Nome: " << endl;
  cin >> nome;
  cout << "Classe: " << endl;
  cin >> classe;
  cout << "Especie: " << endl;
  cin >> especie;
  cout << "Sexo: " << endl;
  cin >> sexo;
  cout << "Habitat: " << endl;
  cin >> habitat;
  cout << "Extinção: " << endl;
  cin >> extincao;
}
void Animal::listarAnimal() {
		cout << nome << endl;
    cout << classe << endl;
    cout << especie << endl;
    cout << sexo << endl;
    cout << habitat << endl;
    cout << extincao << endl;
    cout << "Animal cadastrado" << endl;
    pausar();
}

int main(int argc, char const *argv[]){
 
  Animal* an1 = new Animal("Vermelhinha","Mamífero","Capivara", "Fêmea", "Nativo", "Em extinção");

	menuPrincipal(an1);

  return 0;
}


/*Classes: Funcionario, Tratador, Veterinario, Animal, Anfíbio, Reptil, Ave, Mamífero, Silvestre (opicional), Nativo, Exotico, Domestico (necessário ???), AnfíbioNativo, AnfíbioExotico ... (repete para cada classe de Animal)...*/