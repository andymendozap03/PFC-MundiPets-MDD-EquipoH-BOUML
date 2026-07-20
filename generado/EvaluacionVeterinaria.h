#ifndef _EVALUACIONVETERINARIA_H
#define _EVALUACIONVETERINARIA_H


#include <string>
using namespace std;

class Veterinario;

// <<Entity>>
class EvaluacionVeterinaria {
  private:
    long idEvaluacionVet;

    string diagnostico;

    string observaciones;

    bool aptitudCruza;

    bool aptitudAdopcion;

    string fechaEvaluacion;


  public:
    bool registrarEvaluacion();


  private:
    Veterinario * veterinario;

};
#endif
