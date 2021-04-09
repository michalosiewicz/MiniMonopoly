#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include<string>
#include"menu.h"
#include"Gracz.h"
#include<Windows.h>
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace sf;
class Nieruchomosc : public menu,Gracz
{
	std::string nazwa; //nazwa gracz
	Texture tekstury_ni[24]; // tekstury jpg nieruchomoœæi
	Texture tekstury_na[20]; // tekstury jpg napisów pod nieruchomoœciami
	RectangleShape obrazki[24]; // kszta³ty dla nieruchomoœæi
	RectangleShape napisy[20]; // kszta³ty dla napisów pod nieruchomoœcami
	RectangleShape ramki[24]; // kszta³ty ramek nad nieruchomoœcami ramki zmieniaja kolor w zaleznosci od posiadacza
	RectangleShape linie[4]; // linie w rozgrywce
	CircleShape pionki[4]; // pionki graczy
	Text tekst[4]; // teksty inforamcyjne w grze
	Text gotowka[4]; // gotówki graczy
	Text posiadlosci[4]; // liczba posiad³osci graczy 
	RectangleShape kostka[7]; // kszta³t kostki wylosowanej
	Texture t_kostka[7]; // tekstury jpg kostki do gry z ro¿nej strony
	Text kogo_ruch; // inforamacja kogo aktualnie jest ruch
	Texture textura_o[24]; // tekstru jpg nieruchomosci wyswietlane na srodku ekranu
	RectangleShape obraz[24]; // kszta³ty nieruchomosci wyswietlacnych na srodku ekranu
	int wylosowana; // wyloswana liczba 
	int scena_gry = 0; // zmienia wywsiwetlane rzeczy w grze
	int ceny[24]; // ceny nieruchomosci
	int czynsze[24]; // czynsze nieruchomosci
	int czynsze2[24]; // czynsze nieruchomosci potrzebne w przypadku podniesienia cen nieruchomosci poprzez premie
	int wlasciciele[24]; // wlasciele danych nieruchomosci
	int sprzedaz_nieruchomosci; // cena jaka musimy zaplacic 
	int szansa; // cena jaka musimy zaplacic 
	Text opis_nieruchomosci; // opis kazdej nieruchomosci czynsz cena
	Text opis_zdarzenia; // co aktaulnie sie dzieje w grze
	Text ilosc_czynszu; // ilosc czynszu do zaplaty
	Text legenda; // inforamcje o uzyciu klawiszy
public:
	Nieruchomosc();
	int losuj(); // losuje liczbe jaka sie ruszymy na mapie
	void ruch(int kostka,Gracz &g,CircleShape &pionek,RenderWindow &rw,int liczba); // porusza naszym pionkiem
	void zdarzenia(RenderWindow &rw,int &x,int &liczba_graczy,Gracz g[4],int &z,int &m); //obsluguje wyszstkie zdarzenia w grze
	void opis_graczy(Gracz g[4],int liczba_graczy,int opcja); //nadpisuje inforamcje o graczach
	~Nieruchomosc();
};

