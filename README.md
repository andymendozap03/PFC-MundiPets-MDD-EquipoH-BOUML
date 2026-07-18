# MundiPets — MDD (UML → Código) con BOUML

Repositorio de evidencia para la actividad **«Exposición-Demostración: Herramientas que generan código fuente a partir de modelos UML»** (Ingeniería de Requisitos, UTEQ — 2026-2027 PPA), aplicando el ciclo completo de Model-Driven Development (MDD) sobre el subsistema de **gestión de mascotas e historial médico** del Proyecto Fin de Curso **MundiPets**.

## Equipo (Equipo H)

- **Chavarría Cuenca Tahiny Mel** — CI: 0943050054 — tchavarriac@uteq.edu.ec
- **Mendoza Párraga Andy Johel** — CI: 1251401590 — amendozap9@uteq.edu.ec — *Titular del PFC*
- **Sánchez Cornejo Gary Alberto** — CI: 1208338291 — gsanchezc6@uteq.edu.ec

> **Nota:** el estudiante Zamora Aguilar Ronaldo Wilfrido no participó en el desarrollo de la actividad, ya que nos notificó que se retiró de la materia.

## Descripción del sistema PFC y del subsistema modelado

**MundiPets** es una plataforma que conecta propietarios de mascotas, veterinarias y refugios para la gestión integral de adopción, cruza y seguimiento sanitario animal.

El subsistema modelado en esta actividad corresponde al módulo de **gestión de mascotas e historial médico**, que cubre el registro de mascotas, su historial clínico, el carnet de vacunación y las evaluaciones veterinarias asociadas. El módulo se modeló a partir de la jerarquía de actores `Usuario` (`Propietario`, `Veterinario`) y las clases de dominio `Mascota`, `HistorialMedico`, `Vacuna`, `MascotaVacuna` (clase asociativa) y `EvaluacionVeterinaria`.

## Herramienta empleada

- **BOUML** — versión **7.11 patch 4**
- Generador de código utilizado: **C++ (C++17)**

## Requisitos previos

- Sistema operativo probado: **Windows 11**
- BOUML 7.11 patch 4
