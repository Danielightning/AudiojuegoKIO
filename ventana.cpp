ventana::ventana(int x,int y,string titulo){
    window(VideoMode(x,y),titulo);
}

void ventana::textr(string direccion){
textura.loadFromFile(direccion);
sprite.setTexture(textura);
}

void ventana::dibujar(){

}
