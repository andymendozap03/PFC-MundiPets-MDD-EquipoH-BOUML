#ifndef _PROPIETARIO_H
#define _PROPIETARIO_H


#include "Usuario.h"

class Mascota;

// <<Actor>>
class Propietario : public Usuario {
  public:
    bool registrarMascota();

    bool crearPublicacion();

    bool enviarSolicitud();

    Mascota * mascotas;
};
#endif
