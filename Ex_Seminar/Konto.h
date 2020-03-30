
class Konto {

private:

    double Saldo;

public:
    //Konstruktor
    Konto();

    void Bezahlen(const double& Betrag);

    void Einzahlung(const double& Betrag);
    
    double Kontostand(); 
    
    void Transaktion(double Betrag, const char* typ);
    
    void Einlesen();

};

