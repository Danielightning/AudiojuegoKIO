#ifndef SONIDOS_H_INCLUDED
#define SONIDOS_H_INCLUDED

class sonidos{
public:
    sonidos();
    sonidos(string direccion);
    void play();
private:
    Sound sonido;
    SoundBuffer buffer;
};

#endif // SONIDOS_H_INCLUDED
