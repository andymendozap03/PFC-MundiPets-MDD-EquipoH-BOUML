#ifndef _VACUNA_H
#define _VACUNA_H


#include <string>
using namespace std;

class Mascota;

// <<Entity>>
class Vacuna {
  private:
    long idVacuna;

    string nombreVacuna;

    string descripcion;


  public:
    bool registrarVacuna();

    void consultarVacuna();


  private:
   Mascota * mascota;

};
#endif
