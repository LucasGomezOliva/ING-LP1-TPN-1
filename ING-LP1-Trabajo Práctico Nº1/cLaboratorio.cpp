#include "cLaboratorio.h"

cLaboratorio::cLaboratorio(){
	this->ID_Laboratorio = "";
	this->Nombre = "";
	this->Comuna = "";
	this->Completo = 0;
	this->Array_Pacientes = new cPaciente * [MAX_MUESTRAS_PACIENTES];
	for (int i = 0; i < MAX_MUESTRAS_PACIENTES; i++)
	{
		Array_Pacientes[i] = NULL;
	}
}

cLaboratorio::cLaboratorio(string _ID_Laboratorio, string _Nombre, string _Comuna) {
	this->ID_Laboratorio = _ID_Laboratorio;
	this->Nombre = _Nombre;
	this->Comuna = _Comuna;
	this->Completo = 0;
	this->Array_Pacientes = new cPaciente * [MAX_MUESTRAS_PACIENTES];
	for (int i = 0; i < MAX_MUESTRAS_PACIENTES; i++)
	{
		Array_Pacientes[i] = NULL;
	}
}

cLaboratorio::~cLaboratorio(){
	if (Array_Pacientes != NULL) {
		delete[] Array_Pacientes;
	}
}

bool cLaboratorio::Recibir_Muestra(cPaciente* _Paciente) {
	//Recibe un paciente y se fija si tiene lugar para analizar la muestra. En el caso de que no se logre recibir la muestra indique el problema que se tuvo.
	if (Completo == MAX_MUESTRAS_PACIENTES) { cout << "ERROR: Laboratorio alcanzo su maximo de capacidad de muestras." << endl; return false; }
	int pos = getIndex(_Paciente->get_DNI());
	if (pos >= 0) {
		cout << "ERROR: Ya se habia recibido la muestra" << endl;
		return false;
	}
	this->Array_Pacientes[Completo++] = _Paciente;
}

void cLaboratorio::Analisis_Muestra() {
	int sintomas = 0;
	for (int i = 0; i < Completo; i++)
	{
		if (Array_Pacientes[i]->get_Fiebre() == true) sintomas++;
		if (Array_Pacientes[i]->get_Tos() == true) sintomas++;
		if (Array_Pacientes[i]->get_Mocos() == true) sintomas++;
		if (Array_Pacientes[i]->get_Contacto_estrecho() == true) sintomas++;
		if (Array_Pacientes[i]->get_Dolor_Cabeza() == true) sintomas++;
		if (Array_Pacientes[i]->get_Dolor_Garganta() == true) sintomas++;
		if (sintomas < 2) {Array_Pacientes[i]->set_Resultado_Testeo(Resultado_Testeo::Negativo);}
		else {Array_Pacientes[i]->set_Resultado_Testeo(Resultado_Testeo::Positivo);}
		sintomas = 0;
	}
}

void cLaboratorio::Avisar_Pacientes() {
	// Manda un mensaje de texto al paciente con la información del testeo (imprimir en pantalla si se logró mandar el mensaje). Una vez que se avisa a los pacientes, se descartan las muestras.
	for (int i = 0; i <Completo; i++) {
		if (Array_Pacientes != 0) {
			Array_Pacientes[i]->set_Notificado(true);
			cout << "\nEl resultado fue enviado al paciente:  "<<Array_Pacientes[i]->to_string() << endl;
			Array_Pacientes[i] = NULL;
		}
	}
}


int cLaboratorio::getIndex(string _DNI) {
	for (int i = 0; i < Completo; i++) {
		if (Array_Pacientes[i]->get_DNI() == _DNI)
			return i;
	}
	return -1;
}

string cLaboratorio::to_string() {
	return "\tID Laoratorio:" + ID_Laboratorio + "\tNombre:" + Nombre + "\tComuna:" + Comuna;
}

void cLaboratorio::imprimir_en_pantalla() {
	cout << to_string() << endl;
}