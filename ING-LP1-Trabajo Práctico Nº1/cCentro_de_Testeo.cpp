#include "cCentro_de_Testeo.h"
cCentro_de_Testeo::cCentro_de_Testeo() {
	this->ID = "";
	this->Comuna = "";
	this->Nombre = "";
	this->completo = 0;
	this->Array_Pacientes = new cPaciente * [MAX_PACIENTES];
	for (int i = 0; i < MAX_PACIENTES; i++)
	{
		Array_Pacientes[i] = NULL;
	}
	Laboratorio = NULL;
}

cCentro_de_Testeo::cCentro_de_Testeo(string _ID, string _Comuna, string _Nombre) {
	this->ID = _ID;
	this->Comuna = _Comuna;
	this->Nombre = _Nombre;
	this->completo = 0;
	this->Array_Pacientes = new cPaciente * [MAX_PACIENTES];
	for (int i = 0; i < MAX_PACIENTES; i++)
	{
		Array_Pacientes[i] = NULL;
	}
	Laboratorio = NULL;
}

cCentro_de_Testeo::~cCentro_de_Testeo() {
	
	if (Array_Pacientes != NULL) {
		
		delete[] Array_Pacientes;
	}
}

void cCentro_de_Testeo::Asociar_Laboratorio(cLaboratorio* _Laboratorio){
	//Recibe el laboratorio al cual se va a ver asociado el centro de testeo.
	this->Laboratorio = _Laboratorio;
}

bool cCentro_de_Testeo::Alta_Paciente(cPaciente* _Paciente) {
	//Recibe un paciente, verifica que haya un espacio para atenderlo y si lo hay se lo asigna a uno de los 2 punteros. Caso contrario, se imprime en pantalla el error que se tuvo.

	if (completo == MAX_PACIENTES) { cout << "ERROR: Centro de testeo alcanzo su maximo de capacidad." << endl; return false; }
	int pos = getIndex(_Paciente->get_DNI());
	if (pos >= 0) {
		cout << "ERROR: El paciente ya habia sido dado de alta." << endl;
		return false;
	}
	this->Array_Pacientes[completo++] = _Paciente;
}

void cCentro_de_Testeo::Mandar_Testeo() {

	for (int i = 0; i < completo; i++) {
		if (Array_Pacientes[i] != NULL) {
			Laboratorio->Recibir_Muestra(Array_Pacientes[i]);
		}
	}
}

void cCentro_de_Testeo::Baja_Paciente() {

	//Si el atributo “Resultado Testeo” de los pacientes es diferente a “Sin resultado”, se pueden poner en NULL los punteros a los pacientes.
	
	for (int i = 0; i < completo; i++) {
		if (Array_Pacientes[i]->get_Resultado_Testeo() != Resultado_Testeo::SinResultado) {
			Array_Pacientes[i] = NULL;
		}
	}
}

int cCentro_de_Testeo::getIndex(string _DNI) {
	for (int i = 0; i < completo; i++) {
		if (Array_Pacientes[i]->get_DNI() == _DNI)
			return i;
	}
	return -1;
}

string cCentro_de_Testeo::to_string() {
	return "\tID:" + ID + "\tNombre:" + Nombre + "\tComuna:" + Comuna;
}
void cCentro_de_Testeo::imprimir_en_pantalla() {
	cout << to_string() << endl;
}