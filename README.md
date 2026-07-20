# MundiPets — MDD (UML → Código) con BOUML

Repositorio de evidencia para la actividad **«Exposición-Demostración: Herramientas que generan código fuente a partir de modelos UML»** (Ingeniería de Requisitos, UTEQ — 2026-2027 PPA), aplicando el ciclo completo de **Model-Driven Development (MDD)** sobre el subsistema de gestión de mascotas e historial médico del Proyecto Fin de Curso **MundiPets**.

---

## Equipo H

- **Chavarría Cuenca Tahiny Mel** — CI: 0943050054 — tchavarriac@uteq.edu.ec
- **Mendoza Párraga Andy Johel** — CI: 1251401590 — amendozap9@uteq.edu.ec — Titular del PFC
- **Sánchez Cornejo Gary Alberto** — CI: 1208338291 — gsanchezc6@uteq.edu.ec

> **Nota:** El estudiante **Zamora Aguilar Ronaldo Wilfrido** no participó en el desarrollo de la actividad, ya que nos notificó que se retiró de la materia.

---

## Descripción del sistema PFC y del subsistema modelado

**MundiPets** es una plataforma que conecta propietarios de mascotas, veterinarias y refugios para la gestión integral de adopción, cruza y seguimiento sanitario animal.

El subsistema modelado en esta actividad corresponde al **módulo de gestión de mascotas e historial médico**, que cubre el registro de mascotas, su historial clínico, el carnet de vacunación y las evaluaciones veterinarias asociadas. El módulo se modeló a partir de la jerarquía de actores **Usuario** (*Propietario*, *Veterinario*) y las clases de dominio **Mascota**, **HistorialMedico**, **Vacuna**, **MascotaVacuna** (clase asociativa) y **EvaluacionVeterinaria**.

---

## Herramienta empleada

- **Software:** BOUML — versión 7.11 patch 4
- **Generador de código utilizado:** C++ (C++17)

---

## Requisitos previos

- **Sistema operativo probado:** Windows 11
- **Entorno CASE:** BOUML 7.11 patch 4
- **Compilador:** GCC (g++) mediante MinGW-w64
- **Entorno LaTeX:** Distribución TeX (TeX Live o MiKTeX) con los binarios `pdflatex` y `biber` instalados.

---

## Instrucciones reproducibles paso a paso

### 1. Clonar el repositorio

Abrir la terminal de comandos de su sistema (Git Bash, CMD o PowerShell) y ejecutar:

```bash
git clone https://github.com/andymendozap03/PFC-MundiPets-MDD-EquipoH-BOUML.git
cd PFC-MundiPets-MDD-EquipoH-BOUML
```

---

### 2. Abrir el modelo

1. Iniciar la herramienta **BOUML**.
2. Ir al menú superior y seleccionar **Project → Open**.
3. Buscar y seleccionar el archivo del proyecto ubicado en:

```text
modelo/modelo.prj
```

---

### 3. Ejecutar la generación de código

1. En el navegador lateral izquierdo (**Browser**), hacer clic derecho sobre el paquete raíz llamado **modelo**.
2. Seleccionar:

```text
Generate → C++
```

3. El motor procesará las estructuras y guardará los archivos fuente dentro de la carpeta:

```text
generado/
```

---

### 4. Compilar el código generado

Para compilar y ejecutar la unidad demostrable en C++, sitúese en la terminal dentro de la carpeta de salida y ejecute:

```bash
cd generado

g++ Usuario.cpp Propietario.cpp Veterinario.cpp Mascota.cpp HistorialMedico.cpp Vacuna.cpp MascotaVacuna.cpp EvaluacionVeterinaria.cpp main.cpp -o mundipets_demo

.\mundipets_demo.exe
```

---

## Instrucciones para compilar el informe técnico

Para transformar el archivo `informe.tex` en `informe.pdf`, resolviendo correctamente los índices, referencias, bibliografía y bloques de código, sitúese en la carpeta `docs/` y ejecute las siguientes pasadas:

```bash
cd ../docs

pdflatex informe.tex
biber informe
pdflatex informe.tex
pdflatex informe.tex
```

---


## Créditos y responsabilidades individuales

### Mendoza Párraga Andy Johel

Encargado del diseño, tipificación y normalización del diagrama de clases estructural y casos de uso en el lienzo nativo de BOUML. Diseñó, ejecutó y documentó la inyección interactiva del ciclo de cambio controlado de requisitos (**Round-Trip Engineering** de los atributos mutados) y coordinó la consistencia del repositorio mediante Git.

### Sánchez Cornejo Gary Alberto

Responsable de la fundamentación analítica de las transformaciones **M2M/M2T**, metamodelos y plantillas en el marco conceptual. Configuró globalmente el generador físico del entorno CASE, ajustó el mapeo asociativo mediante contenedores vectoriales `std::vector` y codificó la unidad demostrativa `main.cpp`.

### Chavarría Cuenca Tahiny Mel

Desarrolló el marco justificativo clínico del subsistema y la adecuación de requerimientos con la norma **ISO/IEC/IEEE 29148:2018**. Diseñó la matriz de viabilidad técnica comparativa frente a la alternativa descartada (**Modelio 5.4.1**) y delimitó el alcance funcional del módulo.
