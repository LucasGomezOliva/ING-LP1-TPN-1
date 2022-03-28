#pragma once
#include<string>
#include<iostream>
#include "cPaciente.h"
#define MAX_MUESTRAS_PACIENTES 2
using namespace std;
class cLaboratorio
{
private:
	string ID_Laboratorio;
	string Nombre;
	string Comuna;
	cPaciente** Array_Pacientes;
	int Completo;
public:
	cLaboratorio();
	cLaboratorio(string _ID_Laboratorio,string _Nombre,string _Comuna);
	~cLaboratorio();
	bool Recibir_Muestra(cPaciente* _Paciente);
	void Analisis_Muestra();//Testear el correcto funcionamiento
	void Avisar_Pacientes();

	int getIndex(string _DNI);
};

