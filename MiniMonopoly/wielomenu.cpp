#include "wielomenu.h"



wielomenu::wielomenu()
{
	napis[0].setString(L"Wybierz liczbê graczy");
	napis[0].setFont(styl);
	napis[0].setCharacterSize(40);
	napis[0].setFillColor(Color::Black);
	napis[0].setOutlineThickness(0);
	napis[0].setPosition(400, 50);
	wymiar = napis[0].getLocalBounds();
	napis[0].setOrigin(wymiar.width / 2, wymiar.height);

	liczba[2].loadFromFile("kostka/2.jpg");
	liczby[2].setSize(Vector2f(200.f, 200.f));
	liczby[2].setOutlineThickness(4);
	liczby[2].setOutlineColor(Color::Red);
	liczby[2].setPosition(300, 100);
	liczby[2].setTexture(&liczba[2]);

	liczba[1].loadFromFile("kostka/3.jpg");
	liczby[1].setSize(Vector2f(200.f, 200.f));
	liczby[1].setOutlineColor(Color::Red);
	liczby[1].setPosition(300, 325);
	liczby[1].setTexture(&liczba[1]);

	liczba[0].loadFromFile("kostka/4.jpg");
	liczby[0].setSize(Vector2f(200.f, 200.f));
	liczby[0].setOutlineColor(Color::Red);
	liczby[0].setPosition(300, 550);
	liczby[0].setTexture(&liczba[0]);

	napis[3].setString(L"ESC-wyjdz/wstecz | STRZA£KI-wybór | ENTER-zatwierdz | SPACE-rzuæ kostk¹ | BACKSPACE-cofnij");
	napis[3].setFont(styl);
	napis[3].setCharacterSize(15);
	napis[3].setFillColor(Color::Black);
	napis[3].setPosition(400, 775);
	FloatRect wymiary4 = napis[3].getLocalBounds();
	napis[3].setOrigin(wymiary4.width / 2, wymiary4.height);

	indeks = 2;
}

void wielomenu::gora() {
	if (indeks != 2) {
		liczby[indeks].setOutlineThickness(0);
		indeks++;
		liczby[indeks].setOutlineThickness(4);
	}
}

void wielomenu::dol() {
	if (indeks != 0) {
		liczby[indeks].setOutlineThickness(0);
		indeks--;
		liczby[indeks].setOutlineThickness(4);
	}
}

wielomenu::~wielomenu()
{
}

void wielomenu::zdarzenia(RenderWindow &rw, int &x,int &y,int &z,int &m) {
	if (x == 3) {
		while (rw.pollEvent(zdarzenie)) {

			if (zdarzenie.type == Event::Closed) {
				x = 15;
				m = 3;
			}
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape)
				x = 0;
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Up)
				gora();
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Down)
				dol();
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
				switch (indeks)
				{
				case 0:
					y = 4;
					z = 4;
					break;
				case 1:
					y = 3;
					z = 3;
					break;
				case 2:
					y = 2;
					z = 2;
					break;
				default:
					break;
				}
				x = 4;
			}
		}
		rw.clear(Color::White);
		rw.draw(napis[0]);
		rw.draw(liczby[0]);
		rw.draw(liczby[1]);
		rw.draw(liczby[2]);
		rw.draw(napis[3]);
	}


}