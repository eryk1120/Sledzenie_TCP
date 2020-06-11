#ifndef PODAJ_ZMIENNA_H
#define PODAJ_ZMIENNA_H
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/Main.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <vector>
using namespace std;
class podaj_zmienna
{
    public:
        podaj_zmienna();
        virtual ~podaj_zmienna();
        int zmienna;
        double wpis()
        {
            return 5;
        }
        double wyswietl(int x, int y, string napis)        {
            sf::Text tekst;
            tekst.setString(napis);
            tekst.setPosition(x, y);
            sf::Event zdarzenie;
            sf::Text pobranie;
            pobranie.setPosition()
            sf::RectangleShape prostokat;
            prostokat.setPosition(x,y+15);
            prostokat.setFillColor(sf::Color::White);
            prostokat.setOutlineColor(sf::Color::Black);
            sf::Vector2f wielkosc;
            wielkosc.x=20;
            wielkosc.y=10;
            prostokat.setSize(wielkosc);
            sf::Vector2i pozycja_myszy;
            pozycja_myszy=sf::Mouse::getPosition();
            sf::Event pisanie;
            if(zdarzenie.type==sf::Event::MouseButtonPressed && (pozycja_myszy.x<x+wielkosc.x &&pozycja_myszy.x>x) &&(pozycja_myszy.y<y+wielkosc.y &&pozycja_myszy.y>y))
            {
                if(pisanie.type==sf::Event::TextEntered)
                {

                }
                pobranie.getString();
            }



        }
    protected:

    private:
};

#endif // PODAJ_ZMIENNA_H
