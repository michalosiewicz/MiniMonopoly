#include "Wyjscie.h"



Wyjscie::Wyjscie()
{
	styl.loadFromFile("czcionka/czcionka.otf");

	tekst[0].setString(L"Czy chcesz wyjœæ ?");
	tekst[0].setFont(styl);
	tekst[0].setCharacterSize(30);
	tekst[0].setFillColor(Color::Black);
	tekst[0].setPosition(200,75);
	wymiar = tekst[0].getLocalBounds();
	tekst[0].setOrigin(wymiar.width / 2, wymiar.height);

	tekst[1].setString(L"TAK");
	tekst[1].setFont(styl);
	tekst[1].setCharacterSize(30);
	tekst[1].setFillColor(Color::Black);
	tekst[1].setPosition(100, 150);
	tekst[1].setOutlineColor(Color::Red);
	wymiar = tekst[1].getLocalBounds();
	tekst[1].setOrigin(wymiar.width / 2, wymiar.height);

	tekst[2].setString(L"NIE");
	tekst[2].setFont(styl);
	tekst[2].setCharacterSize(30);
	tekst[2].setFillColor(Color::Black);
	tekst[2].setPosition(300, 150);
	tekst[2].setOutlineColor(Color::Red);
	tekst[2].setOutlineThickness(1);
	wymiar = tekst[2].getLocalBounds();
	tekst[2].setOrigin(wymiar.width / 2, wymiar.height);
}


Wyjscie::~Wyjscie()
{
}

void Wyjscie::zdarzenia(int &x,RenderWindow &rw,RenderWindow &rw2, int m) {
	if (x == 15) {
		rw.setVisible(1);
		Event zdarzenie;
		while (rw.pollEvent(zdarzenie)) {
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Right)
				prawo();
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Left)
				lewo();
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
				if (indeks == 1) {
					rw2.close();
					rw.close();
				}
				if (indeks == 2) {
					x = m;
					rw.setVisible(0);
				}
			}
			rw.clear(Color::White);
			for(int i=0;i<3;i++)
			rw.draw(tekst[i]);
			rw.display();
		}
	}
}

void Wyjscie::prawo() {
	if (indeks != 2) {
		tekst[indeks].setOutlineThickness(0);
		indeks++;
		tekst[indeks].setOutlineThickness(1);
	}
}

void Wyjscie::lewo() {
	if (indeks != 1) {
		tekst[indeks].setOutlineThickness(0);
		indeks--;
		tekst[indeks].setOutlineThickness(1);
	}
}
