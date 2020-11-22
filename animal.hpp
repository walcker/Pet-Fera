#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>
#include "veterinario.hpp"
#include "tratador.hpp"

using namespace std;

class Animal{
  private:
    string nome;
    string classe;
    string especie;
    string sexo;
    string habitat;
    string extincao;
    
  public:
    Animal ();//construtor padrão
    Animal (string nome, string classe, string especie, string sexo, string habitat, string extincao);//construtor parametrizadado
    ~Animal();//destrutor
    string getNome();
    void setNome(string nome);
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
    void criarAnimal();
    void listarAnimal();
        
};

#endif