#include "Map.h"

void Map::Wczytaj()
{
	fstream plik;
	string linia;
	plik.open("map.txt", ios::in);

	for (int i = 0; i < ilosc_wierszy; i++) {
		for (int j = 0; j < ilosc_kolumn; j++) {
			plik >> tablica[i][j];
		}
	}

	plik.close();
}

void Map::Wyswietl()								//do debugowania
{
	Wczytaj();

	for (int i = 0; i < ilosc_wierszy; i++) {
		for (int j = 0; j < ilosc_kolumn; j++) {
			cout << tablica[i][j];
		}
		cout << endl;
	}
}

void Map::UstawPlansze()
{
	wallTexture.loadFromFile("Textures/wall.jpg");
	candyTexture.loadFromFile("Textures/candy.png");
	bigCandyTexture.loadFromFile("Textures/bigCandy.png");
	gate.loadFromFile("Textures/gate.png");

	for (int i = 0; i < ilosc_wierszy; i++) {
		for (int j = 0; j < ilosc_kolumn; j++) {
			if (tablica[i][j] == 'w') {
				plansza[i][j].setTexture(wallTexture);
				plansza[i][j].setPosition(j * 24, i * 24);
			}
			else if (tablica[i][j] == 'o') {
				plansza[i][j].setTexture(candyTexture);
				plansza[i][j].setPosition((j * 24), (i * 24));
			}
			else if (tablica[i][j] == 'O') {
				plansza[i][j].setTexture(bigCandyTexture);
				plansza[i][j].setPosition((j * 24), (i * 24));
			}
			else if (tablica[i][j] == 'g') {
				plansza[i][j].setTexture(gate);
				plansza[i][j].setPosition((j * 24), (i * 24));
			}
		}
	}

}