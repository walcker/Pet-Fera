#include <iostream>
#include "veterinario.hpp"

using namespace std;

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
