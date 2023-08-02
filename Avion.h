#ifndef Avion_h
#define Avion_h

#include "Nave.h"

class Avion:public Nave{
    public:
        Avion();
        Avion(string, double, Piloto, double);
        void setAlturaMaxima(double);
        double getAlturaMaxima() const;
        void imprime();
    private:
        double alturaMaxima;
};

Avion::Avion(){
    alturaMaxima = 0;
}

Avion::Avion(string fab, double pre, Piloto pil, double am):Nave(fab, pre, pil){
    alturaMaxima = am;
}

void Avion::setAlturaMaxima(double am){
    alturaMaxima = am;
}

double Avion::getAlturaMaxima() const{
    return alturaMaxima;
}

void Avion::imprime(){
    Nave::imprime();
    cout << "Altura Maxima: " << alturaMaxima << endl;
}

#endif