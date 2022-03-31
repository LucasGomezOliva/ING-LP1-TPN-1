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
    cLaboratorio* Laboratorio_1 = new cLaboratorio("0001", "Laboratorio-1", "Comuna-1");
    cout << Laboratorio_1->to_string() << endl;

    cPaciente* Paciente_1 = new cPaciente("Pepe1", "Apellido1", "0001", "123455677", false, false, false, false, false, false, false);
    cPaciente* Paciente_2 = new cPaciente("Pepe2", "Apellido2", "0002", "123455677", true, true, false, true, true, false, false);

    cout << Paciente_1->to_string() << endl;
    cout << Paciente_2->to_string() << endl;

    Centro_de_Testeo_1->Asociar_Laboratorio(Laboratorio_1);
    Centro_de_Testeo_1->Alta_Paciente(Paciente_1);
    Centro_de_Testeo_1->Alta_Paciente(Paciente_2);
    Centro_de_Testeo_1->Mandar_Testeo();
    Laboratorio_1->Analisis_Muestra();
    Laboratorio_1->Avisar_Pacientes();
    Centro_de_Testeo_1->Baja_Paciente();
     
   delete Paciente_1;
   delete Paciente_2;
   //delete Laboratorio_1;
   delete Centro_de_Testeo_1;
   
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
