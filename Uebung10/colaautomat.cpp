#include <iostream>
#include "colaautomat.h"



// Mehtoden des colaautomaten


// Methode zum Fuellen mit Anzahl Dosen
void Colaautomat::fuellen(int anzahl)
{
	anzahlDosen = anzahl;
}


// Methode zum Anzeigen der Anzahl Dosen
void Colaautomat::zeigeAnzahlDosen()
{
	std::cout << "Die Menge der Dosen im Automat ist: " << anzahlDosen << std::endl;
}


// Methode zum Geldeinwurf und Ausgabe
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