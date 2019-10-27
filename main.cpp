
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
using namespace sf;
using namespace std;
#include <windows.h>
#include <stdio.h>
#define M 5
#define X 100
#include "textbox.h"
#include "sonidos.h"
#include "sonidos.cpp"
#include "mapa.h"

void configuracion();

int main(){
    limpia();
    mapauno();

   // sonidos sonido("msc/golpe.wav");
    sonidos spared("msc/golpe.wav");
    sonidos scharco("msc/charco.wav");
    sonidos fanfarria("msc/fanfarria.wav");
    RenderWindow partida(VideoMode(X,X),"Partida");
    Texture fondo,punto,pared,charco,alarma;

    fondo.loadFromFile("img/fondo 1000x1000.png");
    punto.loadFromFile("img/punto 5x5.png");
    pared.loadFromFile("img/pared 5x5.png");
    charco.loadFromFile("img/charco 5x5.png");
    alarma.loadFromFile("img/alarma.png");

    Sprite f1(fondo),f2(punto),f3(pared),f4(charco),f5(alarma);

    int ypos=0,xpos=0,dx=0,dy=0;

while(partida.isOpen()){

    Event e;

    while(partida.pollEvent(e)){
    if(e.type == Event::Closed)
        partida.close();
    if(Keyboard::isKeyPressed(Keyboard::LShift))
        if(e.key.code == Keyboard::A){ printf("Shift y +\n"); configuracion();}
    switch(e.key.code){
    case Keyboard::Up: if(!(x[xpos].y[ypos-M]==1))dy=-M; else spared.play(); break;
    case Keyboard::Down: if(!(x[xpos].y[ypos+M]==1))dy=M; else spared.play(); break;
    case Keyboard::Left: if(!(x[xpos-M].y[ypos]==1))dx=-M; else spared.play(); break;
    case Keyboard::Right: if(!(x[xpos+M].y[ypos]==1)) dx=M; else spared.play(); break;
    case Keyboard::End: xpos=X; ypos=X; break;
    case Keyboard::Home: xpos=0; ypos=0; break;
    default: break;
    }
    if(x[xpos].y[ypos]==2)
        scharco.play();
        if(x[xpos].y[ypos]==3)
            fanfarria.play();
    }
    if(xpos>=0&&xpos<=X){xpos+=dx; dx=0;}
    if(ypos>=0&&ypos<=X){ypos+=dy; dy=0;}
    if(xpos<0) xpos=0;
    if(ypos<0) ypos=0;
    if(xpos>X) xpos=X;
    if(ypos>X) ypos=X;
    f2.setPosition(xpos,ypos);
    partida.clear(Color::Blue);

    partida.draw(f1);
    for(int a=0;a<X;a++)
    for(int b=0;b<X;b++)
        switch(x[a].y[b]){
    case 1: f3.setPosition(a,b); partida.draw(f3); break;
    case 2: f4.setPosition(a,b); partida.draw(f4); break;
    case 3: f5.setPosition(a,b); partida.draw(f5); break;
        }
    partida.draw(f2);
    partida.display();
}
return 1;
}

void configuracion(){
    /*
    printf("Ingrese un lado del cuadrado\n");
    scanf("%d",&n);
    X=n;
    */
    RenderWindow config(VideoMode(700,700),"Configuracion");

    while(config.isOpen()){
        Event e;
        while(config.pollEvent(e)){
            if(e.type == Event::Closed)
                config.close();
        }
    }

}
