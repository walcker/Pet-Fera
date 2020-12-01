//Grupo: Adote Animais
//Emerson de Almeida da Silva
//Walcker da silva gomes
//https://youtu.be/yfjEjVgIQuU
//https://github.com/walcker/Pet-Fera

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
		cout<< endl << "Seja Bem vindo(a) a loja AdoteAnimais!\n ";
		cout<< endl << "Opções: ";
		cout<< endl << "========";
		cout<< endl << "1 - Cadastrar um animal.";
    	cout<< endl << "2 - Listar animais.";
    	cout<< endl << "3 - Cadastrar Veterinário.";
		cout<< endl << "4 - Listar Veterinário.";
		cout<< endl << "5 - Cadastrar Tratador.";
		cout<< endl << "6 - Listar Tratador.";
		cout<< endl << "7 - Remover Veterinário.";
		cout<< endl << "8 - Remover Veterinário.";
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
			/*case '3' :{ an->cadastarVeterinario();}
			break;
			case 'R' :
			case 'r' :{ an->removeAnimal();}
			break;
			case 'L' :
			case 'l' :{ an->cadastarTratador();}
			break;
			case 'S' :
			case 's' :{ ag->removeTratador();}
			break;			
			case 'T' :
			case 't' :{ an->removeVeterinario();}
			break;
			case 'I' :
			case 'i' :{ an->listarTratador();}
			break;
			case 'E' :
			case 'e' :{ an->listarVeterinario();}
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

int main(int argc, char const *argv[]){
 
  Animal* an = new Animal("Vermelhinha","Mamífero","Capivara", "Fêmea", "Nativo", "Em extinção","José da Veiga", "Johny Silverhand");

	menuPrincipal(an);

  return 0;
}

/*Classes: Funcionario, Tratador, Veterinario, Animal, Anfíbio, Reptil, Ave, Mamífero, Silvestre (opicional), 
Nativo, Exotico, Domestico (necessário ???), AnfíbioNativo, AnfíbioExotico ... (repete para cada classe de Animal)...*/