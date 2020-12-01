#include <sstream>
#include <iostream>
#include <iomanip>

#include <cstring>
#include "animal.hpp"
#include "veterinario.hpp"

using namespace std;

using std::setfill;
using std::setw;
using std::fixed;
using std::setprecision;
using std::cout;
using std::endl;
using std::cin;
using std::left;
using std::right;
using std::getline;


Animal::Animal(){
  this->classe = "A definir";
}//construtor padrão

Animal::Animal
(string nome, string classe, string especie, string sexo, string habitat, string extincao, string veterinario, string tratador):
  classe(classe), especie(especie), sexo(sexo), habitat(habitat), extincao(extincao), veterinario(veterinario), tratador(tratador){}//construtor parametrizado

Animal::~Animal(){
  cout << "Arquivo fechado" << endl;//destrutor
}
string Animal::getNome(){
  return this->nome;
}
void Animal::setNome(string nome){
  this->nome = nome;
}

string Animal::getClasse(){
  return this->classe;
}
void Animal::setClasse(string classe){
  this->classe = classe;
}

string Animal::getEspecie(){
  return this->especie;
}
void Animal::setEspecie(string especie){
  this->especie = especie;
}

string Animal::getSexo(){
  return this->sexo;
}
void Animal::setSexo(string sexo){
  this->sexo = sexo;
}

string Animal::getHabitat(){
  return this->habitat;
}
void Animal::setHabitat(string habitat){
  this->habitat = habitat;
}

string Animal::getExtincao(){
  return this->extincao;
}
void Animal::setExtincao(string extincao){
  this->extincao = extincao;
}

string Animal::getVeterinario(){
  return this->veterinario;
}
void Animal::setVeterinario(string veterinario){
  this->veterinario = veterinario;
}

/*
string Animal::Veterinario(Veterinario){
  return this->veterinario;
}
void Animal::setVeterinario(string veterinario){
  this->veterinario = veterinario;
}*/

string Animal::getTratador(){
  return this->tratador;
}
void Animal::setTratador(string tratador){
  this->tratador = tratador;
}

void 
Animal::criarAnimal() {
  string nome;
  string classe;
  string especie;
  string sexo;
  string habitat;
  string extincao;
  string veterinario;
  string tratador;

  cout << "Nome: " << endl;
  cin >> this->nome;
  cout << "Classe: " << endl;
  cin >> this->classe;
  cout << "Especie: " << endl;
  cin >> this->especie;
  cout << "Sexo: " << endl;
  cin >> this->sexo;
  cout << "Habitat: " << endl;
  cin >> this->habitat;
  cout << "Extinção: " << endl;
  cin >> this->extincao;
  cout << "Veterinário: " << endl;
  cin >> this->veterinario;
  cout << "Tratador: " << endl;
  cin >> this->tratador;
}

//void
//Animal::cadastrarVeterinario(){
  //return this->veterinario;

void 
 cadastrarVeterinario() {
  
  Veterinario* an = new Veterinario("nome", "12345", 36, "cachorros");

    void receberVeterinario(Veterinario* an);
}

void receberVeterinario(Veterinario* an){

  string nome;
  string crmv;
  short  idade;
  string especialidade;
  
  cout << "Nome: ";
  cin >>nome;
  an->setNome(nome);
  
  cout << "CRMV: ";
  cin >>crmv;
  an->setCrmv(crmv);

  cout << "Idade: ";
  cin >>idade;
  an->setIdade(idade);

  cout << "Especialidade: ";
  cin >>especialidade;
  an->setEspecialidade(especialidade);
}

void 
Animal::listarAnimal() {
  //this->printTitle("Listagem de Animais");

  //if (this->nome.size()==0){
    cout << "Não há animais cadastrados." << endl;
  } /*else {
    cout << nome << endl;
    cout << classe << endl;
    cout << especie << endl;
    cout << sexo << endl;
    cout << habitat << endl;
    cout << extincao << endl;
    cout << veterinario << endl;
    cout << tratador << endl;
    //pausar();
  }
}
void 
Animal::printTitle(string title) {
  int spaceTotal = 50;
  int spaceOnLeft = (spaceTotal-title.length())/2;
  int spaceExtra = title.length()%2;
  cout << setfill('*') << setw(spaceTotal) << ""<< endl;
  cout << "**" 
    << setfill(' ') << setw(spaceOnLeft-2) << ""
    << title 
    << setfill(' ') << setw(spaceOnLeft-2+spaceExtra) << ""
    << "**" << endl;
  cout << setfill('*') << setw(spaceTotal) << "" << endl;
}*/