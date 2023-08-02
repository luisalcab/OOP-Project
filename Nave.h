#ifndef NAVE_H_INCLUDED
#define NAVE_H_INCLUDED

#include "Piloto.h"
class Nave{
    public:
        Nave();
        Nave(string fab, double pre, Piloto pil);
        string getFabricante() const;
        double getPrecio() const;
        Piloto getPiloto() const;
        void setFabricante(string fav);
        void setPrecio(double pre);
        void setPiloto(Piloto pil);
        virtual void imprime();
    private:
        string fabricante;
        double precio;
        Piloto piloto;
};

Nave :: Nave(){
    fabricante = "";
    precio = 0;
}

Nave :: Nave(string fab, double pre, Piloto pil){
    fabricante = fab;
    precio = pre;
    piloto = pil;
}

string Nave :: getFabricante() const{
    return fabricante;
}

double Nave :: getPrecio() const{
    return precio;
}

Piloto Nave :: getPiloto() const{
    return piloto;
}

void Nave :: setFabricante(string fab){
    fabricante = fab;
}

void Nave :: setPrecio(double pre){
    precio = pre;
}

void Nave :: setPiloto(Piloto pil){
    piloto = pil;
}

void Nave :: imprime(){
    piloto.imprime();
    cout << "Fabricante: " << fabricante << endl;
    cout << "Precio: " << precio << endl;
}


#endif