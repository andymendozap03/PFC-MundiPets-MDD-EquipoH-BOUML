#include <iostream>
#include "Mascota.h"
#include "Propietario.h"

int main() {
    // 1. Instanciar un Propietario (hereda de Usuario)
    Propietario propietario1;
    propietario1.nombres = "Andy Mendoza";

    // 2. Instanciar una Mascota
    Mascota mascota1;
    mascota1.idMascota = 1;
    mascota1.nombre = "Firulais";

    // 3. Asociar la mascota con su propietario (multiplicidad 1 en Mascota)
    mascota1.propietario = &propietario1;

    // 4. Asociar el propietario con su mascota (multiplicidad * en Propietario,
    //    aqui se usa como puntero simple segun lo generado por BOUML)
    propietario1.mascotas = &mascota1;

    // 5. Verificar en tiempo de ejecucion que la relacion quedo correctamente enlazada
    std::cout << "=== Unidad demostrable: MundiPets (BOUML -> C++) ===" << std::endl;
    std::cout << "Propietario registrado: " << propietario1.nombres << std::endl;
    std::cout << "Mascota registrada: " << mascota1.nombre
               << " (ID: " << mascota1.idMascota << ")" << std::endl;

    // Navegacion Mascota -> Propietario
    std::cout << "La mascota '" << mascota1.nombre
               << "' pertenece a: " << mascota1.propietario->nombres << std::endl;

    // Navegacion Propietario -> Mascota
    std::cout << "El propietario '" << propietario1.nombres
               << "' tiene registrada a: " << propietario1.mascotas->nombre << std::endl;

    return 0;
}