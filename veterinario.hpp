#ifndef _VETERINARIO_
#define _VETERINARIO_

#include <iostream>

using namespace std;

class Veterinario{
  private:
    string nome;
    string crmv;
    string data;

  public:
    string getNome();
    void setNome(string nome);
    string getCrmv();
    void setCrmv(string crmv);
    string getData();
    void setData(string data);
        
};

#endif