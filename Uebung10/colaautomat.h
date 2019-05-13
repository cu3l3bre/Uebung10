#pragma once




class Colaautomat
{
	// Attribute des Automaten
public:
	const float preis = 1.1;
	int anzahlDosen;

	// Methoden des Automaten
	void fuellen(int);
	void zeigeAnzahlDosen();
	void geldEinwerfen(float);

};