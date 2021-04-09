#include "Dodaj_gracza.h"



Dodaj_gracza::Dodaj_gracza()
{
	napis[0].setString(L"Gracz 1");
	napis[0].setFont(styl);
	napis[0].setCharacterSize(40);
	napis[0].setFillColor(Color::Black);
	napis[0].setPosition(400, 75);
	wymiar = napis[0].getLocalBounds();
	napis[0].setOrigin(wymiar.width / 2, wymiar.height);

	napis[1].setString(L"Wprowadz swoj¹ nazwê:");
	napis[1].setFont(styl);
	napis[1].setCharacterSize(35);
	napis[1].setFillColor(Color::Black);
	napis[1].setOutlineThickness(0);
	napis[1].setPosition(400, 200);
	wymiar = napis[1].getLocalBounds();
	napis[1].setOrigin(wymiar.width / 2, wymiar.height);

	napis[2].setString(L"Twoja nazwa");
	napis[2].setFont(styl);
	napis[2].setCharacterSize(30);
	napis[2].setFillColor(Color::Black);
	napis[2].setPosition(400, 275);
	napis[2].setOutlineThickness(0);
	wymiar = napis[2].getLocalBounds();
	napis[2].setOrigin(wymiar.width / 2, wymiar.height);

	napis[3].setString(L"Wybierz swój kolor:");
	napis[3].setFont(styl);
	napis[3].setCharacterSize(35);
	napis[3].setFillColor(Color::Black);
	napis[3].setPosition(400, 400);
	wymiar = napis[3].getLocalBounds();
	napis[3].setOrigin(wymiar.width / 2, wymiar.height);

	obraz[0].loadFromFile("Kolory/czerwony.jpg");
	kolory[0].setSize(Vector2f(92.f, 92.f));
	kolory[0].setOutlineThickness(4);
	kolory[0].setOutlineColor(Color::Black);
	kolory[0].setPosition(200, 500);
	kolory[0].setTexture(&obraz[0]);

	obraz[1].loadFromFile("Kolory/niebieski.jpg");
	kolory[1].setSize(Vector2f(92.f, 92.f));
	kolory[1].setOutlineColor(Color::Black);
	kolory[1].setPosition(300, 500);
	kolory[1].setTexture(&obraz[1]);

	obraz[2].loadFromFile("Kolory/zolty.jpg");
	kolory[2].setSize(Vector2f(92.f, 92.f));
	kolory[2].setOutlineColor(Color::Black);
	kolory[2].setPosition(400, 500);
	kolory[2].setTexture(&obraz[2]);
	
	obraz[3].loadFromFile("Kolory/zielony.jpg");
	kolory[3].setSize(Vector2f(92.f, 92.f));
	kolory[3].setOutlineColor(Color::Black);
	kolory[3].setPosition(500, 500);
	kolory[3].setTexture(&obraz[3]);

	kolorX[0].loadFromFile("Kolory/czerwonyX.jpg");
	kolorX[1].loadFromFile("Kolory/niebieskiX.jpg");
	kolorX[2].loadFromFile("Kolory/zoltyX.jpg");
	kolorX[3].loadFromFile("Kolory/zielonyX.jpg");

	legenda.setString(L"ESC-wyjdz/wstecz | STRZA£KI-wybór | ENTER-zatwierdz | SPACE-rzuæ kostk¹ | BACKSPACE-cofnij");
	legenda.setFont(styl);
	legenda.setCharacterSize(15);
	legenda.setFillColor(Color::Black);
	legenda.setPosition(400, 775);
	FloatRect wymiary4 = legenda.getLocalBounds();
	legenda.setOrigin(wymiary4.width / 2, wymiary4.height);
}


Dodaj_gracza::~Dodaj_gracza()
{
}

void Dodaj_gracza::prawo() {
	if (indeks_kolor != 3) {
		kolory[indeks_kolor].setOutlineThickness(0);
		indeks_kolor++;
		kolory[indeks_kolor].setOutlineThickness(4);
	}
}

