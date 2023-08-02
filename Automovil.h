#ifndef Auto_h
#define Auto_h

#include "Nave.h"

class Auto:public Nave{
    public:
        Auto();
        Auto(string, double, Piloto, string);
        void setColor(string);
        string getColor() const;
    private:
        string color;
};

Auto::Auto(){
    color = "";
}

Auto::Auto(string fab, double pre, Piloto pil, string color_):Nave(fab, pre, pil){
    color = color_;
}

void Auto::setColor(string color_){
    color = color_;
}

string Auto::getColor() const{
    return color;
}

#endif