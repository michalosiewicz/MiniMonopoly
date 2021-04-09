#pragma once
#include"wielomenu.h"
#include"Gracz.h"
class Dodaj_gracza: public Gracz,wielomenu
{
public:
	void zdarzenia(RenderWindow &rw, int &x, std::string &str,Color &kolor,Gracz g[4],int &liczba_graczy,int &z,int &m);
	// metoda obs�uguj�ca dodawanie graczy ich nazwy oraz kolory
	void prawo(); //zmiana wybierane koloru w prawo
	void lewo(); //zmiana wybierane koloru w lewo
	Dodaj_gracza();
	~Dodaj_gracza();
private:
	int scena = 0; //co aktulnie rysujemy w naszym oknie
	int indeks_kolor = 0; //ktory kolor jest obecnie zaznaczony
	Texture obraz[4]; //obrazy jpg kolor�w
	Texture kolorX[4]; //obraz jpg przekreslonych kolor�w
	RectangleShape kolory[4]; //kszta�t dla obrazu jpg
	Text legenda; // instrukcja przycisk�w
};

