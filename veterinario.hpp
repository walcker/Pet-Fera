#ifndef _VETERINARIO_
#define _VETERINARIO_

#include <iostream>
#include <string>

using namespace std;

class Veterinario{
  private:
    string nome;
    string crmv;
    short idade;
    string especialidade;


  public:
    Veterinario ();//construtor padrão
    Veterinario (string nome, string crmv, short idade, string especialidade);//construtor parametrizado
    ~Veterinario();//destrutor
    
    string getNome();
    void setNome(string nome);

    string getCrmv();
    void setCrmv(string crmv);
    
    short getIdade();
    void setIdade(short idade);

    string getEspecialidade();
    void setEspecialidade(string especialidade);

    void criarVeterinario();
    void listarVeterinario();
        
};

#endif