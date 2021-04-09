#include "Nieruchomosc.h"

Nieruchomosc::Nieruchomosc()
{
	linie[0].setSize(Vector2f(407.f, 5.f));
	linie[0].setFillColor(Color::Black);
	linie[0].setPosition(0, 540);

	linie[1].setSize(Vector2f(407.f, 5.f));
	linie[1].setFillColor(Color::Black);
	linie[1].setPosition(1580, 540);

	linie[2].setSize(Vector2f(5.f, 1080.f));
	linie[2].setFillColor(Color::Black);
	linie[2].setPosition(1580, 0);
	
	linie[3].setSize(Vector2f(5.f, 1080.f));
	linie[3].setFillColor(Color::Black);
	linie[3].setPosition(332, 0);

	tekstury_ni[0].loadFromFile("nieruchomosci/0.jpg");
	obrazki[0].setSize(Vector2f(151.f, 131.f));
	obrazki[0].setOutlineThickness(2.f);
	obrazki[0].setOutlineColor(Color::Black);
	obrazki[0].setPosition(1292, 877.5);
	obrazki[0].setTexture(&tekstury_ni[0]);

	tekstury_ni[1].loadFromFile("nieruchomosci/1.jpg");
	obrazki[1].setSize(Vector2f(131.f, 131.f));
	obrazki[1].setOutlineThickness(2.f);
	obrazki[1].setOutlineColor(Color::Black);
	obrazki[1].setPosition(1159, 877.5);
	obrazki[1].setTexture(&tekstury_ni[1]);

	ramki[1].setSize(Vector2f(131.f, 18.f));
	ramki[1].setOutlineThickness(2.f);
	ramki[1].setOutlineColor(Color::Black);
	ramki[1].setPosition(1159, 857.5);

	tekstury_ni[2].loadFromFile("nieruchomosci/2.jpg");
	obrazki[2].setSize(Vector2f(131.f, 131.f));
	obrazki[2].setOutlineThickness(2.f);
	obrazki[2].setOutlineColor(Color::Black);
	obrazki[2].setPosition(1026, 877.5);
	obrazki[2].setTexture(&tekstury_ni[2]);

	ramki[2].setSize(Vector2f(131.f, 18.f));
	ramki[2].setOutlineThickness(2.f);
	ramki[2].setOutlineColor(Color::Black);
	ramki[2].setPosition(1026, 857.5);

	tekstury_ni[3].loadFromFile("nieruchomosci/3.jpg");
	obrazki[3].setSize(Vector2f(131.f, 131.f));
	obrazki[3].setOutlineThickness(2.f);
	obrazki[3].setOutlineColor(Color::Black);
	obrazki[3].setPosition(893, 877.5);
	obrazki[3].setTexture(&tekstury_ni[3]);

	ramki[3].setSize(Vector2f(131.f, 18.f));
	ramki[3].setOutlineThickness(2.f);
	ramki[3].setOutlineColor(Color::Black);
	ramki[3].setPosition(893, 857.5);

	tekstury_ni[4].loadFromFile("nieruchomosci/4.jpg");
	obrazki[4].setSize(Vector2f(131.f, 131.f));
	obrazki[4].setOutlineThickness(2.f);
	obrazki[4].setOutlineColor(Color::Black);
	obrazki[4].setPosition(760, 877.5);
	obrazki[4].setTexture(&tekstury_ni[4]);

	ramki[4].setSize(Vector2f(131.f, 18.f));
	ramki[4].setOutlineThickness(2.f);
	ramki[4].setOutlineColor(Color::Black);
	ramki[4].setPosition(760, 857.5);

	tekstury_ni[5].loadFromFile("nieruchomosci/5.jpg");
	obrazki[5].setSize(Vector2f(131.f, 131.f));
	obrazki[5].setOutlineThickness(2.f);
	obrazki[5].setOutlineColor(Color::Black);
	obrazki[5].setPosition(627, 877.5);
	obrazki[5].setTexture(&tekstury_ni[5]);

	ramki[5].setSize(Vector2f(131.f, 18.f));
	ramki[5].setOutlineThickness(2.f);
	ramki[5].setOutlineColor(Color::Black);
	ramki[5].setPosition(627, 857.5);

	tekstury_ni[6].loadFromFile("nieruchomosci/6.jpg");
	obrazki[6].setSize(Vector2f(151.f, 131.f));
	obrazki[6].setOutlineThickness(2.f);
	obrazki[6].setOutlineColor(Color::Black);
	obrazki[6].setPosition(474, 877.5);
	obrazki[6].setTexture(&tekstury_ni[6]);

	tekstury_ni[7].loadFromFile("nieruchomosci/7.jpg");
	obrazki[7].setSize(Vector2f(131.f, 131.f));
	obrazki[7].setOutlineThickness(2.f);
	obrazki[7].setOutlineColor(Color::Black);
	obrazki[7].setPosition(474, 744.5);
	obrazki[7].setTexture(&tekstury_ni[7]);

	ramki[7].setSize(Vector2f(18.f, 131.f));
	ramki[7].setOutlineThickness(2.f);
	ramki[7].setOutlineColor(Color::Black);
	ramki[7].setPosition(607, 744.5);

	tekstury_ni[8].loadFromFile("nieruchomosci/8.jpg");
	obrazki[8].setSize(Vector2f(131.f, 131.f));
	obrazki[8].setOutlineThickness(2.f);
	obrazki[8].setOutlineColor(Color::Black);
	obrazki[8].setPosition(474, 611.5);
	obrazki[8].setTexture(&tekstury_ni[8]);

	ramki[8].setSize(Vector2f(18.f, 131.f));
	ramki[8].setOutlineThickness(2.f);
	ramki[8].setOutlineColor(Color::Black);
	ramki[8].setPosition(607, 611.5);

	tekstury_ni[9].loadFromFile("nieruchomosci/9.jpg");
	obrazki[9].setSize(Vector2f(131.f, 131.f));
	obrazki[9].setOutlineThickness(2.f);
	obrazki[9].setOutlineColor(Color::Black);
	obrazki[9].setPosition(474, 478.5);
	obrazki[9].setTexture(&tekstury_ni[9]);

	ramki[9].setSize(Vector2f(18.f, 131.f));
	ramki[9].setOutlineThickness(2.f);
	ramki[9].setOutlineColor(Color::Black);
	ramki[9].setPosition(607, 478.5);

	tekstury_ni[10].loadFromFile("nieruchomosci/10.jpg");
	obrazki[10].setSize(Vector2f(131.f, 131.f));
	obrazki[10].setOutlineThickness(2.f);
	obrazki[10].setOutlineColor(Color::Black);
	obrazki[10].setPosition(474, 345.5);
	obrazki[10].setTexture(&tekstury_ni[10]);

	ramki[10].setSize(Vector2f(18.f, 131.f));
	ramki[10].setOutlineThickness(2.f);
	ramki[10].setOutlineColor(Color::Black);
	ramki[10].setPosition(607, 345.5);

	tekstury_ni[11].loadFromFile("nieruchomosci/11.jpg");
	obrazki[11].setSize(Vector2f(131.f, 131.f));
	obrazki[11].setOutlineThickness(2.f);
	obrazki[11].setOutlineColor(Color::Black);
	obrazki[11].setPosition(474, 212.5);
	obrazki[11].setTexture(&tekstury_ni[11]);

	ramki[11].setSize(Vector2f(18.f, 131.f));
	ramki[11].setOutlineThickness(2.f);
	ramki[11].setOutlineColor(Color::Black);
	ramki[11].setPosition(607, 212.5);

	tekstury_ni[12].loadFromFile("nieruchomosci/6.jpg");
	obrazki[12].setSize(Vector2f(131.f, 151.f));
	obrazki[12].setRotation(-90);
	obrazki[12].setOutlineThickness(2.f);
	obrazki[12].setOutlineColor(Color::Black);
	obrazki[12].setPosition(474, 210.5);
	obrazki[12].setTexture(&tekstury_ni[12]);

	tekstury_ni[13].loadFromFile("nieruchomosci/13.jpg");
	obrazki[13].setSize(Vector2f(131.f, 131.f));
	obrazki[13].setOutlineThickness(2.f);
	obrazki[13].setOutlineColor(Color::Black);
	obrazki[13].setPosition(627, 79.5);
	obrazki[13].setTexture(&tekstury_ni[13]);

	ramki[13].setSize(Vector2f(131.f, 18.f));
	ramki[13].setOutlineThickness(2.f);
	ramki[13].setOutlineColor(Color::Black);
	ramki[13].setPosition(627, 212.5);

	tekstury_ni[14].loadFromFile("nieruchomosci/14.jpg");
	obrazki[14].setSize(Vector2f(131.f, 131.f));
	obrazki[14].setOutlineThickness(2.f);
	obrazki[14].setOutlineColor(Color::Black);
	obrazki[14].setPosition(760, 79.5);
	obrazki[14].setTexture(&tekstury_ni[14]);

	ramki[14].setSize(Vector2f(131.f, 18.f));
	ramki[14].setOutlineThickness(2.f);
	ramki[14].setOutlineColor(Color::Black);
	ramki[14].setPosition(760, 212.5);

	tekstury_ni[15].loadFromFile("nieruchomosci/15.jpg");
	obrazki[15].setSize(Vector2f(131.f, 131.f));
	obrazki[15].setOutlineThickness(2.f);
	obrazki[15].setOutlineColor(Color::Black);
	obrazki[15].setPosition(893, 79.5);
	obrazki[15].setTexture(&tekstury_ni[15]);

	ramki[15].setSize(Vector2f(131.f, 18.f));
	ramki[15].setOutlineThickness(2.f);
	ramki[15].setOutlineColor(Color::Black);
	ramki[15].setPosition(893, 212.5);

	tekstury_ni[16].loadFromFile("nieruchomosci/16.jpg");
	obrazki[16].setSize(Vector2f(131.f, 131.f));
	obrazki[16].setOutlineThickness(2.f);
	obrazki[16].setOutlineColor(Color::Black);
	obrazki[16].setPosition(1026, 79.5);
	obrazki[16].setTexture(&tekstury_ni[16]);

	ramki[16].setSize(Vector2f(131.f, 18.f));
	ramki[16].setOutlineThickness(2.f);
	ramki[16].setOutlineColor(Color::Black);
	ramki[16].setPosition(1026, 212.5);

	tekstury_ni[17].loadFromFile("nieruchomosci/17.jpg");
	obrazki[17].setSize(Vector2f(131.f, 131.f));
	obrazki[17].setOutlineThickness(2.f);
	obrazki[17].setOutlineColor(Color::Black);
	obrazki[17].setPosition(1159, 79.5);
	obrazki[17].setTexture(&tekstury_ni[17]);

	ramki[17].setSize(Vector2f(131.f, 18.f));
	ramki[17].setOutlineThickness(2.f);
	ramki[17].setOutlineColor(Color::Black);
	ramki[17].setPosition(1159, 212.5);

	tekstury_ni[18].loadFromFile("nieruchomosci/6.jpg");
	obrazki[18].setSize(Vector2f(151.f, 131.f));
	obrazki[18].setOutlineThickness(2.f);
	obrazki[18].setOutlineColor(Color::Black);
	obrazki[18].setPosition(1292, 79.5);
	obrazki[18].setTexture(&tekstury_ni[18]);

	tekstury_ni[19].loadFromFile("nieruchomosci/19.jpg");
	obrazki[19].setSize(Vector2f(131.f, 131.f));
	obrazki[19].setOutlineThickness(2.f);
	obrazki[19].setOutlineColor(Color::Black);
	obrazki[19].setPosition(1312, 212.5);
	obrazki[19].setTexture(&tekstury_ni[19]);

	ramki[19].setSize(Vector2f(18.f, 131.f));
	ramki[19].setOutlineThickness(2.f);
	ramki[19].setOutlineColor(Color::Black);
	ramki[19].setPosition(1292, 212.5);

	tekstury_ni[20].loadFromFile("nieruchomosci/20.jpg");
	obrazki[20].setSize(Vector2f(131.f, 131.f));
	obrazki[20].setOutlineThickness(2.f);
	obrazki[20].setOutlineColor(Color::Black);
	obrazki[20].setPosition(1312, 345.5);
	obrazki[20].setTexture(&tekstury_ni[20]);

	ramki[20].setSize(Vector2f(18.f, 131.f));
	ramki[20].setOutlineThickness(2.f);
	ramki[20].setOutlineColor(Color::Black);
	ramki[20].setPosition(1292, 345.5);

	tekstury_ni[21].loadFromFile("nieruchomosci/21.jpg");
	obrazki[21].setSize(Vector2f(131.f, 131.f));
	obrazki[21].setOutlineThickness(2.f);
	obrazki[21].setOutlineColor(Color::Black);
	obrazki[21].setPosition(1312, 478.5);
	obrazki[21].setTexture(&tekstury_ni[21]);

	ramki[21].setSize(Vector2f(18.f, 131.f));
	ramki[21].setOutlineThickness(2.f);
	ramki[21].setOutlineColor(Color::Black);
	ramki[21].setPosition(1292, 478.5);

	tekstury_ni[22].loadFromFile("nieruchomosci/22.jpg");
	obrazki[22].setSize(Vector2f(131.f, 131.f));
	obrazki[22].setOutlineThickness(2.f);
	obrazki[22].setOutlineColor(Color::Black);
	obrazki[22].setPosition(1312, 611.5);
	obrazki[22].setTexture(&tekstury_ni[22]);

	ramki[22].setSize(Vector2f(18.f, 131.f));
	ramki[22].setOutlineThickness(2.f);
	ramki[22].setOutlineColor(Color::Black);
	ramki[22].setPosition(1292, 611.5);

	tekstury_ni[23].loadFromFile("nieruchomosci/23.jpg");
	obrazki[23].setSize(Vector2f(131.f, 131.f));
	obrazki[23].setOutlineThickness(2.f);
	obrazki[23].setOutlineColor(Color::Black);
	obrazki[23].setPosition(1312, 744.5);
	obrazki[23].setTexture(&tekstury_ni[23]);

	ramki[23].setSize(Vector2f(18.f, 131.f));
	ramki[23].setOutlineThickness(2.f);
	ramki[23].setOutlineColor(Color::Black);
	ramki[23].setPosition(1292, 744.5);

	for (int i = 0; i < 24; i++) {
		if (i < 3 && i > 0) {
			czynsze[i] = i * 7;
			czynsze2[i] = i * 7;
			ceny[i] = i * 20;
		}
		if (i > 3 && i < 6) {
			czynsze[i] = (i - 1) * 7;
			czynsze2[i] = (i-1) * 7;
			ceny[i] = (i-1) * 20;
		}
		if (i > 6 && i < 9) {
			czynsze[i] = (i - 2) * 7;
			czynsze2[i] = (i - 2) * 7;
			ceny[i] = (i - 2) * 20;
		}
		if (i > 9 && i < 12) {
			czynsze[i] = (i - 3) * 7;
			czynsze2[i] = (i - 3) * 7;
			ceny[i] = (i - 3) * 20;
		}
		if (i > 12 && i < 15) {
			czynsze[i] = (i - 4) * 7;
			czynsze2[i] = (i - 4) * 7;
			ceny[i] = (i - 4) * 20;
		}
		if (i > 15 && i < 18) {
			czynsze[i] = (i - 5) * 7;
			czynsze2[i] = (i - 5) * 7;
			ceny[i] = (i - 5) * 20;
		}
		if (i > 18 && i < 21) {
			czynsze[i] = (i - 6) * 7;
			czynsze2[i] = (i - 6) * 7;
			ceny[i] = (i - 6) * 20;
		}
		if (i > 21) {
			czynsze[i] = (i - 7) * 7;
			czynsze2[i] = (i - 7) * 7;
			ceny[i] = (i - 7) * 20;
		}
		wlasciciele[i] = 4;
		textura_o[i].loadFromFile("nieruchomosci/" + std::to_string(i) + ".jpg");
		obraz[i].setSize(Vector2f(296.f, 296.f));
		obraz[i].setOutlineThickness(2.f);
		obraz[i].setOutlineColor(Color::Black);
		obraz[i].setPosition(810, 400);
		obraz[i].setTexture(&textura_o[i]);
    }
	czynsze[3] = 20; czynsze[9] = 20; czynsze[15] = 20; czynsze[21] = 20;
	czynsze[0] = 0; czynsze[6] = 0; czynsze[12] = 0; czynsze[18] = 0;
	czynsze2[3] = 20; czynsze2[9] = 20; czynsze2[15] = 20; czynsze2[21] = 20;
	czynsze2[0] = 0; czynsze2[6] = 0; czynsze2[12] = 0; czynsze2[18] = 0;
    ceny[3] = 80; ceny[9] = 80; ceny[15] = 80; ceny[21] = 80;
	ceny[0] = 0; ceny[6] = 0; ceny[12] = 0; ceny[18] = 0;

	for (int i = 0; i < 7; i++) {
		t_kostka[i].loadFromFile("kostka/" + std::to_string(i) + ".jpg");
		kostka[i].setSize(Vector2f(296.f, 296.f));
		kostka[i].setOutlineThickness(2.f);
		kostka[i].setOutlineColor(Color::Black);
		kostka[i].setPosition(810, 400);
		kostka[i].setTexture(&t_kostka[i]);
	}
	
	opis_nieruchomosci.setFont(styl);
	opis_nieruchomosci.setCharacterSize(35);
	opis_nieruchomosci.setFillColor(Color::Black);
	opis_nieruchomosci.setPosition(960, 750);

	opis_zdarzenia.setFont(styl);
	opis_zdarzenia.setCharacterSize(35);
	opis_zdarzenia.setFillColor(Color::Black);
	opis_zdarzenia.setPosition(960, 350);

	ilosc_czynszu.setFont(styl);
	ilosc_czynszu.setCharacterSize(30);
	ilosc_czynszu.setFillColor(Color::Black);
	ilosc_czynszu.setPosition(960, 800);

	legenda.setString(L"ESC-wyjdz | STRZA£KI-wybór | ENTER-zatwierdz | SPACE-rzuæ | BACKSPACE-anuluj");
	legenda.setFont(styl);
	legenda.setCharacterSize(16);
	legenda.setFillColor(Color::Black);
	legenda.setPosition(960, 835);
	wymiar = legenda.getLocalBounds();
	legenda.setOrigin(wymiar.width / 2, wymiar.height);

	int m = 0;
	for (int i = 0; i < 5; i++) {
		tekstury_na[i].loadFromFile("napisy/"+std::to_string(i)+".jpg");
		napisy[i].setSize(Vector2f(135.f, 67.f));
		napisy[i].setPosition(1159-m, 1012.5);
		napisy[i].setTexture(&tekstury_na[i]);
		m += 133;
    }

	m = 0;
	for (int i = 14; i > 9; i--) {
		tekstury_na[i].loadFromFile("napisy/" + std::to_string(i) + ".jpg");
		napisy[i].setSize(Vector2f(135.f, 67.f));
		napisy[i].setPosition(1159 - m, 0.5);
		napisy[i].setTexture(&tekstury_na[i]);
		m += 133;
	}
	
	m = 0;
	for (int i = 5; i <10; i++) {
		tekstury_na[i].loadFromFile("napisy/" + std::to_string(i) + ".jpg");
		napisy[i].setSize(Vector2f(135.f, 67.f));
		napisy[i].setPosition(337, 778.5-m);
		napisy[i].setTexture(&tekstury_na[i]);
		m += 133;
	}
	
	m = 0;
	for (int i = 19; i > 14; i--) {
		tekstury_na[i].loadFromFile("napisy/" + std::to_string(i) + ".jpg");
		napisy[i].setSize(Vector2f(135.f, 67.f));
		napisy[i].setPosition(1445, 778.5 - m);
		napisy[i].setTexture(&tekstury_na[i]);
		m += 133;
	}
};


