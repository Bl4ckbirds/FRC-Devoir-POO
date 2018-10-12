#ifndef EXEMPLE_H_
#define EXEMPLE_H_

#include <iostream>
#include <string>

using namespace std;

class Triangle
{
public:
	Triangle(float base_, float hauteur_, float cote1_, float cote2_) // Constructeur
	{
		base = base_;
		hauteur = hauteur_;
		C1 = cote1_;
		C2 = cote2_;

	};
	~Triangle() // Destructeur
	{
	}

	// Fonction publique : peut etre accédée par l'utilisateur et peut 
	// acceder aux variables privées ainsi qu'aux fontions privées

	void outputAreaT()
	{
		cout << "Area of triangle is " << areaT() << "\n";
	};

	void outputPerimeterT()
	{
		cout << "Perimeter of triangle is " << perimeterT() << "\n";
	};

	float areaT()
	{
		return hauteur * base / 2;
	};

	float perimeterT()
	{
		return C1 + C2 + base;
	};

private:

	// Fonction privée : Ne peut pas être accédée par l'utilisateur, mais peut accéder
	// aux variables privées et aux fonctions publiques
	// Variables privées ou "membres" : peuvent être accédées
	// par les fonctions de la classe

	float base, hauteur, C1, C2;
};

class Rectangle
{
public:
	Rectangle(float longeur_, float largeur_) // Constructeur
	{
		longeur = longeur_;
		largeur = largeur_;

		//id = 'e';
	};
	~Rectangle() // Destructeur
	{
	}

	// Fonction publique : peut etre accédée par l'utilisateur et peut 
	// acceder aux variables privées ainsi qu'aux fontions privées

	void outputAreaR()
	{
		cout << "Area of rectangle is " << areaR() << "\n";
	};

	void outputPerimeterR()
	{
		cout << "Perimeter of rectangle is " << perimeterR() << "\n";

	};

	float areaR()
	{
		return longeur * largeur;
	};

	float perimeterR()
	{
		return longeur + largeur + longeur + largeur;
	};


private:

	// Fonction privée : Ne peut pas être accédée par l'utilisateur, mais peut accéder
	// aux variables privées et aux fonctions publiques
	// Variables privées ou "membres" : peuvent être accédées
	// par les fonctions de la classe
	float longeur, largeur;
};

#endif

