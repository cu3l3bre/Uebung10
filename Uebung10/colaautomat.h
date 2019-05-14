#pragma once


class Colaautomat
{
	// Attribute des Automaten
public:
	const float preis = 1.1;
	int anzahlDosen = 0;

	// Methoden des Automaten
	void fuellen(int);
	void zeigeAnzahlDosen();
	void geldEinwerfen(float);
	void dekrementiereAnzahl();

};