#include "cCentro_de_Testeo.h"

cCentro_de_Testeo::cCentro_de_Testeo() {
	this->ID = "";
	this->Comuna = "";
	this->Nombre = "";
	this->completo = 0;
	this->Array_Pacientes = new cPaciente * [2];
	for (int i = 0; i < 2; i++)
	{
		Array_Pacientes[i] = NULL;
	}

}

cCentro_de_Testeo::cCentro_de_Testeo(string _ID, string _Comuna, string _Nombre) {
	this->ID = _ID;
	this->Comuna = _Comuna;
	this->Nombre = _Nombre;
	this->completo = 0;
	this->Array_Pacientes = new cPaciente * [2];
	for (int i = 0; i < 2; i++)
	{
		Array_Pacientes[i] = NULL;
	}
}

cCentro_de_Testeo::~cCentro_de_Testeo() {
	if (Array_Pacientes != NULL) {
			for (int i = 0; i < completo; i++) {
				if (Array_Pacientes[i] != NULL)
					delete Array_Pacientes[i];
			}
		delete[] Array_Pacientes;
	}
}

void cCentro_de_Testeo::Asociar_Laboratorio(cLaboratorio* _Laboratorio){

}

bool cCentro_de_Testeo::Alta_Paciente(cPaciente* _Paciente) {

	if (completo == 2) { cout << "Centro de testeo alcanzo su maximo de capacidad" << endl; return false; }
	int pos = getIndex(_Paciente->get_DNI());
	if (pos >= 0) {
		cout << "Error" << endl;
		return false;
	}
	this->Array_Pacientes[completo++] = _Paciente;
}

void cCentro_de_Testeo::Baja_Paciente() {
	/*
	* implementar get del enum de pacientes papa poder dar de baja los 
	* 
	for (int i = 0; i < completo; i++) {
		if (Array_Pacientes[i]-> -----get_destino() == direccion ---------) {

			for (int p = i; p < completo - 1; p++) {
				Array_Pacientes[i] = Array_Pacientes[i + 1];
			}
			Array_Pacientes[--completo] = NULL;
		}
	}
	*/
	
}

int cCentro_de_Testeo::getIndex(string _DNI) {
	for (int i = 0; i < completo; i++) {
		if (Array_Pacientes[i]->get_DNI() == _DNI)
			return i;
	}
	return -1;
}