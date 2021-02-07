#include "HabilidadTemporal.h"

HabilidadTemporal::HabilidadTemporal(int ModPHYATK, int ModPYDEF, int ModMAGTK, int ModMAGDEF, int ModSPD, int clase, string nombre, int cooldown, Naturaleza* naturaleza, int porcentajeDeExito): Habilidad(nombre, cooldown, naturaleza, porcentajeDeExito)
{
	this->ModPHYATK = ModPHYATK;
	this->ModPYDEF = ModPYDEF;
	this->ModMAGTK = ModMAGTK;
	this->ModMAGDEF = ModMAGDEF;
	this->ModSPD = ModSPD;
}

HabilidadTemporal::~HabilidadTemporal()
{
}

int HabilidadTemporal::getModPHYATK() const
{
	return ModPHYATK;
}

void HabilidadTemporal::setModPHYATK(int ModPHYATK)
{
	this->ModPHYATK = ModPHYATK;
}

int HabilidadTemporal::getModPYDEF() const
{
	return ModPYDEF;
}

void HabilidadTemporal::setModPYDEF(int ModPYDEF)
{
	this->ModPYDEF = ModPYDEF;
}

int HabilidadTemporal::getModMAGTK() const
{
	return ModMAGTK;
}

void HabilidadTemporal::setModMAGTK(int ModMAGTK)
{
	this->ModMAGTK = ModMAGTK;
}

int HabilidadTemporal::getModMAGDEF() const
{
	return ModMAGDEF;
}

void HabilidadTemporal::setModMAGDEF(int ModMAGDEF)
{
	this->ModMAGDEF = ModMAGDEF;
}

int HabilidadTemporal::getModSPD() const
{
	return ModSPD;
}

void HabilidadTemporal::setModSPD(int ModSPD)
{
	this->ModSPD = ModSPD;
}

int HabilidadTemporal::getClase() const
{
	return clase;
}

void HabilidadTemporal::setClase(int clase)
{
	this->clase = clase;
}

void HabilidadTemporal::usar()
{
	cout << "Haciendo algo temporalmente\n";
}
