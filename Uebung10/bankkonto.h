#pragma once
#include <string>

class Bankkonto
{
private:
	// private Attribute der Klasse
	const int MAX_KONTEN = 3;
	std::string NameBesitzer;
	int kontoNummer;
	float geldBetrag;



public:
	int kontoId;

	void bankkonto();

	void menueKontostandAbfragen();
	void menueGeldAbheben();
	void menueGeldEinzahlen();
	char menueSitzungBeenden();


	void zeigeKontonummer();
	int getKontonummer();
	void zeigeGeldBetrag();
	void zeigeNamen();

	std::string getName();

	int findeKontonummer(int, Bankkonto*);
	void setzeBesitzername(std::string);



	void setzeKontonummer(int);
	void setzeGeldBetrag(float);

	void geldEinzahlen(float);
	void geldAbheben(float);

};