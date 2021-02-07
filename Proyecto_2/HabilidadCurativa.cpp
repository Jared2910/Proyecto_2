#include "HabilidadCurativa.h"

HabilidadCurativa::HabilidadCurativa(string nombre, int cooldown, Naturaleza* naturaleza, int porcentajeDeExito):Habilidad(nombre,cooldown,naturaleza,porcentajeDeExito)
{
}

HabilidadCurativa::~HabilidadCurativa()
{
}

void HabilidadCurativa::usar()
{
	cout << "Curando" << endl;
}
