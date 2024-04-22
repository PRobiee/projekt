#include <iostream>
#include <cmath>
#include "Windows.h"
#include <vector>

using namespace std;

class Karnet{
private:
    int numer;
    int rok;
    int miesiac;
    int dzien;
    int godzina;
    int minuta;
    int sekunda;

public: 
    Karnet(int numer, int rok, int miesiac, int dzien, int godzina, int minuta, int sekunda) 
    : numer(numer), rok(rok), miesiac(miesiac), dzien(dzien), godzina(godzina), minuta(minuta), sekunda(sekunda) {}
    static vector<Karnet> karnety;
};  

class Kasa{
private:

public:
   void karnetOkresowy(){
        //inicjalizacja daty waznosci karnetu
        //do wyboru kilka mozliwosci okresow przejazdow
    }

    void karnetPrzejazdowy(){
        //inicjalizajca ilosci przejazdow
        //do wyboru kilka mozliwosci ilosci przejazdow
    }

    void kupKarnet(){
        // switch(n) {
        // case 1:
        // karnetOkresowy();
        // case 2: 
        // karnetPrzejazdowy();
        // }

        //nie mozna kupic jesli za duzo osob jezdzi na stoku
    }

    void zwrocKarnet(){
        //zwrot kaucji za karnet oraz usuniecie karnetu z bazy
    }


    void zaplac(){
        //platnosc bilonami i wydanie reszty 
    }
    

};

class Bramki{
private:
    ////
public:
    void otworzBramke(){
        //jesli karnet wazny -> otworz, jesli nie -> nie otwieraj
    }

    void sprawdzWaznosc(){
        //Sprawdza pozostala ilosc przejazdow albo czas
    }

};

class User{
private:
    string imie;
    string nazwisko;
    int numerKarnetu;

public:
    User(string im, string naz, int nr) : imie(im), nazwisko(naz), numerKarnetu(nr) {}
    static vector<User> uzytkownicy;

};

class Admin{
private:
    string login;
    string haslo;

public:
    Admin(string login, string haslo) : login(login), haslo(haslo) {}

    void dodajAdmin(){
        //dodawanie innych adminow
    }

    void dodajKarnet(){
        //dodaje karnet bez koniecznosci placenia
    }

    void zmienCene(){
        //zmiana ceny wybranego karnetu
    }

    void usunKarnet(){
        //usuwanie karnetow 
    }
    
    void zmodyfikujKarnet(){
        //modyfikacja karnetow
    }

    void liczbaOsob(){
        //wyswotla liczbe osob na stoku
    }

    void dodajUzytkownika(){
        //dodawanie uzytkownikow
    }

    void usunUzytkownika(){
        //usuwanie uzytkownikow
    }

};


int main() {
    SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

    return 0;
}