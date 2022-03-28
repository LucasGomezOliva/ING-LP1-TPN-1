// ING-LP1-Trabajo Práctico Nº1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "cPaciente.h"
#include "cLaboratorio.h"
#include "cCentro_de_Testeo.h"
#include <string>


int main()
{
    cCentro_de_Testeo* Centro_de_Testeo_1 = new cCentro_de_Testeo("0001", "Comuna 1", "Centro 1");
    cCentro_de_Testeo* Centro_de_Testeo_2 = new cCentro_de_Testeo("0002", "Comuna 2","Centro 2");

    cLaboratorio* Laboratorio_1 = new cLaboratorio();
    cLaboratorio* Laboratorio_2 = new cLaboratorio();

    cPaciente* Paciente_1 = new cPaciente("Pepe1", "Apellido1", "0001", "123455677", false, false, true, true, true, false);
    cPaciente* Paciente_2 = new cPaciente("Pepe2", "Apellido2", "0002", "123455677", false, false, true, true, true, false);
    cPaciente* Paciente_3 = new cPaciente("Pepe3", "Apellido3", "0003", "123455677", false, false, true, true, true, false);

    Centro_de_Testeo_1->Alta_Paciente(Paciente_2);
    Centro_de_Testeo_1->Alta_Paciente(Paciente_1);
    Centro_de_Testeo_1->Alta_Paciente(Paciente_3);

    Centro_de_Testeo_1->Baja_Paciente();
    Centro_de_Testeo_1->Asociar_Laboratorio(Laboratorio_1);


    delete Centro_de_Testeo_1;
    delete Centro_de_Testeo_2;

    delete Paciente_3;

    
   
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
