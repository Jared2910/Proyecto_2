#pragma once
#include<string>
#include<sstream>
#include<vector>
using std::string;
using std::vector;
using std::stringstream;
using std::endl;

class Naturaleza {
private:
	string nombre;
	bool tipo;
	vector<Naturaleza*>* naturalezasDebiles;
	vector<Naturaleza*>* naturalezasResistentes;
	vector<Naturaleza*>* naturalezasInmunes;
public:
	Naturaleza();
	Naturaleza(string,bool);
	~Naturaleza();

	string getNombre() const;
	bool getTipo() const;
	vector<Naturaleza*>* getNaturalezasDebiles();
	vector<Naturaleza*>* getNaturalezasResistentes();
	vector<Naturaleza*>* getNaturalezasInmunes();

	void setNombre(string);
	void setTipo(bool);

	string toString();
	void ingresarDRI(vector<Naturaleza*>*&,Naturaleza*);
};