//Grupo: Adote Animais
//Emerson de Almeida da Silva
//Walcker da silva gomes
//https://youtu.be/yfjEjVgIQuU

#include <iostream>

#include "veterinario.hpp"
#include "tratador.hpp"
#include "animal.hpp"

using namespace std;

void pausar() {//Função para parar a tela
#if defined _WIN32
    system("pause");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("read -n 1 -s -p \"Pressione qualquer tecla para continuar...\"");
#elif defined (__APPLE__)
    system("read -n 1 -s -p \"Pressione qualquer tecla para continuar...\"");
#endif
}
void limpaTela()//Função para limpar a tela
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
  string veterinario;
  string tratador;

  cout << "Nome: " << endl;
  cin >> this->nome;
  cout << "Classe: " << endl;
  cin >> this->classe;
  cout << "Especie: " << endl;
  cin >> this->especie;
  cout << "Sexo: " << endl;
  cin >> this->sexo;
  cout << "Habitat: " << endl;
  cin >> this->habitat;
  cout << "Extinção: " << endl;
  cin >> this->extincao;
  cout << "Veterinário: " << endl;
  cin >> this->veterinario;
  cout << "Tratador: " << endl;
  cin >> this->tratador;
}
void 
Animal::listarAnimal() {
		cout << nome << endl;
    cout << classe << endl;
    cout << especie << endl;
    cout << sexo << endl;
    cout << habitat << endl;
    cout << extincao << endl;
    cout << veterinario << endl;
    cout << tratador << endl;
    pausar();
}

int main(int argc, char const *argv[]){
 
  Animal* an1 = new Animal("Vermelhinha","Mamífero","Capivara", "Fêmea", "Nativo", "Em extinção","José da Veiga", "Johny Silverhand");

	menuPrincipal(an1);

  return 0;
}


/*Classes: Funcionario, Tratador, Veterinario, Animal, Anfíbio, Reptil, Ave, Mamífero, Silvestre (opicional), Nativo, Exotico, Domestico (necessário ???), AnfíbioNativo, AnfíbioExotico ... (repete para cada classe de Animal)...*/