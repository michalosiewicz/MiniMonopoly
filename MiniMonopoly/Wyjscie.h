#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include<iostream>

using namespace sf;

class Wyjscie
{
	Text tekst[3]; // tekst wyswietlany po probie wyjscia z gry
	Font styl; // czcionka tekstu
	FloatRect wymiar; // wymiary tekstu
	int indeks = 2; // zazanczona opcja
	int stare_okno; // stary numer ktory mowi jakie bylo wczesniej wykonywane zdarzenie
public:
	void prawo(); // zaznaczenie opcji o jedna w prawo
	void lewo(); // zaznaczenie opcji o jedno w lewo
	void zdarzenia(int&x, RenderWindow &rw,RenderWindow &rw2,int m); // obsuluguje zdarzenia podczas ekranu wyjscia
	Wyjscie();
	~Wyjscie();
};

