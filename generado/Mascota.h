#ifndef _MASCOTA_H
#define _MASCOTA_H


#include <string>
using namespace std;
#include "HistorialMedico.h"

class EvaluacionVeterinaria;
class Propietario;
class Vacuna;

// <<Entity>>
class Mascota {
  public:
    long idMascota;

    string nombre;


  private:
    string especie;

    string raza;

    string fotosMascota;

    string fechaNacimiento;

    long idUsuario;

    HistorialMedico historial;


  public:
   EvaluacionVeterinaria * evaluaciones;

    bool registrarMascota();

    void actualizarDatos();

    void cambiarDisponibilidad();

    Propietario * propietario;


  private:
   Vacuna * vacunas;

    float pesoKg;


  public:
    float calcularDosisRecomendada();

};
#endif
