// Proyecto_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Library.h"

int main()
{
    Naturaleza* naturaleza_Fuego = new Naturaleza("Fuego", true);
    Naturaleza* naturaleza_Agua = new Naturaleza("Agua", true);
    Naturaleza* naturaleza_Planta = new Naturaleza("Planta", false);

    naturaleza_Fuego->ingresarDRI(naturaleza_Fuego->getNaturalezasDebiles(), naturaleza_Agua);
    naturaleza_Fuego->ingresarDRI(naturaleza_Fuego->getNaturalezasInmunes(), naturaleza_Planta);

    cout << naturaleza_Fuego->toString() << endl;
    cout << naturaleza_Agua->toString() << endl;
    cout << naturaleza_Planta->toString() << endl;

    delete naturaleza_Fuego;
    delete naturaleza_Agua;
    delete naturaleza_Planta;

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
