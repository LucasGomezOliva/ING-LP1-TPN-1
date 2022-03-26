#pragma once
#include<string>
#include<iostream>
#include "cPaciente.h"
using namespace std;
class cLaboratorio
{
private:
	string ID_Laboratorio;
	string Nombre;
	string Comuna;
	//cPaciente** Pacientes;
	bool Completo;
public:
	cLaboratorio();
	cLaboratorio(string _ID_Laboratorio,string _Nombre,string _Comuna, bool _Completo);
	~cLaboratorio();

	void Recibir_Muestra(cPaciente _Paciente);
	void Analisis_Muestra();
	void Avisar_Pacientes();

};

