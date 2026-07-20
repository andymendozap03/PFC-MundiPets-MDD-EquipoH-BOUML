#ifndef _HISTORIALMEDICO_H
#define _HISTORIALMEDICO_H


#include <string>
using namespace std;

// <<Entity>>
class HistorialMedico {
  private:
    long idHistorial;

    string alergias;

    string cirugias;

    string antecedentesGeneticos;

    long idMascota;

    string desparacitaciones;


  public:
    bool registrarAntecedente();

    void actualizarHistorial();

};
#endif
