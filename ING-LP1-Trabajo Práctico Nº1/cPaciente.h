#pragma once
#include<string>
#include<iostream>
#include"cResultado_Testeo.h"
using namespace std;

class cPaciente
{
protected:
	string Nombre;
	string Apellido;
	string DNI;
	string Telefono;
	bool Fiebre;
	bool Tos;
	bool Mocos;
	bool Contacto_Estrecho;
	bool Dolor_Cabeza;
	bool Dolor_Garganta;
	Resultado_Testeo Testeo;
	bool Notificado;

public:
	cPaciente();
	cPaciente(string Nombre, string Apellido, string DNI, string Telefono, bool Fiebre, bool Tos, bool Mocos, bool Contacto_Estrecho, bool Dolor_Cabeza, bool Dolor_Garganta, bool Notificado);
	~cPaciente();
	string get_DNI() { return DNI; };
	bool get_Fiebre() { return Fiebre; };
	bool get_Tos() { return Tos; };
	bool get_Mocos() { return Mocos; };
	bool get_Contacto_estrecho() { return Contacto_Estrecho; };
	bool get_Dolor_Cabeza() { return Dolor_Cabeza; };
	bool get_Dolor_Garganta() { return Dolor_Garganta; };
	Resultado_Testeo get_Resultado_Testeo() { return Testeo; };
	void set_Resultado_Testeo(Resultado_Testeo resultado);
	void set_Notificado(bool notificado) { this->Notificado = notificado; };
	string to_string();
};