void Nieruchomosc::zdarzenia(RenderWindow &rw, int &x, int &liczba, Gracz g[4], int &z,int &m) {
	View widok(Vector2f(960.0f, 540.0f), Vector2f(1920.0f, 1080.0f));
	rw.setView(widok);
	if (x == 6) {
		while (rw.pollEvent(zdarzenie)) {
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape) {
				x = 15;
				m = 6;
			}
			if (scena_gry == 0) {
				opis_zdarzenia.setString(L"Rzuæ kostk¹");
				wymiar = opis_zdarzenia.getLocalBounds();
				opis_zdarzenia.setOrigin(wymiar.width / 2, wymiar.height);
				if (z == 0) {
					kogo_ruch.setString("Ruch Gracza " + g[liczba - 1].nazwa);
					kogo_ruch.setFillColor(g[liczba - 1].kolor);
				}
				else
				{
					kogo_ruch.setString("Ruch Gracza " + g[z - 1].nazwa);
					kogo_ruch.setFillColor(g[z - 1].kolor);
				}
				wymiar = kogo_ruch.getLocalBounds();
				kogo_ruch.setOrigin(wymiar.width / 2, wymiar.height);
				if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Space) {
					wylosowana = losuj();
					opis_zdarzenia.setString(L"Rusz pionkiem !");
					wymiar = opis_zdarzenia.getLocalBounds();
					opis_zdarzenia.setOrigin(wymiar.width / 2, wymiar.height);
					scena_gry = 1;
				}
			}
			if (scena_gry == 1) {
				if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
					z--;
					if (z < 0)
						z = liczba - 1;
					ruch(wylosowana, g[z], pionki[z], rw, liczba);
					gotowka[z].setString(L"Gotówka : " + std::to_string(g[z].gotowka) + " M");
					opis_nieruchomosci.setString(L"Cena : " + std::to_string(ceny[g[z].pole]) + " M   Czynsz : " + std::to_string(czynsze[g[z].pole]) + " M");
					wymiar = opis_nieruchomosci.getLocalBounds();
					opis_nieruchomosci.setOrigin(wymiar.width / 2, wymiar.height);
					opis_zdarzenia.setString(L"Czy kupisz t¹ nieruchomoœæ ?");
					if (wlasciciele[g[z].pole] == z) 
						opis_zdarzenia.setString(L"To Twoja nieruchomoœæ");
					if (g[z].pole == 6 || g[z].pole == 12 || g[z].pole == 18) 
						opis_zdarzenia.setString(L"Wylosuj szanse");
					if (g[z].pole == 0)
						opis_zdarzenia.setString(L"Po przejœciu pola start otrzymasz 80 M");
					wymiar = opis_zdarzenia.getLocalBounds();
					opis_zdarzenia.setOrigin(wymiar.width / 2, wymiar.height);
					x = 7;
				}
			}
		}
	}
	if (x == 7) {
		if (wlasciciele[g[z].pole] == z) {
			while (rw.pollEvent(zdarzenie)) {
				if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape) {
					x = 15;
					m = 7;
				}
				if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
					scena_gry = 0;
					x = 6;
				}
			}
		}
		if (wlasciciele[g[z].pole] != 4 && wlasciciele[g[z].pole] != z)
			x = 8;
		if (wlasciciele[g[z].pole] == 4) {
			while (rw.pollEvent(zdarzenie)) {
				if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape) {
					x = 15;
					m = 7;
				}
				if (g[z].pole == 0 || g[z].pole == 6 || g[z].pole == 12 || g[z].pole == 18) {
					if (g[z].pole == 6 || g[z].pole == 12 || g[z].pole == 18) {
						if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
							srand(time(NULL));
							int los = (std::rand() % 3) + 0;
							if (los == 0)
								szansa = 50;
							if (los == 1)
								szansa = -50;
							if (los == 2)
								szansa = 25;
							if (los == 3)
								szansa = -25;
							if(los==0||los==2)
							opis_zdarzenia.setString(L"Otrzymujesz "+std::to_string(szansa)+" M");
							if (los == 1 || los == 3)
								opis_zdarzenia.setString(L"Tracisz " + std::to_string(-szansa)+" M");
							wymiar = opis_zdarzenia.getLocalBounds();
							opis_zdarzenia.setOrigin(wymiar.width / 2, wymiar.height);
							x = 11;
						}
					}
					if (g[z].pole == 0) {
						if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
							scena_gry = 0;
							x = 6;
						}
					}
				}
				else {
					if (g[z].gotowka >= ceny[g[z].pole]) {
						if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
							g[z].gotowka -= ceny[g[z].pole];
							wlasciciele[g[z].pole] = z;
							ramki[g[z].pole].setFillColor(g[z].kolor);
							g[z].posiadlosci++;
							gotowka[z].setString(L"Gotówka : " + std::to_string(g[z].gotowka) + " M");
							posiadlosci[z].setString(L"Posiad³oœæi : " + std::to_string(g[z].posiadlosci));
							for (int i = 0; i < 8; i++) {
								if (g[z].pole == 1 + (i * 3) || g[z].pole == 2 + (i * 3)) {
									if (wlasciciele[1 + (i * 3)] == z && wlasciciele[2 + (i * 3)] == z) {
										czynsze[1 + (i * 3)] = czynsze[1 + (i * 3)] * 2;
										czynsze[2 + (i * 3)] = czynsze[2 + (i * 3)] * 2;
									}
								}
							}
							if (g[z].pole == 3 || g[z].pole == 9 || g[z].pole == 15 || g[z].pole == 21) {
								int ilosc_transportu = 0;
								for (int i = 0; i < 4; i++) {
									if (wlasciciele[i * 6 + 3] == z)
										ilosc_transportu++;
								}
								for (int i = 0; i < 4; i++) {
									if (wlasciciele[i * 6 + 3] == z)
										czynsze[i * 6 + 3] = czynsze2[i * 6 + 3] * ilosc_transportu;
								}
							}
							scena_gry = 0;
							x = 6;
						}
					}
					if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::BackSpace) {
						scena_gry = 0;
						x = 6;
					}
				}
			}
		}
	}
	if (x == 8) {
		if (g[z].gotowka < czynsze[g[z].pole])
			x = 12;
		if (g[z].gotowka >= czynsze[g[z].pole]) {
			opis_zdarzenia.setString(L"Zap³aæ nale¿ny czynsz");
			wymiar = opis_zdarzenia.getLocalBounds();
			opis_zdarzenia.setOrigin(wymiar.width / 2, wymiar.height);
			while (rw.pollEvent(zdarzenie)) {
				if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape) {
					x = 15;
					m = 8;
				}
				if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
					g[wlasciciele[g[z].pole]].gotowka += czynsze[g[z].pole];
					g[z].gotowka -= czynsze[g[z].pole];
					gotowka[z].setString(L"Gotówka : " + std::to_string(g[z].gotowka) + " M");
					gotowka[wlasciciele[g[z].pole]].setString(L"Gotówka : " + std::to_string(g[wlasciciele[g[z].pole]].gotowka) + " M");
					scena_gry = 0;
					x = 6;
				}
			}
		}
	}
	if (x == 9) {
		opis_zdarzenia.setString(L"Gracz " + g[z].nazwa + " bankrutuje");
		wymiar = opis_zdarzenia.getLocalBounds();
		opis_zdarzenia.setOrigin(wymiar.width / 2, wymiar.height);
			while (rw.pollEvent(zdarzenie)) {
				if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape) {
					x = 15;
					m = 9;
				}
				if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter)
					x = 13;
			}
	}
	if (x == 10) {
		opis_zdarzenia.setString(L"Wybierz dzia³ke na sprzeda¿");
		wymiar = opis_zdarzenia.getLocalBounds();
		opis_zdarzenia.setOrigin(wymiar.width / 2, wymiar.height);
		opis_nieruchomosci.setString(L"Sprzeda¿ : " + std::to_string(ceny[sprzedaz_nieruchomosci]*8/10) + " M   Czynsz : " + std::to_string(czynsze[sprzedaz_nieruchomosci]) + " M");
		wymiar = opis_nieruchomosci.getLocalBounds();
		opis_nieruchomosci.setOrigin(wymiar.width / 2, wymiar.height);
		ilosc_czynszu.setString(L"Gotówka do zap³aty : " + std::to_string(czynsze[g[z].pole])+" M");
		if(g[z].pole==6||g[z].pole==12||g[z].pole==18)
			ilosc_czynszu.setString(L"Gotówka do zap³aty : " + std::to_string(-szansa)+" M");
		wymiar = ilosc_czynszu.getLocalBounds();
		ilosc_czynszu.setOrigin(wymiar.width / 2, wymiar.height);
		while (rw.pollEvent(zdarzenie)) {
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape) {
				x = 15;
				m = 10;
			}
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Left) {
				int i = sprzedaz_nieruchomosci;
				while (true) {
					if (i == 23)
						i = 0;
					i++;
					if (wlasciciele[i] == z) {
						sprzedaz_nieruchomosci = i;
						break;
					}
				}

			}
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Right) {
				int i = sprzedaz_nieruchomosci;
				while (true) {
					if (i == 1)
						i = 24;
					i--;
					if (wlasciciele[i] == z) {
						sprzedaz_nieruchomosci = i;
						break;
					}
				}

			}
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
				wlasciciele[sprzedaz_nieruchomosci] = 4;
				czynsze[sprzedaz_nieruchomosci] = czynsze2[sprzedaz_nieruchomosci];
				if (sprzedaz_nieruchomosci != 3 && sprzedaz_nieruchomosci != 9 && sprzedaz_nieruchomosci != 15 && sprzedaz_nieruchomosci != 21) {
					if(sprzedaz_nieruchomosci-1!=3&& sprzedaz_nieruchomosci - 1 != 9&& sprzedaz_nieruchomosci - 1 !=15&& sprzedaz_nieruchomosci - 1 !=21)
					czynsze[sprzedaz_nieruchomosci - 1] = czynsze2[sprzedaz_nieruchomosci - 1];
					if (sprzedaz_nieruchomosci + 1 != 3 && sprzedaz_nieruchomosci + 1 != 9 && sprzedaz_nieruchomosci + 1 != 15 && sprzedaz_nieruchomosci + 1 != 21)
					czynsze[sprzedaz_nieruchomosci + 1] = czynsze2[sprzedaz_nieruchomosci + 1];
				}
				else
				{
					for (int j = 0; j <= liczba - 1; j++) {
						int ilosc_transportu = 0;
						for (int i = 0; i < 4; i++) {
							if (wlasciciele[i * 6 + 3] == j)
								ilosc_transportu++;
						}
						for (int i = 0; i < 4; i++) {
							if (wlasciciele[i * 6 + 3] == j)
								czynsze[i * 6 + 3] = czynsze2[i * 6 + 3] * ilosc_transportu;
						}
					}
				}
				ramki[sprzedaz_nieruchomosci].setFillColor(Color::White);
				g[z].gotowka += ceny[sprzedaz_nieruchomosci] * 8 / 10;
				g[z].posiadlosci--;
				gotowka[z].setString(L"Gotówka : " + std::to_string(g[z].gotowka) + " M");
				posiadlosci[z].setString(L"Posiad³oœæi : " + std::to_string(g[z].posiadlosci));
				if (g[z].pole == 6 || g[z].pole == 12 || g[z].pole == 18) {
					if (g[z].gotowka + szansa >= 0) {
						g[z].gotowka += szansa;
						gotowka[z].setString(L"Gotówka : " + std::to_string(g[z].gotowka) + " M");
						scena_gry = 0;
						x = 6;
					}
					else
						x = 12;
				}
				else {
					if (g[z].gotowka < czynsze[g[z].pole])
						x = 12;
					else
						x = 8;
				}
			}

		}
	}
	if (x == 11) {
		while (rw.pollEvent(zdarzenie)) {
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape) {
				x = 15;
				m = 11;
			}
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
				if ((g[z].gotowka + szansa) < 0) {
					x = 12;
				}
				else {
					g[z].gotowka += szansa;
					gotowka[z].setString(L"Gotówka : " + std::to_string(g[z].gotowka) + " M");
					scena_gry = 0;
					x = 6;
				}
			}
		}

    }
	if (x == 12) {
			opis_zdarzenia.setString(L"Nie posiadasz wystarczaj¹co gotówki");
		wymiar = opis_zdarzenia.getLocalBounds();
		opis_zdarzenia.setOrigin(wymiar.width / 2, wymiar.height);
		opis_nieruchomosci.setString(L"Cena : " + std::to_string(ceny[g[z].pole]) + " M   Czynsz : " + std::to_string(czynsze[g[z].pole]) + " M");
		wymiar = opis_nieruchomosci.getLocalBounds();
		opis_nieruchomosci.setOrigin(wymiar.width / 2, wymiar.height);
		while (rw.pollEvent(zdarzenie)) {
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape) {
				x = 15;
				m = 12;
			}
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
				int liczba_nieruchomosci = 0;
				for (int i = 0; i < 24; i++) {
					if (wlasciciele[i] == z) {
						sprzedaz_nieruchomosci = i;
						liczba_nieruchomosci++;
						x = 10;
						break;
					}
				}
				if(liczba_nieruchomosci==0)
				x = 9;
			}
		}
    }
	if (x == 13) {
		g[wlasciciele[g[z].pole]].gotowka += g[z].gotowka;
		g[z].gotowka = 0;
		for (int i = z; i < liczba - 1; i++) {
			std::swap(g[i].nazwa, g[i + 1].nazwa);
			std::swap(g[i].gotowka, g[i + 1].gotowka);
			std::swap(g[i].kolor, g[i + 1].kolor);
			std::swap(g[i].posiadlosci, g[i + 1].posiadlosci);
			std::swap(g[i].pole, g[i + 1].pole);
			std::swap(pionki[i], pionki[i + 1]);
		}
		for (int i = z; i < liczba - 1; i++) {
			for (int j = 0; j < 24; j++) {
				if (wlasciciele[j] == i + 1)
					wlasciciele[j]--;
			}
		}
		liczba--;
		if (liczba != 1) {
			opis_graczy(g, liczba, 1);
			scena_gry = 0;
			x = 6;
		}
		else {
			opis_zdarzenia.setString(L"Gratulacje, gracz " + g[0].nazwa + L"wygra³ !");
			opis_zdarzenia.setFillColor(g[0].kolor);
			wymiar = opis_zdarzenia.getLocalBounds();
			opis_zdarzenia.setOrigin(wymiar.width / 2, wymiar.height);
			int suma = g[0].gotowka;
			for (int i = 0; i < 24; i++) {
				if (wlasciciele[i] == 0)
					suma += ceny[i];
			}
			opis_nieruchomosci.setString(g[0].nazwa + L" uzbiera³ : "+std::to_string(suma)+" M");
			wymiar = opis_nieruchomosci.getLocalBounds();
			opis_nieruchomosci.setOrigin(wymiar.width / 2, wymiar.height);
			x = 14;
		}
    }
	if (x == 14) {
		while (rw.pollEvent(zdarzenie)) {
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Escape) {
				x = 15;
				m = 14;
			}
			if (zdarzenie.type == Event::KeyPressed&&zdarzenie.key.code == Keyboard::Enter) {
				x = 15;
				m = 14;
			}

		}

	}
	rw.clear(Color::White);
	if (x == 6) {
		if (scena_gry == 1)
			rw.draw(kostka[wylosowana]);
		if (scena_gry == 0)
			rw.draw(kostka[0]);
	}
	if (x == 14)
		rw.draw(opis_nieruchomosci);
	if(x!=14&&m!=14)
	rw.draw(kogo_ruch);
	rw.draw(opis_zdarzenia);
	rw.draw(legenda);
	if (x == 7 || x == 8||x==11||x==12) {
		rw.draw(obraz[g[z].pole]);
		if(g[z].pole!=0&&g[z].pole!=6&&g[z].pole!=12&&g[z].pole!=18)
		rw.draw(opis_nieruchomosci);
	}
	if (x == 10) {
			rw.draw(opis_nieruchomosci);
			rw.draw(ilosc_czynszu);
			rw.draw(obraz[sprzedaz_nieruchomosci]);
	}
		for (int i = 0; i < 24; i++) {
			rw.draw(obrazki[i]);
		}
	rw.draw(linie[0]);
	rw.draw(linie[1]);
	rw.draw(linie[2]);
	rw.draw(linie[3]);
	for (int i = 0; i < 24; i++) {
		rw.draw(ramki[i]);
	}
	for(int i=0;i<20;i++)
	rw.draw(napisy[i]);
	if (x != 14&&m!=14) {
		for (int i = liczba - 1; i >= 0; i--) {
			rw.draw(tekst[i]);
			rw.draw(gotowka[i]);
			rw.draw(posiadlosci[i]);
			rw.draw(pionki[i]);
		}
	}


}


