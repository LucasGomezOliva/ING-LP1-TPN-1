#pragma once
#include<string>
#include<iostream>
#include "cLaboratorio.h"
#include "cPaciente.h"
using namespace std;
class cCentro_de_Testeo
{
protected:
	string ID;
	string Comuna;
	string Nombre;
	cPaciente** Array_Pacientes;
	int completo;

public:
	cCentro_de_Testeo();
	cCentro_de_Testeo(string _ID, string _Comuna, string _Nombre);
	~cCentro_de_Testeo();

	//Metodos
	void Asociar_Laboratorio(cLaboratorio* _Laboratorio);
	bool Alta_Paciente(cPaciente* _Paciente);
	void Mandar_Testeo();
	void Baja_Paciente();

	int getIndex(string _DNI);
};

