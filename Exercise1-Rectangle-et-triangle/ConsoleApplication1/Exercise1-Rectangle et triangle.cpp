// Exercise1-Rectangle et triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "triangle-rectangle.hpp"
#include "string"

using namespace std;


int main()
{	
	string triOrRec; //creation du string triangle/rectangle
	string areaOrPeri; //creation du string aire/perimetre
	float base;
	float hauteur;
	float cote1;
	float cote2;
	float longeur;
	float largeur;

		while (1 == 1) { //repeter indefinement
			cout << "Type in either 'triangle' or 'rectangle' for respective geometric figures.\n";
			cin >> triOrRec; //choisir entre triangle et rectangle

			if (triOrRec == "triangle" || triOrRec == "Triangle") {
				//Triangle choisi
				//obtenir les mesures necessaires
				cout << "Enter the base of the triangle.\n";
				cin >> base;

				cout << "Enter the height of the triangle.\n";
				cin >> hauteur;

				cout << "Enter the mesure of one side of the triangle.\n";
				cin >> cote1;

				cout << "Enter the mesure of the other side of the triangle.\n";
				cin >> cote2;


				cout << "Type in either 'area' or 'perimeter' for respective calculations.\n";
				cin >> areaOrPeri; //choisir entre aire et perimetre

				if (areaOrPeri == "area" || areaOrPeri == "Area") {

					Triangle obj(base, hauteur, cote1, cote2);
					obj.outputAreaT();
					cout << "Resetting program.\n";

				}

				else if (areaOrPeri == "perimeter" || areaOrPeri == "Perimeter")
				{
					
					Triangle obj(base, hauteur, cote1, cote2);
					obj.outputPerimeterT();
					cout << "Resetting program.\n";

				}

				else // si erreur
				{
					cout << "That is incorrect, please type in 'area' or 'perimeter'.\n";
				}

			}

			else if (triOrRec == "rectangle" || triOrRec == "Rectangle")
			{
				//Rectangle choisi
				//obtenir les mesures necessaires
				cout << "Enter the width of the triangle.\n";
				cin >> largeur;

				cout << "Enter the length of the triangle.\n";
				cin >> longeur;

				cout << "Type in either 'area' or 'perimeter' for respective calculations.\n";
				cin >> areaOrPeri;
				if (areaOrPeri == "area" || areaOrPeri == "Area") {
					Rectangle obj2(longeur, largeur);
					obj2.outputAreaR();
					cout << "Resetting program.\n";
				}

				else if (areaOrPeri == "perimeter" || areaOrPeri == "Perimeter")
				{
					Rectangle obj2(longeur, largeur);
					obj2.outputPerimeterR();
					cout << "Resetting program.\n";
				}

				else
				{
					cout << "That is incorrect, please type in 'area' or 'perimeter'.\n";
				}

			}

			else //Si erreur
			{
				cout << "That is incorrect, please type in 'triangle' or 'rectangle'.\n";
				cout << "Resetting program.\n";
			} 
		}
		return 0;
}