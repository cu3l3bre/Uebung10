/*
Cola - Automat

Erstellen Sie eine eigene Klasse, die einen Colaautomaten darstellen soll.Dieser soll ein Attribut besitzen, welches die Anzahl der verf�gbaren Dosen enth�lt.
1. Schreiben Sie eine Methode �fuellen�, mit welcher die Dosenanzahl auf den �bergebenen Wert gesetzt wird.
2. Erg�nzen Sie die Klasse um eine konstante Variable �preis�, die den Verkaufspreis von einer Dose von 1 � und 10 Cent definiert.
3. Schreiben Sie eine Methode �geldEinwerfen� mit einem Parameter, welche den Dosenverkauf simulieren soll.Ist der eingeworfene Betrag genau 1, 10 � soll eine Meldung ausgeben werden, dass eine Dose Cola verkauft wurde und die Anzahl der Dosen wird um 1 verringert.Bei h�herem Betrag soll zus�tzlich noch eine Meldung mit dem Restgeldbetrag auf der Konsole angezeigt werden.Ist der Betrag zu gering, soll nur eine entsprechende Meldung erscheinen.
4. Pr�fen Sie nun zus�tzlich, ob noch genug Dosen im Automat vorhanden sind und geben Sie eine R�ckmeldung an den Anwender, wenn dies nicht der Fall ist.


Klasse f�r Bankkonto

Schreiben Sie ein Programm mit einer Klasse �Konto�, das ein Bankkonto simulieren soll. Diese Klasse soll die privaten Attribute �kontoNummer� und �geldBetrag� besitzen.
1. F�gen Sie dem Programm eine Header- und eine Quellcode-Datei f�r diese Klasse hinzu.
2. Deklarieren Sie in der Schnittstelle (Headerdatei) Methoden, die die Werte der beiden Attribute zur�ckgeben, bzw. auf einen bestimmten Wert setzen. Implementieren Sie diese Methoden in der Quellcode Datei der Klasse.
3. F�gen Sie Ihrer Klasse nun Methoden hinzu, um einen Geldbetrag einzuzahlen, bzw. abzuheben. Achten Sie darauf, dass der Kontostand nicht unter 0� fallen darf. Geben Sie dabei bei jeder Transaktion auf der Konsole aus, wieviel Geld eingezahlt/abgehoben wurde und welcher Geldbetrag noch auf dem Konto verf�gbar ist.
4. Testen Sie Ihre Methoden im Hauptprogramm z.B. mit folgenden Aufrufen:

Konto meinKonto;

meinKonto.setzeNummer(1234567890);
meinKonto.setzeBetrag(0);

meinKonto.geldEinzahlen(200);

meinKonto.geldAbheben(50);

meinKonto.geldEinzahlen(30.50);

meinKonto.geldAbheben(500); //Hier sollte eine Meldung kommen...

std::system("pause");




*/

#include <iostream>
#include "colaautomat.h"
#include "bankkonto.h"

using namespace std;


int main()
{
	cout << "Programm zu Uebung10 " << endl << endl;


	// Anlegen des Objektes der Klasse Colaautomat

	// Aufgabe 1 
	Colaautomat ca1;

	ca1.anzahlDosen = 0;

	ca1.zeigeAnzahlDosen();
	ca1.fuellen(0);
	ca1.zeigeAnzahlDosen();

	ca1.geldEinwerfen(0.9);
	ca1.zeigeAnzahlDosen();




	cout << endl << endl;


	// Aufgabe 2

	Bankkonto meinKonto;

	meinKonto.setzeKontonummer(1234567890);
	meinKonto.setzeGeldBetrag(0);
	
	//meinKonto.zeigeGeldBetrag(); // ist zum test als privat deklariert, dh ich kann die so nicht nutzen



	meinKonto.geldEinzahlen(200);
	meinKonto.geldAbheben(50);
	meinKonto.geldEinzahlen(30.50);
	meinKonto.geldAbheben(200);

	system("pause");
	return 0;
}