void Nieruchomosc::opis_graczy(Gracz g[4],int liczba,int opcja) {
	if (opcja == 0) {
		kogo_ruch.setString("Ruch Gracza " + g[liczba - 1].nazwa);
		kogo_ruch.setFont(styl);
		kogo_ruch.setCharacterSize(40);
		kogo_ruch.setFillColor(g[liczba - 1].kolor);
		wymiar = kogo_ruch.getLocalBounds();
		kogo_ruch.setOrigin(wymiar.width / 2, wymiar.height);
		kogo_ruch.setPosition(960, 275);
	}

	for (int i = liczba-1; i >= 0; i--) {
		tekst[i].setString(g[i].nazwa);
		tekst[i].setFont(styl);
		tekst[i].setCharacterSize(40);
		tekst[i].setFillColor(g[i].kolor);
		wymiar = tekst[i].getLocalBounds();
		tekst[i].setOrigin(wymiar.width / 2, wymiar.height);

		gotowka[i].setString(L"Gotówka : 400 M");
		if(opcja==1)
			gotowka[i].setString(L"Gotówka : " + std::to_string(g[i].gotowka) + " M");
		gotowka[i].setFont(styl);
		gotowka[i].setCharacterSize(35);
		gotowka[i].setFillColor(Color::Black);
		wymiar = gotowka[i].getLocalBounds();
		gotowka[i].setOrigin(wymiar.width / 2, wymiar.height);

		posiadlosci[i].setString(L"Posiad³oœæi : " + std::to_string(g[i].posiadlosci));
		posiadlosci[i].setFont(styl);
		posiadlosci[i].setCharacterSize(35);
		posiadlosci[i].setFillColor(Color::Black);
		wymiar = posiadlosci[i].getLocalBounds();
		posiadlosci[i].setOrigin(wymiar.width / 2, wymiar.height);

        pionki[i].setRadius(20);
		pionki[i].setFillColor(g[i].kolor);
		pionki[i].setOutlineThickness(1);
		pionki[i].setOutlineColor(Color::Black);

		if (i == liczba - 1) {
			tekst[i].setPosition(170, 75);
			gotowka[i].setPosition(170, 150);
			posiadlosci[i].setPosition(170, 225);
			if(opcja==0)
			pionki[i].setPosition(1302,887.5);
		}
		if (i == liczba - 2) {
			tekst[i].setPosition(1749.5, 75);
			gotowka[i].setPosition(1749.5, 150);
			posiadlosci[i].setPosition(1749.5, 225);
			if (opcja == 0)
			pionki[i].setPosition(1377, 887.5);
		}
		if (i == liczba - 3) {
			tekst[i].setPosition(170, 615);
			gotowka[i].setPosition(170, 700);
			posiadlosci[i].setPosition(170, 775);
			if (opcja == 0)
			pionki[i].setPosition(1302, 957.5);
		}
		if (i == liczba - 4) {
			tekst[i].setPosition(1749.5, 615);
			gotowka[i].setPosition(1749.5, 700);
			posiadlosci[i].setPosition(1749.5, 775);
			if (opcja == 0)
			pionki[i].setPosition(1377, 957.5);
		}

    }
};

