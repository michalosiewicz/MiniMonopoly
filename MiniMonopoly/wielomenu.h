#pragma once
#include"menu.h"
class wielomenu: public menu
{
public:
	void zdarzenia(RenderWindow &rw, int &x,int &y,int &z,int&m); //oblsuguje wszystkie zdarzenia w tej czesci menu
	void gora(); // zmiana opcja na jedna wyzej
	void dol(); // zmiana opcji na jedna nizej
	wielomenu();
	~wielomenu();
private:
	Texture liczba[3]; // tekstury jpg kostek
	RectangleShape liczby[3]; // kszta³aty dla kostek
};

