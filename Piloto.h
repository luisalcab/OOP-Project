#ifndef PILOTO_H_INCLUDED
#define PILOTO_H_INCLUDED

#include "Persona.h"
class Piloto: public Persona{
    public:
        Piloto();
        Piloto(string nom, string nacion, int num);
        int getNumeroLicencia() const;
        void setNumeroLicencia(int num);
        void imprime() override;
    private:
        int numeroLicencia;
};

Piloto :: Piloto(){
    numeroLicencia = 0;
}

Piloto :: Piloto(string nom, string nacion, int num):Persona(nom,nacion){
    numeroLicencia = num;
}

int Piloto :: getNumeroLicencia() const{
    return numeroLicencia;
}

void Piloto :: setNumeroLicencia(int num){
    numeroLicencia = num;
}

void Piloto :: imprime(){
    cout << "Nombre: " << getNombre() << endl;
    cout << "Nacionalidad: " << getNacionalidad() << endl;
    cout << "Numero de Licencia: " << getNumeroLicencia() << endl;
}


#endif