#ifndef _ANIMAIS_
#define _ANIMAIS_

#include <iostream>
#include "veterinario.hpp"
#include "tratador.hpp"

using namespace std;

class Animais{
  private:
    string classe;
    string especie;
    string sexo;
    string habitat;
    string extincao;

  public:
    string getClasse();
    void setClasse(string classe);
    string getEspecie();
    void setEspecie(string especie);
    string getSexo();
    void setSexo(string sexo);
    string getHabitat();
    void setHabitat(string habitat);
    string getExtincao();
    void setExtincao(string extincao);
        
};

#endif