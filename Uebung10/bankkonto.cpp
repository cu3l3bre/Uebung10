
#include <iostream>
#include "bankkonto.h"


//**********************************************************************************
// private Methoden
//**********************************************************************************


// Methode zum Anzeigen des akutllen Geldbetrages in der Konsole
void Bankkonto::zeigeGeldBetrag()
{
	std::cout << "Der aktuelle Geldbetrag lautet: " << geldBetrag << std::endl << std::endl;;
}


// Methode zum Anzeigen der Kontonummer in der Konsole
void Bankkonto::zeigeKontonummer()
{
	std::cout << "Die Kontonummer lautet: " << kontoNummer << std::endl;
}



//**********************************************************************************
// public Methoden
//**********************************************************************************

// Main Methode der Bankkonto-Klassen
void Bankkonto::bankkonto()
{
	 Bankkonto::setzeKontonummer(1234567890);
	 Bankkonto::setzeGeldBetrag(0);
	 Bankkonto::geldEinzahlen(200);
	 Bankkonto::geldAbheben(50);
	 Bankkonto::geldEinzahlen(30.50);
	 Bankkonto::geldAbheben(190);
}



// Methode zum Setzen der Kontonummer 
// TODO sollte man die klasse vor eine variable davor schreiben?
void Bankkonto::setzeKontonummer(int kontoNummer)
{
	Bankkonto::kontoNummer = kontoNummer;
	zeigeKontonummer();
}


// Methode zum Setzen des Geldbetrages
void Bankkonto::setzeGeldBetrag(float betrag)
{
	geldBetrag = betrag;
	zeigeGeldBetrag();
}


// Methode zum Einzahlen eines Geldbetrages
void  Bankkonto::geldEinzahlen(float einzahlung)
{
	std::cout << "Sie haben " << einzahlung << " Euro eingezahlt" << std::endl;
	geldBetrag = geldBetrag + einzahlung;

	zeigeGeldBetrag(); // ist zZ als private deklariert, d.h. ich kann die nur hier nutzen
}


// Methode zum Abheben eines Geldbetrages
void Bankkonto::geldAbheben(float abhebung)
{
	if (geldBetrag >= abhebung)
	{

		std::cout << "Sie haben " << abhebung << " Euro abgehoben" << std::endl;
		geldBetrag = geldBetrag - abhebung;

		zeigeGeldBetrag();	// ist zZ als private deklariert, d.h. ich kann die nur hier nutzen
	}
	else
	{
		std::cout << "Sie koennen keine " << abhebung << " Euro abeheben" << std::endl;
		std::cout << "Sie koennen maximal " << geldBetrag << " Euro abeheben" << std::endl;
	}
}

