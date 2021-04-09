#pragma once
#include"wielomenu.h"
#include"Gracz.h"
class Dodaj_gracza: public Gracz,wielomenu
{
public:
	void zdarzenia(RenderWindow &rw, int &x, std::string &str,Color &kolor,Gracz g[4],int &liczba_graczy,int &z,int &m);
	// metoda obs³uguj¹ca dodawanie graczy ich nazwy oraz kolory
	void prawo(); //zmiana wybierane koloru w prawo
	void lewo(); //zmiana wybierane koloru w lewo
	Dodaj_gracza();
	~Dodaj_gracza();
private:
	int scena = 0; //co aktulnie rysujemy w naszym oknie
	int indeks_kolor = 0; //ktory kolor jest obecnie zaznaczony
	Texture obraz[4]; //obrazy jpg kolorów
	Texture kolorX[4]; //obraz jpg przekreslonych kolorów
	RectangleShape kolory[4]; //kszta³t dla obrazu jpg
	Text legenda; // instrukcja przycisków
};