int Nieruchomosc::losuj() {
	return(std::rand() % 6) + 1;
}

void Nieruchomosc::ruch(int nr_kostka,Gracz &g, CircleShape &pionek,RenderWindow &rw,int liczba) {
	for (int i = 0; i < nr_kostka; i++) {
		if (g.pole == 0)
			g.gotowka += 80;
		if (g.pole >= 0 && g.pole <= 4)
			pionek.move(-133, 0);
		if (g.pole == 5)
			pionek.move(-153, 0);
		if (g.pole >= 6 && g.pole <= 10)
			pionek.move(0, -133);
		if (g.pole == 11)
			pionek.move(20, -133);
		if (g.pole >= 12 && g.pole <= 16)
			pionek.move(133, 0);
		if (g.pole == 17)
			pionek.move(153, 0);
		if (g.pole >= 18 && g.pole <= 22)
			pionek.move(0, 133);
		if (g.pole == 23) {
			pionek.move(-20, 133);
			g.pole = 0;
		}
		else
		{
			g.pole++;
		}
		rw.clear(Color::White);
		for (int i = 0; i < 24; i++) {
			rw.draw(obrazki[i]);
		}
		rw.draw(linie[0]);
		rw.draw(linie[1]);
		rw.draw(linie[2]);
		rw.draw(linie[3]);
		rw.draw(legenda);
		for (int i = 0; i < 24; i++) {
			rw.draw(ramki[i]);
		}
		for (int i = 0; i < 20; i++)
			rw.draw(napisy[i]);
		for (int i = liczba - 1; i >= 0; i--) {
			rw.draw(tekst[i]);
			rw.draw(gotowka[i]);
			rw.draw(posiadlosci[i]);
			rw.draw(pionki[i]);
		}
		rw.draw(kostka[nr_kostka]);
		rw.draw(kogo_ruch);
		rw.display();
	}
}

Nieruchomosc::~Nieruchomosc()
{
}

