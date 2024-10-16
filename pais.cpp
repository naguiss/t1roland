// Pais.hpp (Flávia Helena; 16 set. 2024)
#ifdef _PAIS_HPP
#define _PAIS_HPP

#include <iostream>
#include "Pais.hpp"


  Pais::Pais(string s="???", string n="") : sigla(s), nome(n){
  #ifdef DEBUG
  cerr << "+ Pais (" << sigla << ", "<< nome << ") criado" << endl;
  #endif
  }
  Pais::~Pais(){
  #ifdef DEBUG
  cerr << "- Pais (" << sigla << ", "<< nome << ") destruido" << endl;
  #endif
  }
  string Pais::string obtemSigla() const {return sigla;}
  string Pais::string obtemNome() const {return nome;}
  void Pais::void defineSigla(string s){sigla = s}
  void Pais::void defineNome(string n){ nome = n}
  
  string Pais::string str() const{
  stringstream ss;
  ss<< "[" << sigla << "]" << nome;
  return ss.str();
  }
  bool Pais :: operator<(const Pais &p) const{return sigla < p.sigla;} // cria a sigla
 
   ostream &operator<<(ostream &out, const Pais &p) {
   if (out << p.sigla << endl ){
   out << p.nome << endl;
   }
   return out;
   }
   
   istream &operator>>(istream &in, Pais &p){
   string s, n;
   getLine
   return in;}
