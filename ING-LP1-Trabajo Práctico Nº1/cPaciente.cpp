#include "cPaciente.h"

cPaciente::cPaciente() {
	this->Nombre = "";
	this->Apellido = "";
	this->DNI = "";
	this->Telefono = "";
	this->Fiebre = false;
	this->Tos = false;
	this->Mocos = false;
	this->Contacto_Estrecho = false;
	this->Dolor_Cabeza = false;
	this->Dolor_Garganta = false;
	this->Testeo = SinResultado;
	this->Notificado = false;
}

cPaciente::cPaciente(string _Nombre, string _Apellido, string _DNI, string _Telefono, bool _Fiebre, bool _Tos, bool _Mocos, bool _Contacto_Estrecho, bool _Dolor_Cabeza, bool _Dolor_Garganta, bool _Notificado) {
	this->Nombre = _Nombre;
	this->Apellido = _Apellido;
	this->DNI = _DNI;
	this->Telefono = _Telefono;
	this->Fiebre = _Fiebre;
	this->Tos = _Tos;
	this->Mocos = _Mocos;
	this->Contacto_Estrecho = _Contacto_Estrecho;
	this->Dolor_Cabeza = _Dolor_Cabeza;
	this->Dolor_Garganta = _Dolor_Garganta;
	this->Testeo = SinResultado;
	this->Notificado = _Notificado;
}

cPaciente::~cPaciente(){
}

void cPaciente::set_Resultado_Testeo(Resultado_Testeo resultado)
{
	Testeo = resultado;
}

string cPaciente::to_string() {
	return "Nombre:" + Nombre + "	Apellido:" + Apellido + "	DNI:" + DNI + "	Telefono:" + Telefono; "	Fiebre: ";
}