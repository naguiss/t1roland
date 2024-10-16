// Aplicacao.hpp (Roland Teodorowitsch; 15 out. 2024)

#include "Aplicacao.hpp"



#define MAX_PAISES 210
#define MAX_MODALIDADES 100

class Aplicacao {
private:
  Pais paises[MAX_PAISES];
  int numPaises;
  Modalidade modalidades[MAX_MODALIDADES];
  int numModalidades;
public:
  Aplicacao();
  ~Aplicacao();
  bool carregaPaises(string fileName);
  void ordenaPaises();
  string listaPaises() const;
  bool carregaModalidades(string fileName);
  void ordenaModalidades();
  string listaModalidades() const;
};
#endif
