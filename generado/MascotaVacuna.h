#ifndef _MASCOTAVACUNA_H
#define _MASCOTAVACUNA_H


#include <string>
using namespace std;

// <<Entity>>
class MascotaVacuna {
  private:
    long idMascotaVacuna;

    long idMascota;

    long idVacuna;

    string fechaAplicacion;

    string proximaDosis;


  public:
    void registrarAplicacion();

    string calcularVigencia();

};
#endif
