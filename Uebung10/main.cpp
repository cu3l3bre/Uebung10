/*
Cola - Automat

Erstellen Sie eine eigene Klasse, die einen Colaautomaten darstellen soll.Dieser soll ein Attribut besitzen, welches die Anzahl der verfügbaren Dosen enthält.
1. Schreiben Sie eine Methode „fuellen“, mit welcher die Dosenanzahl auf den übergebenen Wert gesetzt wird.
2. Ergänzen Sie die Klasse um eine konstante Variable „preis“, die den Verkaufspreis von einer Dose von 1 € und 10 Cent definiert.
3. Schreiben Sie eine Methode „geldEinwerfen“ mit einem Parameter, welche den Dosenverkauf simulieren soll.Ist der eingeworfene Betrag genau 1, 10 € soll eine Meldung ausgeben werden, dass eine Dose Cola verkauft wurde und die Anzahl der Dosen wird um 1 verringert.Bei höherem Betrag soll zusätzlich noch eine Meldung mit dem Restgeldbetrag auf der Konsole angezeigt werden.Ist der Betrag zu gering, soll nur eine entsprechende Meldung erscheinen.
4. Prüfen Sie nun zusätzlich, ob noch genug Dosen im Automat vorhanden sind und geben Sie eine Rückmeldung an den Anwender, wenn dies nicht der Fall ist.


Klasse für Bankkonto

Schreiben Sie ein Programm mit einer Klasse „Konto“, das ein Bankkonto simulieren soll. Diese Klasse soll die privaten Attribute „kontoNummer“ und „geldBetrag“ besitzen.
1. Fügen Sie dem Programm eine Header- und eine Quellcode-Datei für diese Klasse hinzu.
2. Deklarieren Sie in der Schnittstelle (Headerdatei) Methoden, die die Werte der beiden Attribute zurückgeben, bzw. auf einen bestimmten Wert setzen. Implementieren Sie diese Methoden in der Quellcode Datei der Klasse.
3. Fügen Sie Ihrer Klasse nun Methoden hinzu, um einen Geldbetrag einzuzahlen, bzw. abzuheben. Achten Sie darauf, dass der Kontostand nicht unter 0€ fallen darf. Geben Sie dabei bei jeder Transaktion auf der Konsole aus, wieviel Geld eingezahlt/abgehoben wurde und welcher Geldbetrag noch auf dem Konto verfügbar ist.
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

	ca1.anzahlDosen = 3;

	ca1.zeigeAnzahlDosen();

	//ca1.fuellen(ca1.anzahlDosen);
	//so wäre das ja deoppelt gemoppelt mit zeile 53, wo der wert der variable
	// direkt gesetzt wird
	
	
	ca1.fuellen(1);
	ca1.zeigeAnzahlDosen();

	ca1.geldEinwerfen(1.2);
	ca1.zeigeAnzahlDosen();


	cout << endl << endl;



	// Aufgabe 2
	const int AnzahlKonten = 2;

	char anwendungweiter = 'j';
	int eingabekontonummer = 0;
	int auswahl = 0;
	int IndexKonto = 0;
	
	Bankkonto konto[AnzahlKonten];


	konto[0].setzeBesitzername("Max");
	konto[0].setzeKontonummer(1111);
	konto[0].setzeGeldBetrag(100);

	konto[1].setzeBesitzername("Maxine");
	konto[1].setzeKontonummer(2222);
	konto[1].setzeGeldBetrag(100);


	cout << "Bitte melden Sie sich mit Ihrer Kontonummer an:";

	//while (anwendungweiter == 'j')
	//{
	cin >> eingabekontonummer;

	/*int id = 0;
	id = konto[1].findeKontonummer(eingabekontonummer,konto);

	cout << "ID ist: " << id << endl;*/



	for (int i = 0; i < AnzahlKonten; i++)
	{
		if (konto[i].getKontonummer() == eingabekontonummer)
		{
			cout << "Konto wurde gefunden!" << endl;
			IndexKonto = i;
		}

	}


	cout << "Hallo " << konto[IndexKonto].getName() << endl;
	cout << "Was moechtest du tun?" << endl;
	cout << "1) Kontostand abfragen" << endl;
	cout << "2) Geld abheben" << endl;
	cout << "3) Geld einzahlen" << endl;
	cout << "4) Sitzung beenden" << endl;
	cout << "Treffen Sie eine Auswahl: ";
	cin >> auswahl;

		
	switch (auswahl)
	{
	case 1: konto[IndexKonto].menueKontostandAbfragen(); break;
	case 2: konto[IndexKonto].menueGeldAbheben(); break;
	case 3: konto[IndexKonto].menueGeldEinzahlen(); break;
	case 4: break;
	default:
		break;
	}




	//}




	
	Bankkonto meinKonto;

	meinKonto.setzeKontonummer(1234567890);

	meinKonto.setzeGeldBetrag(0);
	
	//meinKonto.zeigeGeldBetrag(); // ist zum test als privat deklariert, dh ich kann die hier so nicht nutzen


	meinKonto.geldEinzahlen(200);
	meinKonto.geldAbheben(50);
	meinKonto.geldEinzahlen(30.50);
	meinKonto.geldAbheben(190);


	//meinKonto.bankkonto();	// könnte man alles auch in eine art main function der klasse machen 


	system("pause");
	return 0;
}