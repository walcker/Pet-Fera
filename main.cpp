#include <iostream>

#include "veterinario.hpp"
#include "tratador.hpp"
#include "animais.hpp"

using namespace std;

int main(int argc, char const *argv[]){
 
  Veterinario* maria = new Veterinario();
  maria->setNome("Maria Antonieta");
  maria->setCrmv("25843");
  maria->setData("02/04/1999");  
    
  Veterinario* jaspion = new Veterinario();
  jaspion->setNome("Jaspion police");
  jaspion->setCrmv("65432");
  jaspion->setData("05/12/2000");
  
  Tratador* lampiao = new Tratador();
  lampiao->setNome("Lampião bandido");
  lampiao->setCor("Azul");
  lampiao->setData("01/04/2005");

  Animais* capivara1 = new Animais();
  capivara1->setClasse("Mamífero");
  capivara1->setEspecie("Capivara");
  capivara1->setSexo("Fêmea");
  capivara1->setHabitat("Silvestre nativo");
  capivara1->setExtincao("ameaçada");
    
  cout << endl;
  cout << "Veterinarios: " << jaspion->getNome() << endl;
  cout << "Veterinarios: " << maria->getNome() << endl;
  cout << "Tratadores: " << lampiao->getNome() << endl;
  cout << "Animais: " << capivara1->getEspecie() << endl;

  return 0;
}