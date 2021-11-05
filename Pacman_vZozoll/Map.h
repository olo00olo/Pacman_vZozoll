#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Map
{
public:
	int ilosc_wierszy = 31;
	int ilosc_kolumn = 28;
	char tablica[31][28];
	void Wczytaj();
	void Wyswietl();
	void UstawPlansze();
	Sprite plansza[31][28];
private:
	Texture wallTexture;
	Texture candyTexture;
	Texture bigCandyTexture;
	Texture gate;
};
