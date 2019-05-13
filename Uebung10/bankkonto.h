#pragma once


class Bankkonto
{
private:
	int kontoNummer;
	float geldBetrag;


	void zeigeGeldBetrag();
public:

	void setzeKontonummer(int);
	void setzeGeldBetrag(float);
	void zeigeKontonummer();
	void geldEinzahlen(float);
	void geldAbheben(float);

};