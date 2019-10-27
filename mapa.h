#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED

struct punto{
    int y[X];
}x[X];

void limpia(){
int i,o;
for(i=0;i<X;i++)
    for(o=0;o<X;o++)
        x[i].y[o]=0;
}

void mapauno(){
int a;
for(a=0;a<X*0.2;a++)
    x[int(X*0.2)].y[a]=1;
for(a=0;a<X*0.2;a++)
    x[int(X*0.2)].y[int(X*0.4)+a]=1;
for(a=0;a<X*0.6;a++)
    x[int(X*0.2)+a].y[int(X*0.6)]=1;
for(a=0;a<X*0.2;a++)
    x[int(X*0.8)].y[int(X*0.6)+a]=1;
for(a=0;a<X*0.2;a++)
    x[int(X*0.8)+a].y[int(X*0.8)]=1;
for(a=0;a<X*0.5;a++)
    x[int(X*0.4)].y[a]=1;
for(a=0;a<X*0.2;a++)
    x[int(X*0.6)].y[int(X*0.4)+a]=1;
for(a=0;a<X*0.4;a++)
    x[int(X*0.4)+a].y[int(X*0.2)]=1;
for(a=0;a<X*0.8;a++)
    x[int(X)].y[int(X)+a]=1;
//charcos
for(a=0;a<X*0.2;a++)
    for(int b=0;b<X*0.20;b++)
    x[b].y[int(X*0.8)+a]=2;
 x[int(X*0.5)].y[int(X*0.1)]=3;
  x[int(X*0.55)].y[int(X*0.1)]=3;
   x[int(X*0.5)].y[int(X*0.15)]=3;
  x[int(X*0.55)].y[int(X*0.15)]=3;
}

#endif // MAPA_H_INCLUDED
