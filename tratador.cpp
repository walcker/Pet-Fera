#include <iostream>
#include "tratador.hpp"

using namespace std;

Tratador::Tratador(){
  this->nome = "A definir";
}//construtor padrão

Tratador::Tratador(string nome, string cor, string data):nome(nome),cor(cor),data(data){}//construtor parametrizado

Tratador::~Tratador(){
  cout << "Arquivo fechado" << endl;
}//destrutor
string Tratador::getNome(){
  return this->nome;
}
void Tratador::setNome(string nome){
  this->nome = nome;
}
string Tratador::getCor(){
  return this->cor;
}
void Tratador::setCor(string cor){
  this->cor = cor;
}
string Tratador::getData(){
  return this->data;
}
void Tratador::setData(string data){
  this->data = data;
}
void 
Tratador::criarTratador() {
  string nome;
  string cor;
  string data;
  
  cout << "Nome: " << endl;
  cin >> this->nome;
  cout << "Cor: " << endl;
  cin >> this->cor;
  cout << "Data: " << endl;
  cin >> this->data;
}
void 
Tratador::listarTratador() {
  //this->printTitle("Listagem de Animais");

  if (this->nome.size()==0){
    cout << "Não há tratadores cadastrados." << endl;
  } else {
    cout << nome << endl;
    cout << cor << endl;
    cout << data << endl;
    cin >> nome;
    //pausar();
  }
}