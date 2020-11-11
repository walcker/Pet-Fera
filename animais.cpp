#include <iostream>
#include "animais.hpp"

using namespace std;

string Animais::getClasse(){
  return this->classe;
}
void Animais::setClasse(string classe){
  this->classe = classe;
}
string Animais::getEspecie(){
  return this->especie;
}
void Animais::setEspecie(string especie){
  this->especie = especie;
}
string Animais::getSexo(){
  return this->sexo;
}
void Animais::setSexo(string sexo){
  this->sexo = sexo;
}
string Animais::getHabitat(){
  return this->habitat;
}
void Animais::setHabitat(string habitat){
  this->habitat = habitat;
}
string Animais::getExtincao(){
  return this->extincao;
}
void Animais::setExtincao(string extincao){
  this->extincao = extincao;
}