void Dodaj_gracza::lewo() {
	if (indeks_kolor != 0) {
		kolory[indeks_kolor].setOutlineThickness(0);
		indeks_kolor--;
		kolory[indeks_kolor].setOutlineThickness(4);
	}
}

void Dodaj_gracza::zdarzenia(RenderWindow &rw, int &x, std::string &str, Color &kolor, Gracz g[4], int &liczba_graczy,int &z,int &m) {
	if (x == 4) {
		if (liczba_graczy != 0)
		{
			if (scena == 0) {
				while (rw.pollEvent(zdarzenie)) {

					if (zdarzenie.type == Event::Closed) {
						x = 15;
						m = 4;
					}
					if (scena == 0) {
						if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape) {
							x = 3;
							liczba_graczy = z;
							str.clear();
							napis[2].setString(L"Twoja nazwa");
							wymiar = napis[2].getLocalBounds();
							napis[2].setOrigin(wymiar.width / 2, wymiar.height);
							napis[0].setString(L"Gracz 1");
							kolory[0].setTexture(&obraz[0]);
							kolory[1].setTexture(&obraz[1]);
							kolory[2].setTexture(&obraz[2]);
							kolory[3].setTexture(&obraz[3]);
						}
						if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
							if (str.length() != 0)
								scena = 1;
						}
						if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code >= 0 && zdarzenie.key.code <= 25) {
							if (str.length() < 15) {
								char x = 65 + zdarzenie.key.code;
								str = str + x;
								napis[2].setString(str);
								wymiar = napis[2].getLocalBounds();
								napis[2].setOrigin(wymiar.width / 2, wymiar.height);
							}
						}
						if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::BackSpace) {
							if (str.length() != 0) {
								str.erase(str.length() - 1);
								napis[2].setString(str);
								wymiar = napis[2].getLocalBounds();
								napis[2].setOrigin(wymiar.width / 2, wymiar.height);
							}
						}
					}
				}
			}
			if (scena == 1) {
				while (rw.pollEvent(zdarzenie)) {
					if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape) {
						scena = 0;
						str.clear();
						napis[2].setString(L"Twoja nazwa");
						wymiar = napis[2].getLocalBounds();
						napis[2].setOrigin(wymiar.width / 2, wymiar.height);
					}
					if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Right)
						prawo();
					if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Left)
						lewo();
					if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
						if (kolory[indeks_kolor].getTexture() != &kolorX[indeks_kolor]) {
							switch (indeks_kolor)
							{
							case 0:
								kolor = Color::Red;
								break;
							case 1:
								kolor = Color::Blue;
								break;
							case 2:
								kolor = Color::Yellow;
								break;
							case 3:
								kolor = Color::Green;
								break;
							default:
								break;
							}
							g[liczba_graczy - 1].nazwa = str;
							g[liczba_graczy - 1].kolor = kolor;
							g[liczba_graczy - 1].pole = 0;
							liczba_graczy--;
							if (liczba_graczy != 0) {
								scena = 0;
								str.clear();
								if (z == liczba_graczy + 1)
									napis[0].setString(L"Gracz 2");
								if (z == liczba_graczy + 2)
									napis[0].setString(L"Gracz 3");
								if (z == liczba_graczy + 3)
									napis[0].setString(L"Gracz 4");
								napis[2].setString(L"Twoja nazwa");
								wymiar = napis[2].getLocalBounds();
								napis[2].setOrigin(wymiar.width / 2, wymiar.height);
								kolory[indeks_kolor].setTexture(&kolorX[indeks_kolor]);
								kolory[indeks_kolor].setOutlineThickness(0);
								indeks_kolor = 0;
								kolory[indeks_kolor].setOutlineThickness(4);
							}
						}
					}
				}
			}
			rw.clear(Color::White);
			rw.draw(napis[0]);
			rw.draw(napis[1]);
			rw.draw(napis[2]);
			rw.draw(legenda);
			if (scena == 1) {
				rw.draw(napis[3]);
				rw.draw(kolory[0]);
				rw.draw(kolory[1]);
				rw.draw(kolory[2]);
				rw.draw(kolory[3]);
			}
		}
		else {
		liczba_graczy = z;
		x = 5;
		}
	}
}

