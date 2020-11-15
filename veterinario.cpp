#include <iostream>
#include "veterinario.hpp"

using namespace std;

Veterinario::Veterinario(){
  this->nome = "A definir";
}//construtor padrão

Veterinario::Veterinario(string nome, string crmv, string data):nome(nome),crmv(crmv),data(data){}//construtor parametrizado

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
string Veterinario::getData(){
  return this->data;
}
void Veterinario::setData(string data){
  this->data = data;
}
