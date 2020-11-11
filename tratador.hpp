#ifndef _TRATADOR_
#define _TRATADOR_

#include <iostream>

using namespace std;

class Tratador{
  private:
    string nome;
    string cor;
    string data;

  public:
    string getNome();
    void setNome(string nome);
    string getCor();
    void setCor(string cor);
    string getData();
    void setData(string data);
        
};

#endif