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
