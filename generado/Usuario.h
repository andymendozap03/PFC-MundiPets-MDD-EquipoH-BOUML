#ifndef _USUARIO_H
#define _USUARIO_H


#include <string>
using namespace std;

// <<Actor>>
class Usuario {
  protected:
    long idUsuario;


  public:
    string nombres;


  protected:
    string apellidos;

    string correo;

    string telefono;

    string fotoPerfil;


  public:
    bool registrarse();

    void actualizarPerfil();

    bool verificarIdentidad();

    bool iniciarSesion();

};
#endif
