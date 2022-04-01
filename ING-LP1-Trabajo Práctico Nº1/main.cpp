// ING-LP1-Trabajo Práctico Nº1.cpp

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
     
   //delete Paciente_1;
  // delete Paciente_2;
   delete Laboratorio_1;
   delete Centro_de_Testeo_1;
   delete Paciente_1;
   //delete Paciente_2;
}

