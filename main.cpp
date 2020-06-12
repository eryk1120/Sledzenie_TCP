#include <iostream>
#include "podaj_zmienna.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <cmath>
#define PI 3.1415
using namespace std;

int main()
{

    //Tworzenie zmiennych
    podaj_zmienna l1;
    podaj_zmienna l2;
    podaj_zmienna l3;


    podaj_zmienna d;
    podaj_zmienna e;

    podaj_zmienna l4;
    podaj_zmienna l5;
    podaj_zmienna l6;

    podaj_zmienna teta;
    podaj_zmienna trojzab;

    podaj_zmienna xp;
    podaj_zmienna yp;
    podaj_zmienna zp;

    podaj_zmienna xkon;
    podaj_zmienna ykon;
    podaj_zmienna zkon;

    podaj_zmienna fi1;
    podaj_zmienna fi2;
    podaj_zmienna fi3;
    podaj_zmienna fi4;
    podaj_zmienna fi5;

    podaj_zmienna sigma1;
    podaj_zmienna sigma2;
    podaj_zmienna sigma5;
    // pokolei liczenie
    xp.wynik=xkon.wynik-(l5.wynik+l6.wynik)*cos(teta.wynik*PI/180)*cos(trojzab.wynik*PI/180);
    yp.wynik=ykon.wynik-(l5.wynik+l6.wynik)*cos(teta.wynik*PI/180)*sin(trojzab.wynik*PI/180);
    zp.wynik=zkon.wynik-(l4.wynik+l5.wynik)*sin(teta.wynik*PI/180);

    double S1=1/(xp.wynik*xp.wynik+yp.wynik*yp.wynik)*(e.wynik*xp.wynik+sigma1.wynik*yp.wynik*sqrt(xp.wynik*xp.wynik+yp.wynik*yp.wynik-e.wynik*e.wynik));
    double C1=1/(xp.wynik*xp.wynik+yp.wynik*yp.wynik)*(-e.wynik*xp.wynik+sigma1.wynik*xp.wynik*sqrt(xp.wynik*xp.wynik+yp.wynik*yp.wynik-e.wynik*e.wynik));
    double S5= cos(teta.wynik*PI/180)*(sin(trojzab.wynik*PI/180)*C1-cos(trojzab.wynik*PI/180)*S1);
    double C5=sigma5.wynik*sqrt(1-S5*S5);

    double S234=sin(teta.wynik*PI/180)/C5;
    double C234=cos(teta.wynik*PI/180)/C5*(cos(trojzab.wynik*PI/180)*C1+sin(trojzab.wynik*PI/180)*S1);
    double xr=xp.wynik-l4.wynik*C1*C234;
    double yr=yp.wynik-l4.wynik*S1*C234;
    double zr=zp.wynik-l4.wynik*S234;

    double a=-l1.wynik+sigma1.wynik*sqrt(xr*xr+yr*yr-e.wynik*e.wynik);
    double b=1/(2*l2.wynik)*(a*a+zr*zr+l2.wynik*l2.wynik-l3.wynik*l3.wynik);
    double S2=1/(a*a+zr*zr)*(zr*b-sigma2.wynik*a*sqrt(a*a+zr*zr-b*b));
    double C2=1/(a*a+zr*zr)*(a*b-sigma2.wynik*zr*sqrt(a*a+zr*zr-b*b));
    double S3=-sigma2.wynik/l3.wynik*sqrt(a*a+zr*zr-b*b);
    double C3=(b-l2.wynik)/l3.wynik;
    double S23=1/l3.wynik*(zr-l2.wynik*S2);
    double C23=1/l3.wynik*(a-l2.wynik*C2);
    double S4=S234*C23-C234*S23;
    double C4=C234*C23+S234*S23;
    //obliczenia sporawdzajace i pomocnicze
    double x01=l1.wynik*C1;
    double y01=l1.wynik*S1;
    double z01=0;

    double x01prim=x01+d.wynik*S1;
    double y01prim=y01-d.wynik*C1;
    double z01prim=0;

    double x02prim=x01prim+l2.wynik*C2*C1;
    double y02prim=y01prim+l2.wynik*S1*C2;
    double z02prim=l2.wynik*S2;

    double x02=x02prim-(d.wynik-e.wynik)*S1;
    double y02=y02prim+(d.wynik-e.wynik)*C1;
    double z02=z02prim;

    xr=x02+l3.wynik*C1*C23;
    yr=y02+l3.wynik*S1*C23;
    zr=z02+l3.wynik*S23;

    xp.wynik=xr+l4.wynik*C1*C234;
    yp.wynik=yr+l4.wynik*S1*C234;
    zp.wynik=zr+l4.wynik*S234;

    xkon.wynik=xp.wynik+(l5.wynik+l6.wynik)*cos(teta.wynik*PI/180)*cos(trojzab.wynik*PI/180);
    ykon.wynik=yp.wynik+(l5.wynik+l6.wynik)*cos(teta.wynik*PI/180)*sin(trojzab.wynik*PI/180);
    zkon.wynik=zp.wynik+(l5.wynik+l6.wynik)*cos(teta.wynik*PI/180);

    // obliczenia jakis szit


    //robienie okna
    sf::RenderWindow okno;
    okno.create(sf::VideoMode(800,600,30),"L");
    okno.setActive(true);
    //okno g³ówne
    while(okno.isOpen())
    {
        okno.clear();
        xkon.wyswietl(100,100,"HI",okno);

    }
    return 0;
}
