#include "Naturaleza.h"

Naturaleza::Naturaleza()
{
	this->nombre = "";
	this->tipo = 0;
	this->naturalezasDebiles = new vector<Naturaleza*>(5);
	this->naturalezasResistentes = new vector<Naturaleza*>(5);
	this->naturalezasInmunes = new vector<Naturaleza*>(5);
}

Naturaleza::Naturaleza(string nombre, bool tipo)
{
	this->nombre = nombre;
	this->tipo = tipo;
	this->naturalezasDebiles = new vector<Naturaleza*>(5);
	this->naturalezasResistentes = new vector<Naturaleza*>(5);
	this->naturalezasInmunes = new vector<Naturaleza*>(5);
}

Naturaleza::~Naturaleza()
{
	delete[] naturalezasDebiles;
	delete[] naturalezasResistentes;
	delete[] naturalezasInmunes;
}

string Naturaleza::getNombre() const
{
	return this->nombre;
}

bool Naturaleza::getTipo() const
{
	return this->tipo;
}

vector<Naturaleza*>* Naturaleza::getNaturalezasDebiles()
{
	return this->naturalezasDebiles;
}

vector<Naturaleza*>* Naturaleza::getNaturalezasResistentes()
{
	return this->naturalezasResistentes;
}

vector<Naturaleza*>* Naturaleza::getNaturalezasInmunes()
{
	return this->naturalezasInmunes;
}

void Naturaleza::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Naturaleza::setTipo(bool tipo)
{
	this->tipo = tipo;
}

string Naturaleza::toString()
{
	stringstream s;
	s << "Nombre: " << this->getNombre() << endl;
	s << "Tipo: " << (this->getTipo()?"Fisica":"Magica") << endl;
	s << "Naturalezas Debiles: \n";
	if (this->naturalezasDebiles) {
		for (int i = 0; i < this->naturalezasDebiles->size();i++) {
			s<<"\t"<<this->naturalezasDebiles->at(i)->getNombre()<<endl;
		}
	}
	s << "Naturalezas Resistentes: \n";
	if (this->naturalezasResistentes) {
		for (int i = 0; i < this->naturalezasResistentes->size(); i++) {
			s << "\t" << this->naturalezasResistentes->at(i)->getNombre() << endl;
		}
	}
	s << "Naturalezas Inmunes: \n";
	if (this->naturalezasInmunes) {
		for (int i = 0; i < this->naturalezasInmunes->size(); i++) {
			s << "\t" << this->naturalezasInmunes->at(i)->getNombre() << endl;
		}
	}
	return s.str();
}

void Naturaleza::ingresarDRI(vector<Naturaleza*>*& DRI, Naturaleza* naturaleza)
{
	DRI->push_back(naturaleza);
}
