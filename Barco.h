#ifndef Barco_h
#define Barco_h

#include "Nave.h"

class Barco:public Nave{
    public:
        Barco();
        Barco(string, double, Piloto, float);
        void setLargo(float);
        float getLargo() const;
        void imprime();
    private:
        float largo;
};

Barco::Barco(){
    largo = 0;
}

Barco::Barco(string fab, double pre, Piloto pil, float lar):Nave(fab, pre, pil){
    largo  = lar;
}

void Barco::setLargo(float lar){
    largo = lar;
}

float Barco::getLargo() const{
    return largo;
}

void Barco::imprime(){
    Nave::imprime();
    cout << "Largo: " << largo << endl;
}

#endif