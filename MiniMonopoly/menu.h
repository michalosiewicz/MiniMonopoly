#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include<iostream>
#include"Wyjscie.h"
using namespace sf;

class menu:public Wyjscie
{
public:
	menu();
	~menu();
	void gora(); // zmiana opcji o jedna w góre
	void dol(); // zmiana opcji o jedn¹ w dó³
	void rysuj(RenderWindow &rw); // metoda rysuj¹ca na ekranie
	void zdarzenia(RenderWindow &rw, int &x,int &m); // metoda obs³uguj¹ca dana czeœæ menu
protected:
	Event zdarzenie; // zdarzenia w tej czeœæi menu
	Font styl; // styl czicionki
	FloatRect wymiar; // wymiary napisu
	Text napis[4]; // napisy w menu
	int indeks=1 ; // 1-wieloosobowy , 0-zasady //jaki tryb zaznaczony
};

