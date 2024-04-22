#include <iostream>
#include <cmath> 

using namespace std;
//giganiga
int main() {
    int wybor;
    double bok, promien;
    int kontynuuj == 1


    while(kontynuuj){
    cout << "Menu:\n";
    cout << "1. Oblicz pole powierzchni kola\n";
    cout << "2. Oblicz pole powierzchni kwadratu\n";
    cout << "Wybierz opcje: ";
    cin >> wybor;

    switch(wybor) {
        case 1:

            cout << "Podaj promien kola: ";
            cin >> promien;
            if (promien <= 0) {
                cout << "Promien musi byc dodatni.\n";
            } else {
                cout << "Pole powierzchni kola wynosi: " << M_PI * promien * promien << endl;
            }
            break;
        case 2:
            cout << "Podaj dlugosc boku kwadratu: ";
            cin >> bok;
            if (bok <= 0) {
                cout << "Dlugosc boku musi być dodatnia.\n";
            } else {
                cout << "Pole powierzchni kwadratu wynosi: " << bok * bok << endl;
            }
            break;
        default:
            cout << "Niepoprawny wybor.\n";
            break;
            case 3:
            kontynuuj = 0
            break;
        default:

            cout << "Blad" << endl;

    break;
    }
    }

    return 0;
}