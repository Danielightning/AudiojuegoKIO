#ifndef VENTANA_H_INCLUDED
#define VENTANA_H_INCLUDED

class ventana{
public:
    ventana(){}
    ventana(int x,int y,string titulo);
    void textr();
    void dibujar();
    bool abierto();
private:
    RenderWindow window;
    Texture textura;
    Sprite sprite;
};

#endif // VENTANA_H_INCLUDED
