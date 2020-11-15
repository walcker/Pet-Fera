#include <iostream>

#include "veterinario.hpp"
#include "tratador.hpp"
#include "animais.hpp"

using namespace std;

int main(int argc, char const *argv[]){
 
  Veterinario* maria = new Veterinario("Maria Antonieta","25843","02/04/1999");//usando construtor
      
  Veterinario* jaspion = new Veterinario("Jaspion police", "65432", "05/12/2000");//usando construtor
    
  Tratador* lampiao = new Tratador("Lampião bandido", "Azul", "01/04/2005");//usando construtor
  
  Animais* capivara1 = new Animais("Mamífero", "Capivara", "Fêmea", "Silvestre nativo", "ameaçada");//usando construtor
      
  cout << endl;
  cout << "Veterinarios: " << jaspion->getNome() << endl;
  cout << "Veterinarios: " << maria->getNome() << endl;
  cout << "Tratadores: " << lampiao->getNome() << endl;
  cout << "Animais: " << capivara1->getEspecie() << endl;

  return 0;
}