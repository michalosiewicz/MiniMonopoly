#include "Kolejnosc.h"



Kolejnosc::Kolejnosc()
{
	opis.setString(L"Kolejnoœæ w grze");
	opis.setFont(styl);
	opis.setCharacterSize(40);
	opis.setFillColor(Color::Black);
	wymiar = opis.getLocalBounds();
	opis.setOrigin(wymiar.width / 2, wymiar.height);
	opis.setPosition(400,50);

	napis[3].setString(L"ESC-wyjdz/wstecz | STRZA£KI-wybór | ENTER-zatwierdz | SPACE-rzuæ kostk¹ | BACKSPACE-cofnij");
	napis[3].setFont(styl);
	napis[3].setCharacterSize(15);
	napis[3].setFillColor(Color::Black);
	napis[3].setPosition(400, 775);
	FloatRect wymiary4 = napis[3].getLocalBounds();
	napis[3].setOrigin(wymiary4.width / 2, wymiary4.height);

	napis[2].setString(L"Ka¿dy gracz rzuca kostk¹ naciskaj¹c SPACE");
	napis[2].setFont(styl);
	napis[2].setCharacterSize(30);
	napis[2].setFillColor(Color::Black);
	napis[2].setOutlineThickness(0);
	napis[2].setPosition(400, 125);
	wymiary4 = napis[2].getLocalBounds();
	napis[2].setOrigin(wymiary4.width / 2, wymiary4.height);
}

void Kolejnosc::zdarzenia(RenderWindow &rw, int &x, int liczba,Gracz g[4],int &z,int &m) {
	if (x == 5) {
		while (rw.pollEvent(zdarzenie)) {
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape){
				x = 15;
				m = 5;
			}
			if (zdarzenie.type == Event::Closed) {
				x = 15;
				m = 5;
			}
			if (scena_kolejnosc == 0) {
				if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Space) {
					switch (losuj())
					{
					case 1:
						textura[z-1].loadFromFile("kostka/1.jpg");
						kostki[z-1].setTexture(&textura[z-1]);
						wylsowane[z - 1] = 1;
						scena_kolejnosc = 1;
						break;
					case 2:
						textura[z - 1].loadFromFile("kostka/2.jpg");
						kostki[z-1].setTexture(&textura[z - 1]);
						wylsowane[z - 1] = 2;
						scena_kolejnosc = 1;
						break;
					case 3:
						textura[z - 1].loadFromFile("kostka/3.jpg");
						kostki[z-1].setTexture(&textura[z - 1]);
						wylsowane[z - 1] = 3;
						scena_kolejnosc = 1;
						break;
					case 4:
						textura[z - 1].loadFromFile("kostka/4.jpg");
						kostki[z-1].setTexture(&textura[z - 1]);
						wylsowane[z - 1] = 4;
						scena_kolejnosc = 1;
						break;
					case 5:
						textura[z - 1].loadFromFile("kostka/5.jpg");
						kostki[z-1].setTexture(&textura[z - 1]);
						wylsowane[z - 1] = 5;
						scena_kolejnosc = 1;
						break;
					case 6:
						textura[z - 1].loadFromFile("kostka/6.jpg");
						kostki[z-1].setTexture(&textura[z - 1]);
						wylsowane[z - 1] = 6;
						scena_kolejnosc = 1;
						break;
					default:
						break;
					}
				}
			}
			if (scena_kolejnosc == 1) {
				if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
					if (z != 1) {
						z--;
						scena_kolejnosc = 0;
					}
					else {
						for (int j = 0; j < liczba - 1; j++) {
							for (int i = 0; i < liczba-1; i++) {
								if (wylsowane[i] > wylsowane[i + 1]) {
									std::swap(wylsowane[i], wylsowane[i + 1]);
									std::swap(g[i].nazwa, g[i + 1].nazwa);
									std::swap(g[i].kolor, g[i + 1].kolor);
								}
							}
						}
						z = liczba;
						x = 6;
						rw.close();
					}

				}
			}
		}
		rw.clear(Color::White);
		rw.draw(opis);
		rw.draw(nazwy[liczba - 1]);
		rw.draw(kostki[liczba-1]);
		rw.draw(napis[3]);
		rw.draw(napis[2]);
		if (z <= liczba - 1) {
			rw.draw(nazwy[liczba - 2]);
			rw.draw(kostki[liczba - 2]);
		}
		if (z <= liczba - 2&&liczba>2) {
			rw.draw(nazwy[liczba - 3]);
			rw.draw(kostki[liczba - 3]);
		}
		if (z <= liczba - 3&&liczba>3) {
			rw.draw(nazwy[liczba - 4]);
			rw.draw(kostki[liczba - 4]);
		}
    }
}

int Kolejnosc::losuj() {
	return (std::rand() % 6) + 1;
}

void Kolejnosc::ilosc_graczy(int liczba,Gracz g[4]) {
	for (int i = liczba - 1; i >= 0; i--) {
		nazwy[i].setString(g[i].nazwa);
		nazwy[i].setFont(styl);
		nazwy[i].setCharacterSize(35);
		nazwy[i].setFillColor(g[i].kolor);
		wymiar = nazwy[i].getLocalBounds();
		nazwy[i].setOrigin(wymiar.width / 2, wymiar.height);

		kostki[i].setSize(Vector2f(96.f, 96.f));
		kostki[i].setOutlineThickness(2.f);
		kostki[i].setOutlineColor(Color::Black);
		wymiar = kostki[i].getLocalBounds();
		kostki[i].setOrigin(wymiar.width / 2, wymiar.height);

		if (i == liczba - 1) {
			nazwy[i].setPosition(200, 200);
			kostki[i].setPosition(200, 350);
		}
		if (i == liczba - 2) {
			nazwy[i].setPosition(600, 200);
			kostki[i].setPosition(600, 350);
		}
		if (i == liczba - 3) {
			nazwy[i].setPosition(200, 500);
			kostki[i].setPosition(200, 650);
		}
		if (i == liczba - 4) {
			nazwy[i].setPosition(600, 500);
			kostki[i].setPosition(600, 650);
		}
	}
}

Kolejnosc::~Kolejnosc()
{
}
