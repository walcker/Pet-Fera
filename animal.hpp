#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>
#include "veterinario.hpp"
#include "tratador.hpp"

using namespace std;

class Animal{
  private:
    string id;
    string classe;
    string especie;
    string sexo;
    string habitat;
    string extincao;

  public:
    Animal ();//construtor padrão
    Animal (string id, string classe, string especie, string sexo, string habitat, string extincao);//construtor parametrizadado
    ~Animal();//destrutor
    string getId();
    void setId(string id);
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