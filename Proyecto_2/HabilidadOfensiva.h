#pragma once
#include"Habilidad.h"

class HabilidadOfensiva :public Habilidad{
public:
	HabilidadOfensiva(string,int,Naturaleza*,int);
	~HabilidadOfensiva();


	// Inherited via Habilidad
	virtual void usar() override;

};