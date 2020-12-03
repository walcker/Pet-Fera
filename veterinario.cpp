#include <iostream>
#include "veterinario.hpp"

using namespace std;

Veterinario::Veterinario(){
  this->nome = "";
  this->crmv = "";
  this->idade = 0;
  this->especialidade = "";
}//construtor padrão

Veterinario::Veterinario(string nome, string crmv, short idade, string especialidade):
						nome(nome), crmv(crmv), idade(idade), especialidade(especialidade){}
	/*this->v_nome = nome;
	this->v_crmv = crmv;
	this->v_idade = idade;
	this->v_especialidade = especialidade;
}*///construtor parametrizado

Veterinario::~Veterinario(){
  cout << "Arquivo fechado" << endl;
}//destrutor

string Veterinario::getNome(){
  return this->nome;
}
void Veterinario::setNome(string nome){
  this->nome = nome;
}

string Veterinario::getCrmv(){
  return this->crmv;
}
void Veterinario::setCrmv(string crmv){
  this->crmv = crmv;
}

short Veterinario::getIdade(){
	return this->idade;
}
void Veterinario::setIdade(short idade){
	this->idade = idade;
}

string Veterinario::getEspecialidade(){
  return this->especialidade;
}
void Veterinario::setEspecialidade(string especialidade){
  this->especialidade = especialidade;
}
void 
Veterinario::criarVeterinario() {
  string nome;
  string crmv;
  short idade;  
  string especialidade;
  
  cout << "Nome: " << endl;
  cin >> this->nome;
  cout << "CRMV: " << endl;
  cin >> this->crmv;
  cout << "Idade (insira somente números): " << endl;
  cin >> this->idade;
  cout << "Especialidade: " << endl;
  cin >> this->especialidade;
}
void 
Veterinario::listarVeterinario() {
  //this->printTitle("Listagem de Animais");

  if (this->nome.size()==0){
    cout << "Não há veterinários cadastrados." << endl;
  } else {
    cout << nome << endl;
    cout << crmv << endl;
    cout << idade << endl;
    cout << especialidade << endl;
    cin >> nome;
    //pausar();
  }
}