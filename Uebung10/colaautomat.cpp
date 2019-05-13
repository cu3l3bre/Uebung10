#include <iostream>
#include "colaautomat.h"



// Mehtoden des colaautomaten

void Colaautomat::fuellen(int anzahl)
{
	anzahlDosen = anzahl;
}

void Colaautomat::zeigeAnzahlDosen()
{

	std::cout << "Die Menge der Dosen im Automat ist: " << anzahlDosen << std::endl;

}

void Colaautomat::geldEinwerfen(float geldeinwurf)
{
	if (anzahlDosen > 1)
	{

		if (geldeinwurf == preis)
		{
			std::cout << "Ausgabe erfolgt" << std::endl;
			anzahlDosen = anzahlDosen - 1;

		}
		else if (geldeinwurf < preis)
		{
			std::cout << "Sie muessen noch " << (preis - geldeinwurf) << " Euro einwerfen" << std::endl;
		}
		else
		{
			std::cout << "Ausgabe erfolgt! Ihr Restbetrag ist: " << (geldeinwurf - preis) << " Euro." << std::endl;

		}
	}
	else
	{
		std::cout << "Der Automat ist leer :(" << std::endl;
	}

}