#pragma once

#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>
#include <string>
#include "veterinario.hpp"
#include "tratador.hpp"

using namespace std;
using std::string;

class Animal{
  private:
    string nome;
    string classe;
    string especie;
    string sexo;
    string habitat;
    string extincao;
    string veterinario;
    string tratador;

/*private:
    void printTitle(string title);*/
    
  public:
    Animal ();//construtor padrão
    Animal (string nome, string classe, string especie, string sexo, string habitat, string extincao, 
            string veterinario, string tratador);//construtor parametrizadado
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
    
    string getVeterinario();
    void setVeterinario(string veterinario);

    string getTratador();
    void setTratador(string tratador);
    
    /*void 
    class Animal:: public Veterinario{
      cadastrarVeterinario()       
    }*/

    void criarAnimal();
    //void cadastrarVeterinario();
    void receberVeterinario(Veterinario* an);
    void listarAnimal();
        
};

#endif