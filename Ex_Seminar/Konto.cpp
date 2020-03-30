#include <fstream>
#include <iostream>
#include "Konto.h"
using namespace std;
Konto::Konto()
{
    this->Saldo = 0;
}

void Konto::Bezahlen(const double& Betrag) {
    Saldo = Saldo - Betrag;
    Transaktion(Betrag, "OUT");
}

void Konto::Einzahlung(const double& Betrag)
{
    Saldo = Saldo + Betrag;
    Transaktion(Betrag, "IN");
}

double Konto::Kontostand() {
    return Saldo;
}

void Konto::Transaktion(double Betrag, const char* typ) {
    ofstream g("TextFile2.txt");
    g << typ << " " << Betrag << "\n";
}
void Konto::Einlesen() {
    ifstream f("TextFile2.txt");
    string Typ;
    double Betrag;
    while (f >> Typ >> Betrag)
        cout << Typ << " " << Betrag << "\n";
}