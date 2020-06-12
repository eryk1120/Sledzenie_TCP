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
    podaj_zmienna l1_k;
    double l1;

    /*podaj_zmienna l2_k;
    double l2=l2_k.wpis();
    podaj_zmienna l3_k;
    double l3=l3_k.wpis();

    podaj_zmienna d_k;
    double d=d_k.wpis();
    podaj_zmienna e_k;
    double e=e_k.wpis();

    podaj_zmienna l4_k;
    double l4=l4_k.wpis();
    podaj_zmienna l5_k;
    double l5=l5_k.wpis();
    podaj_zmienna l6_k;
    double l6=l6_k.wpis();

    podaj_zmienna teta_k;
    double teta=teta_k.wpis();
    podaj_zmienna trojzab_k;
    double trojzab=trojzab_k.wpis();

    podaj_zmienna xp_k;
    double xp=xp_k.wpis();
    podaj_zmienna yp_k;
    double yp=yp_k.wpis();
    podaj_zmienna zp_k;
    double zp=zp_k.wpis();

    podaj_zmienna xkon_k;
    double xkon=xkon_k.wpis();
    podaj_zmienna ykon_k;
    double ykon=ykon_k.wpis();
    podaj_zmienna zkon_k;
    double zkon=zkon_k.wpis();

    podaj_zmienna fi1_k;
    double fi1=fi1_k.wpis();
    podaj_zmienna fi2_k;
    double fi2=fi2_k.wpis();
    podaj_zmienna fi3_k;
    double fi3=fi3_k.wpis();
    podaj_zmienna fi4_k;
    double fi4=fi4_k.wpis();
    podaj_zmienna fi5_k;
    double fi5=fi5_k.wpis();

    podaj_zmienna sigma1_k;
    double sigma1=sigma1_k.wpis();
    podaj_zmienna sigma2_k;
    double sigma2=sigma2_k.wpis();
    podaj_zmienna sigma5_k;
    double sigma5=sigma5_k.wpis();
    // pokolei liczenie
    xp=xkon-(l5+l6)*cos(teta*PI/180)*cos(trojzab*PI/180);
    yp=ykon-(l5+l6)*cos(teta*PI/180)*sin(trojzab*PI/   180);
    zp=zkon-(l4+l5)*sin(teta*PI/180);

    double S1=1/(xp*xp+yp*yp)*(e*xp+sigma1*yp*sqrt(xp*xp+yp*yp-e*e));
    double C1=1/(xp*xp+yp*yp)*(-e*xp+sigma1*xp*sqrt(xp*xp+yp*yp-e*e));
    double S5= cos(teta*PI/180)*(sin(trojzab*PI/180)*C1-cos(trojzab*PI/180)*S1);
    double C5=sigma5*sqrt(1-S5*S5);

    double S234=sin(teta*PI/180)/C5;
    double C234=cos(teta*PI/180)/C5*(cos(trojzab*PI/180)*C1+sin(trojzab*PI/180)*S1);
    double xr=xp-l4*C1*C234;
    double yr=yp-l4*S1*C234;
    double zr=zp-l4*S234;

    double a=-l1+sigma1*sqrt(xr*xr+yr*yr-e*e);
    double b=1/(2*l2)*(a*a+zr*zr+l2*l2-l3*l3);
    double S2=1/(a*a+zr*zr)*(zr*b-sigma2*a*sqrt(a*a+zr*zr-b*b));
    double C2=1/(a*a+zr*zr)*(a*b-sigma2*zr*sqrt(a*a+zr*zr-b*b));
    double S3=-sigma2/l3*sqrt(a*a+zr*zr-b*b);
    double C3=(b-l2)/l3;
    double S23=1/l3*(zr-l2*S2);
    double C23=1/l3*(a-l2*C2);
    double S4=S234*C23-C234*S23;
    double C4=C234*C23+S234*S23;
    //obliczenia sporawdzajace i pomocnicze
    double x01=l1*C1;
    double y01=l1*S1;
    double z01=0;

    double x01prim=x01+d*S1;
    double y01prim=y01-d*C1;
    double z01prim=0;

    double x02prim=x01prim+l2*C2*C1;
    double y02prim=y01prim+l2*S1*C2;
    double z02prim=l2*S2;

    double x02=x02prim-(d-e)*S1;
    double y02=y02prim+(d-e)*C1;
    double z02=z02prim;

    xr=x02+l3*C1*C23;
    yr=y02+l3*S1*C23;
    zr=z02+l3*S23;

    xp=xr+l4*C1*C234;
    yp=yr+l4*S1*C234;
    zp=zr+l4*S234;

    xkon=xp+(l5+l6)*cos(teta*PI/180)*cos(trojzab*PI/180);
    ykon=yp+(l5+l6)*cos(teta*PI/180)*sin(trojzab*PI/180);
    zkon=zp+(l5+l6)*cos(teta*PI/180);

    // obliczenia jakis szit

*/
    //robienie okna
    sf::RenderWindow okno;
    okno.create(sf::VideoMode(800,600,30),"L");
    okno.setActive(true);
    //okno g³ówne
    while(okno.isOpen())
    {
        l1=l1_k.wpis(100,100,"Podaj L1");
        okno.clear();


    }
    return 0;
}
