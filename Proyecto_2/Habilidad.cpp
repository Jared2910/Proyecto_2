#include "Habilidad.h"

Habilidad::Habilidad(string nombre, int cooldown, Naturaleza* naturaleza, int porcentajeDeExito)
{
	this->nombre = nombre;
	this->cooldown = cooldown;
	this->naturaleza = naturaleza;
	this->porcentajeDeExito = porcentajeDeExito;
}

Habilidad::~Habilidad()
{
}

string Habilidad::getNombre() const
{
    return nombre;
}

void Habilidad::setNombre(string nombre)
{
    this->nombre = nombre;
}

int Habilidad::getCooldown() const
{
    return cooldown;
}

void Habilidad::setCooldown(int cooldown)
{
    this->cooldown = cooldown;
}

Naturaleza* Habilidad::getNaturaleza() const
{
    return naturaleza;
}

void Habilidad::setNaturaleza(Naturaleza* naturaleza)
{
    this->naturaleza = naturaleza;
}

int Habilidad::getPorcentajeDeExito() const
{
    return porcentajeDeExito;
}

void Habilidad::setPorcentajeDeExito(int porcentajeDeExito)
{
    this->porcentajeDeExito = porcentajeDeExito;
}

