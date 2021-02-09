// Proyecto_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Library.h"

int main()
{
    ///
    ///   PRUEBAS
    /// 
    
    //Creacion de las Naturalezas
    Naturaleza* naturaleza_Fuego = new Naturaleza("Fuego", true);
    Naturaleza* naturaleza_Agua = new Naturaleza("Agua", true);
    Naturaleza* naturaleza_Planta = new Naturaleza("Planta", false);

    //DRI = Debiles | Resistentes | Inmunes
    naturaleza_Fuego->ingresarDRI(naturaleza_Fuego->getNaturalezasDebiles(), naturaleza_Agua);
    naturaleza_Fuego->ingresarDRI(naturaleza_Fuego->getNaturalezasInmunes(), naturaleza_Planta);

    //Creacion de las habiliadades
    Habilidad* ascuas = new HabilidadOfensiva("Ascuas", 2, naturaleza_Fuego, 70);
    Habilidad* lanzallamas = new HabilidadOfensiva("Lanzallamas", 5, naturaleza_Fuego, 40);

    //Creacion del vector de habilidades para pasarselo a un luchador
    vector<Habilidad*>* habilidades = new vector<Habilidad*>();
    habilidades->push_back(ascuas);
    habilidades->push_back(lanzallamas);

    //Creacion e imprimiendo el toString de un luchador
    Luchador* Charizard = new Luchador("Charizard", 84, 78, 109, 85, 100, habilidades, naturaleza_Fuego, 100, Clase::Mago);
    cout << Charizard->toString();


    //Liberacion de la memoria
    delete naturaleza_Fuego;
    delete naturaleza_Agua;
    delete naturaleza_Planta;

    delete ascuas;
    delete lanzallamas;

    delete Charizard;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
