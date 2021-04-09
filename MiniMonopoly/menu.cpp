#include "menu.h"



menu::menu()
{
	styl.loadFromFile("czcionka/czcionka.otf");

	napis[1].setString(L"Tryb gry wieloosobowej");
	napis[1].setFont(styl);
	napis[1].setCharacterSize(40);
	napis[1].setFillColor(Color::Black);
	napis[1].setOutlineThickness(1);
	napis[1].setOutlineColor(Color::Red);
	napis[1].setPosition(400, 300);
	wymiar= napis[1].getLocalBounds();
	napis[1].setOrigin(wymiar.width / 2, wymiar.height);

	napis[0].setString(L"Zasady");
	napis[0].setFont(styl);
	napis[0].setCharacterSize(40);
	napis[0].setFillColor(Color::Black);
	napis[0].setOutlineColor(Color::Red);
	napis[0].setPosition(400, 500);
	wymiar = napis[0].getLocalBounds();
	napis[0].setOrigin(wymiar.width / 2, wymiar.height);

	napis[3].setString(L"ESC-wyjdz/wstecz | STRZA£KI-wybór | ENTER-zatwierdz | SPACE-rzuæ kostk¹ | BACKSPACE-cofnij");
	napis[3].setFont(styl);
	napis[3].setCharacterSize(15);
	napis[3].setFillColor(Color::Black);
	napis[3].setPosition(400, 775);
	FloatRect wymiary4 = napis[3].getLocalBounds();
	napis[3].setOrigin(wymiary4.width / 2, wymiary4.height);

}


menu::~menu()
{
}

void menu::gora() {
	if (indeks != 1) {
		napis[indeks].setOutlineThickness(0);
		indeks++;
		napis[indeks].setOutlineThickness(1);
	}
}

void menu::dol() {
	if (indeks != 0) {
		napis[indeks].setOutlineThickness(0);
		indeks--;
		napis[indeks].setOutlineThickness(1);
	}

}

void menu::rysuj(RenderWindow &rw) {

	rw.draw(napis[3]);
	rw.draw(napis[1]);
	rw.draw(napis[0]);
}

void menu::zdarzenia(RenderWindow &rw, int &x,int &m) {
	if (x == 0) {
		View widok(Vector2f(400.0f, 400.0f), Vector2f(800.0f, 800.0f));
		while (rw.pollEvent(zdarzenie)) {
            if (zdarzenie.type == Event::Closed) {
				m = 0;
				x = 15;
			}
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape) {
				m = 0;
				x = 15;
			}
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Up)
				gora();
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Down)
				dol();
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
				switch (indeks)
				{
				case 0: 
					x = 1; //zasady
					break;
				case 1: 
					x = 3; // wielosobowy
					break;
				default:
					break;
				}
			}

		}
		rw.clear(Color::White);
		rw.setView(widok);
		rysuj(rw);
	}
}