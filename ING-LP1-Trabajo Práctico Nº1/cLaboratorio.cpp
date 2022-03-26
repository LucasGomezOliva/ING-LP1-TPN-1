#include "cLaboratorio.h"

cLaboratorio::cLaboratorio(){
	ID_Laboratorio = "";
	Nombre = "";
	Comuna = "";
	Completo = false;
}

cLaboratorio::cLaboratorio(string _ID_Laboratorio, string _Nombre, string _Comuna, bool _Completo) {
	this->ID_Laboratorio = _ID_Laboratorio;
	this->Nombre = _Nombre;
	this->Comuna = _Comuna;
	this->Completo = _Completo;
}

cLaboratorio::~cLaboratorio(){
}

void cLaboratorio::Recibir_Muestra(cPaciente _Paciente) {

}

void cLaboratorio::Analisis_Muestra() {

	
}

void cLaboratorio::Avisar_Pacientes() {

}