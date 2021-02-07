#pragma once
#include"Naturaleza.h"
#include<string>
#include<iostream>
using namespace std;

class Habilidad {
private:
	string nombre;
	int cooldown;
	Naturaleza* naturaleza;
	int porcentajeDeExito;
public:
	Habilidad(string,int,Naturaleza*,int);
	~Habilidad();

    string getNombre() const;
    void setNombre(string nombre);

    int getCooldown() const;
    void setCooldown(int cooldown);

    Naturaleza* getNaturaleza() const;
    void setNaturaleza(Naturaleza* naturaleza);

    int getPorcentajeDeExito() const;
    void setPorcentajeDeExito(int porcentajeDeExito);

    virtual void usar()=0;

};