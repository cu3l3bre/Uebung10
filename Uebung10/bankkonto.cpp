
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
	 setzeKontonummer(1234567890);
	 Bankkonto::setzeGeldBetrag(0);
	 Bankkonto::geldEinzahlen(200);
	 Bankkonto::geldAbheben(50);
	 Bankkonto::geldEinzahlen(30.50);
	 Bankkonto::geldAbheben(190);
}



// Methode zum Setzen der Kontonummer 
// TODO sollte man die klasse vor eine variable davor schreiben?
// kann man, muss man nicht in generell
// aber hier hab ich das mal so gemacht weil ich den name kontoNummer 2 mal benutze für unterschiedeliche Variablen
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



// Methode zum Setzen eines Names fuer den Besitzer des Kontos
void Bankkonto::setzeBesitzername(std::string Name)
{
	NameBesitzer = Name;
}

// Methode zum Anzeigen des Besitzers des Kontos
void Bankkonto::zeigeNamen()
{
	std::cout << NameBesitzer << std::endl;

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


int Bankkonto::findeKontonummer(int eingabekontonummer, Bankkonto* Konten)
{
	int id = 0;

	for (int i = 0; i < MAX_KONTEN; i++)
	{
		if (Konten[i].kontoNummer == eingabekontonummer)
		{
			id = i;

		}

	}
	return id;
}


// Methode zum Getten des Names des Besitzers
std::string Bankkonto::getName()
{
	return NameBesitzer;
}


// Methode zum Getten der Kontonummer
int Bankkonto::getKontonummer()
{
	return kontoNummer;
}




void Bankkonto::menueKontostandAbfragen()
{
	std::cout << "Konotstand abfragen" << std::endl;
	zeigeGeldBetrag();
}



void Bankkonto::menueGeldAbheben()
{
	float eingabeGeldbetrag = 0.0;
	std::cout << "Geld abheben" << std::endl;
	std::cout << "Wieviel moechtest du abheben?: ";
	std::cin >> eingabeGeldbetrag;
	geldAbheben(eingabeGeldbetrag);
}


void Bankkonto::menueGeldEinzahlen()
{
	float eingabeGeldbetrag = 0.0;
	std::cout << "Geld einzahlen" << std::endl;
	std::cout << "Wieviel moechtest du einzahlen?: ";
	std::cin >> eingabeGeldbetrag;
	geldEinzahlen(eingabeGeldbetrag);

}