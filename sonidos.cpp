sonidos::sonidos(){
}

sonidos::sonidos(string direccion){
    if(!buffer.loadFromFile(direccion)){
        printf("Error\n");
    }
    sonido.setBuffer(buffer);
}

void sonidos::play(){
sonido.play();
}
