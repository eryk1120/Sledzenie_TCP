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
        double wynik;
        void wyswietl(int x, int y, string napis, sf::RenderWindow okno)
        {
            // wpisz ...
            sf::Text tekst;
            tekst.setString(napis);
            tekst.setPosition(x, y);
            okno.draw(tekst);
            //klikniêcie mysz¹ i wpisanie tekstu
            sf::Event zdarzenie;
            sf::Text pobranie;
            pobranie.setPosition(x,y+15); //pozycja okienka do wpisywania
            sf::RectangleShape prostokat;
            prostokat.setPosition(x,y+15);// pozycja prostok¹ta
            prostokat.setFillColor(sf::Color::Blue);
            prostokat.setOutlineColor(sf::Color::Black);
            sf::Vector2f wielkosc;
            wielkosc.x=20;
            wielkosc.y=10;
            prostokat.setSize(wielkosc);
            sf::Vector2i pozycja_myszy;
            pozycja_myszy=sf::Mouse::getPosition();
            sf::Event pisanie;
            okno.draw(prostokat);
            if(zdarzenie.type==sf::Event::MouseButtonPressed && (pozycja_myszy.x<x+wielkosc.x &&pozycja_myszy.x>x) &&(pozycja_myszy.y<y+wielkosc.y &&pozycja_myszy.y>y))
            {
                if(pisanie.type==sf::Event::TextEntered)
                {
                    wynik=(double)pisanie.TextEntered;
                    pobranie.setString((char)pisanie.TextEntered);
                    okno.draw(pobranie);
                }

            }
        }
       /* double wpis(int x, int y, string napis)        {

            //klikniêcie mysz¹ i wpisanie tekstu
            sf::Event zdarzenie;
            sf::Text pobranie;
            pobranie.setPosition(x,y+15); //pozycja okienka do wpisywania
            sf::RectangleShape prostokat;
            prostokat.setPosition(x,y+15);// pozycja prostok¹ta
            prostokat.setFillColor(sf::Color::White);
            prostokat.setOutlineColor(sf::Color::Black);
            sf::Vector2f wielkosc;
            wielkosc.x=20;
            wielkosc.y=10;
            prostokat.setSize(wielkosc);
            sf::Vector2i pozycja_myszy;
            pozycja_myszy=sf::Mouse::getPosition();
            sf::Event pisanie;
            double wynik;
            if(zdarzenie.type==sf::Event::MouseButtonPressed && (pozycja_myszy.x<x+wielkosc.x &&pozycja_myszy.x>x) &&(pozycja_myszy.y<y+wielkosc.y &&pozycja_myszy.y>y))
            {
                if(pisanie.type==sf::Event::TextEntered)
                {
                    wynik=(double)pisanie.TextEntered;
                    pobranie.setString((char)pisanie.TextEntered);
                }

            }
            return wynik;
        }*/
    protected:

    private:
};

#endif // PODAJ_ZMIENNA_H
