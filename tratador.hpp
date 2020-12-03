#ifndef _TRATADOR_
#define _TRATADOR_

#include <iostream>

using namespace std;

class Tratador{
  private:
    string nome;
    string cor;
    string especialidade;

  public:
    Tratador ();//construtor padrão
    Tratador (string nome, string cor, string especialidade);//construtor parametrizado
    ~Tratador();//destrutor
    
    string getNome();
    void setNome(string nome);
    
    string getCor();
    void setCor(string cor);
    
    string getEspecialidade();
    void setEspecialidade(string especialidade);
    
    void criarTratador();
    void listarTratador();
        
};

#endif