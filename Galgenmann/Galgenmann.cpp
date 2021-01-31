// Galgenmann.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//(c) Stefan Zemann 31.01.2021

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string wort = "GALGENMAENCHEN";
    string loesung;
    int pos;
    char c;
    int versuche = 10;
    int fehlend = wort.length();

    for (unsigned int i = 0; i < wort.length(); i++) {
        loesung.append("_");
    }

    while (1) {
        bool gefunden = false;
        cout << "Folgendes Wort wrird gesucht: " << loesung << " Versuche "<< versuche << endl;

        cin >> c;

        for (unsigned int i = 0; i < wort.length(); i++){
            if (wort.at(i) == c) {
                if (loesung.at(i) == '_') {
                    loesung[i] = c;
                    fehlend--;
                    gefunden = true;
                }
            }

        }
        if (gefunden == false)
            
            versuche--;
        if (fehlend <= 0) {
            cout << "Gewonnen" << endl;
            break;
        }
        if (versuche <= 0) {
            cout << "Verloren" << endl;
            break;
        }
    }
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
