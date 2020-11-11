#include <iostream>

#include "veterinario.hpp"
#include "tratador.hpp"

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
    
  cout << endl;
  cout << "Veterinarios: " << jaspion->getNome() << endl;
  cout << "Veterinarios: " << maria->getNome() << endl;
  cout << "Tratadores: " << lampiao->getNome() << endl;

  return 0;
}