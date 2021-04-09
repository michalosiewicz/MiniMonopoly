#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include<string>
using namespace sf;
class Gracz
{
public:
	int gotowka = 320; //gotowka w grze
	int posiadlosci=0; //liczba posiad³osci
	void dodaj(std::string s, Color k); // metoda dodaj¹ca gracza
	Gracz();
	~Gracz();
	Color kolor; //kolor gracza
	std::string nazwa; //nazwa gracza
	int pole=0; //jego aktualna pozycja na planszy
};

