#include "HabilidadOfensiva.h"

HabilidadOfensiva::HabilidadOfensiva(string nombre, int cooldown, Naturaleza* naturaleza, int porcentajeDeExito):Habilidad(nombre,cooldown,naturaleza,porcentajeDeExito)
{
}

HabilidadOfensiva::~HabilidadOfensiva()
{
}

void HabilidadOfensiva::usar()
{
	cout << "Atacando" << endl;
}
