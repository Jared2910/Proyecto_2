#pragma once
#include"Habilidad.h"

class HabilidadCurativa :public Habilidad {
public:
	HabilidadCurativa(string,int,Naturaleza*,int);
	~HabilidadCurativa();



	// Inherited via Habilidad
	virtual void usar() override;

};