#pragma once
#include "Habilidad.h"

class HabilidadTemporal : public Habilidad {

private:
	int ModPHYATK;
	int ModPYDEF;
	int ModMAGTK;
	int ModMAGDEF;
	int ModSPD;
	int clase;

public:
	HabilidadTemporal(int, int , int, int, int, int, string, int, Naturaleza*, int);
	~HabilidadTemporal();

    int getModPHYATK() const; 
    void setModPHYATK(int ModPHYATK); 

    int getModPYDEF() const; 
    void setModPYDEF(int ModPYDEF); 

    int getModMAGTK() const; 
    void setModMAGTK(int ModMAGTK);

    int getModMAGDEF() const;
    void setModMAGDEF(int ModMAGDEF);

    int getModSPD() const; 
    void setModSPD(int ModSPD);

    int getClase() const;
    void setClase(int clase); 

    // Inherited via Habilidad
    virtual void usar() override;

};