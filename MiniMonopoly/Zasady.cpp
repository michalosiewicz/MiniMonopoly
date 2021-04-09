#include "Zasady.h"



Zasady::Zasady()
{
	napis[0].setString(L"Zasady :");
	napis[0].setFont(styl);
	napis[0].setCharacterSize(40);
	napis[0].setFillColor(Color::Black);
	napis[0].setPosition(400,75);
	wymiar = napis[0].getLocalBounds();
	napis[0].setOrigin(wymiar.width / 2, wymiar.height);

	napis[1].setString(L"Zasady s¹ proste jak w podstawowej grze Monopoly.");
	napis[1].setFont(styl);
	napis[1].setCharacterSize(25);
	napis[1].setFillColor(Color::Black);
	napis[1].setOutlineThickness(0);
	napis[1].setPosition(400, 150);
	wymiar = napis[1].getLocalBounds();
	napis[1].setOrigin(wymiar.width / 2, wymiar.height);

	napis[2].setString(L"Czynsze zwiêkszaj¹ siê maj¹c nieruchomoœci danego koloru.");
	napis[2].setFont(styl);
	napis[2].setCharacterSize(25);
	napis[2].setFillColor(Color::Black);
	napis[2].setOutlineThickness(0);
	napis[2].setPosition(400, 225);
	wymiar = napis[2].getLocalBounds();
	napis[2].setOrigin(wymiar.width / 2, wymiar.height);

	napis[3].setString(L"Brak domków, wiêzienia, handlu miêdzy graczami.");
	napis[3].setFont(styl);
	napis[3].setCharacterSize(25);
	napis[3].setFillColor(Color::Black);
	napis[3].setOutlineThickness(0);
	napis[3].setPosition(400, 300);
	wymiar = napis[3].getLocalBounds();
	napis[3].setOrigin(wymiar.width / 2, wymiar.height);

	info[0].setString(L"Sprzedaj¹c nieruchomoœæ otrzymasz 80% jej ceny.");
	info[0].setFont(styl);
	info[0].setCharacterSize(25);
	info[0].setFillColor(Color::Black);
	info[0].setOutlineThickness(0);
	info[0].setPosition(400, 375);
	wymiar = info[0].getLocalBounds();
	info[0].setOrigin(wymiar.width / 2, wymiar.height);

	info[1].setString(L"Sprzeda¿ nieruchomoœci jest tylko mo¿liwa przy braku gotówki.");
	info[1].setFont(styl);
	info[1].setCharacterSize(25);
	info[1].setFillColor(Color::Black);
	info[1].setOutlineThickness(0);
	info[1].setPosition(400, 450);
	wymiar = info[1].getLocalBounds();
	info[1].setOrigin(wymiar.width / 2, wymiar.height);

	info[2].setString(L"Na szansie mo¿na otrzymac lub staraciæ po 50/25 M");
	info[2].setFont(styl);
	info[2].setCharacterSize(25);
	info[2].setFillColor(Color::Black);
	info[2].setOutlineThickness(0);
	info[2].setPosition(400, 525);
	wymiar = info[2].getLocalBounds();
	info[2].setOrigin(wymiar.width / 2, wymiar.height);

	info[3].setString(L"Przechodz¹c przez start otrzymasz 80 M");
	info[3].setFont(styl);
	info[3].setCharacterSize(25);
	info[3].setFillColor(Color::Black);
	info[3].setOutlineThickness(0);
	info[3].setPosition(400, 600);
	wymiar = info[3].getLocalBounds();
	info[3].setOrigin(wymiar.width / 2, wymiar.height);
}


Zasady::~Zasady()
{
}

void Zasady::zdarzenia(RenderWindow &rw,int &x,int &m) {
	if (x==1) {
		while (rw.pollEvent(zdarzenie)) {

			if (zdarzenie.type == Event::Closed) {
				x = 15;
				m = 1;
			}
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape)
				x = 0;
		}
		rw.clear(Color::White);
		rw.draw(napis[0]);
		rw.draw(napis[1]);
		rw.draw(napis[2]);
		rw.draw(napis[3]);
		rw.draw(info[0]);
		rw.draw(info[1]);
		rw.draw(info[2]);
		rw.draw(info[3]);
	}
}