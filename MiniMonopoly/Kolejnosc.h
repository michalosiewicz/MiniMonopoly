#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include"menu.h"
#include"Gracz.h"
#include <algorithm>
#include<time.h>
#include<Windows.h>
using namespace sf;

class Kolejnosc: public menu,Gracz
{
	Text nazwy[4]; // nazwy graczy
	Text opis; // opis tej czeœæi menu
	RectangleShape kostki[4]; // kszta³ty dla 4 kostek
	Texture textura[4]; // tekstury kostek jpg
	int scena_kolejnosc=0; // co aktualnie rysujemy
	int wylsowane[4]; // wylosowane liczby
public:
	Kolejnosc();
	int losuj(); // losuje liczbe z przedia³u od 1 do 6
	void ilosc_graczy(int liczba_graczy,Gracz g[4]); //sprawdza liczbê graczy
	void zdarzenia(RenderWindow &rw, int &x, int liczba_graczy,Gracz g[4],int &z,int &m); //obs³uguje t¹ czeœæ menu
	~Kolejnosc();
};

