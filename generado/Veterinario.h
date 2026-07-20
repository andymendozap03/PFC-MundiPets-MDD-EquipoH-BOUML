#ifndef _VETERINARIO_H
#define _VETERINARIO_H


#include "Usuario.h"
#include <string>
using namespace std;

class EvaluacionVeterinaria;

// <<Actor>>
class Veterinario : public Usuario {
  private:
    string numeroLicencia;


  public:
    bool validarHistorial();

    bool registrarEvaluacion();


  private:
   EvaluacionVeterinaria * evaluacionesRegistradas;

};
#endif
