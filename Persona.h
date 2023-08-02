#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class Persona{
    public:
        Persona();
        Persona(string nom, string nacion);
        string getNombre() const;
        string getNacionalidad() const;
        void setNombre(string nom);
        void setNacionalidad(string nacion);
        virtual void imprime() = 0;
    private:
        string nombre;
        string nacionalidad;
};

Persona :: Persona(){
    nombre = "";
    nacionalidad = "";
}

Persona :: Persona(string nom, string nacion){
    nombre = nom;
    nacionalidad = nacion;
}

string Persona :: getNombre() const{
    return nombre;
}

string Persona :: getNacionalidad() const{
    return nacionalidad;
}

void Persona :: setNombre(string nom){
    nombre = nom;
}

void Persona :: setNacionalidad(string nacion){
    nacionalidad = nacion;
}


#endif