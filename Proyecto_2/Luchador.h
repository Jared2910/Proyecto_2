#pragma once
#include"Naturaleza.h"
#include"Habilidad.h"

enum class Clase
{
    Caballero,
    Mago, 
    Ninja
};

class Luchador {
private:
    string nombre;
	int PHYATK;
	int PHYDEF;
	int MAGATK;
	int MAGDEF;
	int SPD;
    vector<Habilidad*>* habilidades;
	Naturaleza* naturaleza;
	int puntosDeSalud;
	Clase clase;
public:
    Luchador(string nombre,int PHYATK,int PHYDEF,int MAGATK,int MAGDEF,int SPD,vector<Habilidad*>* habilidades,Naturaleza* naturaleza,int puntosDeSalud,Clase clase);
    ~Luchador();

    string getNombre() const;
    void setNombre(string nombre);

    int getPHYATK() const;
    void setPHYATK(int PHYATK);

    int getPHYDEF() const;
    void setPHYDEF(int PHYDEF);

    int getMAGATK() const;
    void setMAGATK(int MAGATK);

    int getMAGDEF() const;
    void setMAGDEF(int MAGDEF);

    int getSPD() const;
    void setSPD(int SPD);

    Naturaleza* getNaturaleza() const;
    void setNaturaleza(Naturaleza* naturaleza);

    int getPuntosDeSalud() const;
    void setPuntosDeSalud(int puntosDeSalud);

    Clase getClase() const;
    void setClase(Clase clase);

    string toString();

};