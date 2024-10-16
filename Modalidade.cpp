// Modalidade.hpp (Roland Teodorowitsch; 15 out. 2024)
#include "Modalidade.hpp"


 Modalidade::Modalidade(int i, string es, string ev)
 Modalidade::~Modalidade(){}
 int Modalidade::int obtemId() const {return "";}
 string Modalidade::string obtemEsporte() const {return "";}
 string Modalidade::string obtemEvento() const {return "";}
 void Modalidade::void defineId(int i){}
 void Modalidade::void defineEsporte(string es) {}
 void Modalidade::void defineEvento(string ev) {}
 string Modalidade string str() const;
 bool Modalidade :: operator<(const Modalidade &m) const { return false } //esporte + id
 ostream &operator<<(ostream &out, const Modalidade &m) { return out; }
 istream &operator>>(istream &in, Modalidade &m){ return in; }

