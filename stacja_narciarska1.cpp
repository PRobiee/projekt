#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Klasa reprezentująca karnet
class Karnet {
private:
    string numer;
    bool czyWazny;

public:
    Karnet(string numer) : numer(numer), czyWazny(true) {}

    // Metoda sprawdzająca ważność karnetu
    bool czyWaznyKarnet() {
        return czyWazny;
    }

    // Metoda ustawiająca karnet jako nieważny
    void ustawKarnetNieWazny() {
        czyWazny = false;
    }
};

// Klasa reprezentująca kasę
class Kasa {
private:
    vector<Karnet> karnety;

public:
    // Metoda do zakupu karnetu
    void kupKarnet(string numerKarnetu) {
        Karnet nowyKarnet(numerKarnetu);
        karnety.push_back(nowyKarnet);
        cout << "Karnet zakupiony: " << numerKarnetu << endl;
    }

    // Metoda do sprawdzania ważności karnetu
    bool sprawdzKarnet(string numerKarnetu) {
        for (Karnet& k : karnety) {
            if (k.czyWaznyKarnet() && k.numer == numerKarnetu) {
                k.ustawKarnetNieWazny();
                return true;
            }
        }
        return false;
    }
};

// Klasa reprezentująca bramki
class Bramki {
public:
    // Metoda do kontroli dostępu na wyciąg
    static bool sprawdzBramke(Kasa& kasa, string numerKarnetu) {
        if (kasa.sprawdzKarnet(numerKarnetu)) {
            cout << "Wjazd na wyciąg udzielony. Miłego narciarstwa!" << endl;
            return true;
        } else {
            cout << "Brak ważnego karnetu. Dostęp zabroniony!" << endl;
            return false;
        }
    }
};

int main() {
    Kasa kasa;
    // Symulacja zakupu karnetów
    kasa.kupKarnet("1234");
    kasa.kupKarnet("5678");

    // Symulacja kontroli dostępu na wyciąg
    Bramki::sprawdzBramke(kasa, "1234");
    Bramki::sprawdzBramke(kasa, "5678");
    Bramki::sprawdzBramke(kasa, "91011");

    return 0;
}
