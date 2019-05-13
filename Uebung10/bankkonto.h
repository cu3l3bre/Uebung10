#pragma once


class Bankkonto
{
private:
	// private Attribute der Klasse
	int kontoNummer;
	float geldBetrag;

	// private Methoden der Klassen
	void zeigeKontonummer();
	void zeigeGeldBetrag();

public:

	void setzeKontonummer(int);
	void setzeGeldBetrag(float);

	void geldEinzahlen(float);
	void geldAbheben(float);

};