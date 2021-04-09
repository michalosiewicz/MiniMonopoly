#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Nieruchomosc.h"
#include "menu.h"
#include "Zasady.h"
#include "wielomenu.h"
#include "Dodaj_gracza.h"
#include "Gracz.h"
#include "Kolejnosc.h"
#include "Wyjscie.h"
#include <iostream>
#include <time.h>

using namespace sf;


int main()
{
	HWND hWnd = GetConsoleWindow(); //ukrywa okno konsoli
	ShowWindow(hWnd, SW_HIDE); //ukrywa okno konsoli
	srand(time(NULL)); //czas u¿ywany do losowania liczb na kostce
	RenderWindow menu_okno(VideoMode(600,600, 32), "MiniMonopoly"); //okno menu
	menu_okno.setMouseCursorVisible(0);
	RenderWindow wyjscie(VideoMode(400, 200, 32), L"Wyjœcie"); //okno wyjscia z aplikacji
	wyjscie.setMouseCursorVisible(0);
	wyjscie.setFramerateLimit(60);
	wyjscie.setVisible(0);
	int liczba_graczy = 0; //liczba graczy w rozgrywce
	int liczba_graczy2 = 0; //zmiena pomocnicza  
	int scena_menu = 0; // okresla które zdarzenie jest aktualnie obs³ugiwane
	int scena;// zmeina pomocna pomaga wróci z okna wyjscia to wczesnijeszego momentu rozgrywki
	std::string nazwa; //nazwa gracza
	Color kolor; //kolor gracza
	menu tryb; //kosntruktor klasy pierwszego menu tworzy napisy
	Zasady zasada; //konstruktor klasy zasady tworzy napis dla zakladki zasady
	wielomenu wielo; //kosntruktor klasy wielmenu pobiera jpg, wybór liczby graczy
	Dodaj_gracza nazwy; //konstrukor klasy Dodaj gracza tworzy tekst, gracze podaja swoje nazwy oraz kolory
	Gracz gracze[4]; //tworzenie 4 klas gracze dla 4 graczy
	Nieruchomosc pierwsze;//kostruktor klasy nieruchomosc tworzy ca³¹ planszê rozgrywki
	Kolejnosc kolejka; //konstrukor klasy Kolejnosc uk³ada graczy odpowidnio do wyloswanych wartoœci
	Wyjscie koniec;//konstor klasy wyjscie tworzy napisy podczas wyjscia z gry
	menu_okno.setFramerateLimit(60);
	while (menu_okno.isOpen()) //g³ówna pêtla wszytkich menu przed rozpoczêciem samej rozgrywki
	{
		tryb.zdarzenia(menu_okno,scena_menu,scena); //pierwsze menu
		zasada.zdarzenia(menu_okno,scena_menu,scena); //zasady gry
		wielo.zdarzenia(menu_okno, scena_menu,liczba_graczy,liczba_graczy2,scena); //wybór iloœci graczy
		nazwy.zdarzenia(menu_okno, scena_menu,nazwa,kolor,gracze,liczba_graczy2,liczba_graczy,scena); //wpisywanie nazwy graczy oraz koloró
		kolejka.ilosc_graczy(liczba_graczy, gracze); //zlicza liczbe graczy,ich nazw oraz kolorów
		kolejka.zdarzenia(menu_okno, scena_menu, liczba_graczy,gracze,liczba_graczy2,scena);// losuje liczbe, ustawia kolejnoœæ ruchów
		koniec.zdarzenia(scena_menu,wyjscie, menu_okno,scena);// menu wyjscia, wyjdz z gry lub wróc do poprzedniego momentu

			menu_okno.display();
	}
	
	if (scena_menu == 6) {
		RenderWindow gra_okno(VideoMode(1920,1080),"MiniMonopoly", Style::Fullscreen); //okno rozgrywki
		gra_okno.setMouseCursorVisible(0);
		gra_okno.setFramerateLimit(60);
		pierwsze.opis_graczy(gracze, liczba_graczy, 0); // odczyt liczby gracz ich nazw,kolorów
		while (gra_okno.isOpen()) //g³ówna petla rozgrywki
		{
			pierwsze.zdarzenia(gra_okno, scena_menu, liczba_graczy, gracze, liczba_graczy2,scena); //metoda obs³uguj¹ca wszystkie zdarzenia w grze
			koniec.zdarzenia(scena_menu,wyjscie, gra_okno,scena); // menu wyjscia, wyjdz z gry lub wróc do poprzedniego momentu

			gra_okno.display();
		}
	}
	return 0;
}