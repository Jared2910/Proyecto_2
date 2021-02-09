#include "Luchador.h"

Luchador::Luchador(string nombre, int PHYATK, int PHYDEF, int MAGATK, int MAGDEF, int SPD, vector<Habilidad*>* habilidades, Naturaleza* naturaleza, int puntosDeSalud, Clase clase)
{
    this->nombre = nombre;
    this->PHYATK = PHYATK;
    this->PHYDEF = PHYDEF;
    this->MAGATK = MAGATK;
    this->MAGDEF = MAGDEF;
    this->SPD = SPD;
    this->habilidades = habilidades;
    this->naturaleza = naturaleza;
    this->puntosDeSalud = puntosDeSalud;
    this->clase = clase;
}

Luchador::~Luchador()
{
    delete habilidades;
}

string Luchador::getNombre() const
{
    return nombre;
}

void Luchador::setNombre(string nombre)
{
    this->nombre = nombre;
}

int Luchador::getPHYATK() const
{
    return PHYATK;
}

void Luchador::setPHYATK(int PHYATK)
{
    this->PHYATK = PHYATK;
}

int Luchador::getPHYDEF() const
{
    return PHYDEF;
}

void Luchador::setPHYDEF(int PHYDEF)
{
    this->PHYDEF = PHYDEF;
}

int Luchador::getMAGATK() const
{
    return MAGATK;
}

void Luchador::setMAGATK(int MAGATK)
{
    this->MAGATK = MAGATK;
}

int Luchador::getMAGDEF() const
{
    return MAGDEF;
}

void Luchador::setMAGDEF(int MAGDEF)
{
    this->MAGDEF = MAGDEF;
}

int Luchador::getSPD() const
{
    return SPD;
}

void Luchador::setSPD(int SPD)
{
    this->SPD = SPD;
}

Naturaleza* Luchador::getNaturaleza() const
{
    return naturaleza;
}

void Luchador::setNaturaleza(Naturaleza* naturaleza)
{
    this->naturaleza = naturaleza;
}

int Luchador::getPuntosDeSalud() const
{
    return puntosDeSalud;
}

void Luchador::setPuntosDeSalud(int puntosDeSalud)
{
    this->puntosDeSalud = puntosDeSalud;
}

Clase Luchador::getClase() const
{
    return clase;
}

void Luchador::setClase(Clase clase)
{
    this->clase = clase;
}

string Luchador::toString()
{
    stringstream s;
    s << "Nombre: " << this->getNombre() << endl;
    s << "Clase: ";
    switch (this->getClase())
    {
    case Clase::Caballero:
        s << "Caballero" << endl;
        break;
    case Clase::Mago:
        s << "Mago" << endl;
        break;
    case Clase::Ninja:
        s << "Ninja" << endl;
        break;
    default:
        break;
    }
    s << "PHYATK: " << this->getPHYATK() << endl;
    s << "PHYDEF: " << this->getPHYDEF() << endl;
    s << "MAGATK: " << this->getMAGATK() << endl;
    s << "MAGDEF: " << this->getMAGDEF() << endl;
    s << "SPD: " << this->getSPD() << endl;
    s << "Naturaleza: " << this->getNaturaleza()->getNombre() << endl;
    s << "Vida: " << this->getPuntosDeSalud() << endl;
    s << "Habilidades: \n";
    for (auto& actual : *this->habilidades) {
        s << "\t^ " << actual->getNombre() << endl;
    }
    return s.str();
}

