#include <iostream>
#include "SFML/Graphics.hpp"
#include <SFML/Window.hpp>
#include "Map.h"

using namespace sf;
using namespace std;

int main()
{
    RenderWindow window{ VideoMode{1050,800}, "PACMAN" };
    window.setFramerateLimit(60);
    Event event;

    Map map;
    map.Wyswietl();
    map.UstawPlansze();

    while (true)
    {
        window.clear(Color::Black);
        window.pollEvent(event);


        for (int i = 0; i < map.ilosc_wierszy; i++) {           //petla wyswietlajaca odpowiednie elementy na wlasciwych pozycjach
            for (int j = 0; j < map.ilosc_kolumn; j++) {        //na podstawie informacji obiektu abc
                if (map.tablica[i][j] == 'w') {
                    window.draw(map.plansza[i][j]);
                }
                else if (map.tablica[i][j] == 'o') {
                    window.draw(map.plansza[i][j]);
                }
                else if (map.tablica[i][j] == 'O') {
                    window.draw(map.plansza[i][j]);
                }
                else if (map.tablica[i][j] == 'g') {
                    window.draw(map.plansza[i][j]);
                }
            }
        }

        if (event.type == Event::Closed) {
            window.close();
            break;
        }

        window.display();
    }

    return 0;
}