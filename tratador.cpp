#include <iostream>
#include "tratador.hpp"

using namespace std;

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
