#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "Barco.h"
#include "Avion.h"
#include "Automovil.h"

int main() {
    
    Nave* nave = new Nave(); // Solo se puede hacer esta instancia 
    //Persona* persona = new Persona(); 
    //Como la clase persona es abstracta no es posible instanciar un objeto tipo Persona
    Nave* naves[20];
    int cantDatos = 0;
    string nombre, nacionalidad;
    int numeroLicencia;
    string fabricante, color;
    double precio, alturaMaxima;
    float largo;
    string tipoNave, tipoDato;
    ifstream archivo;
    archivo.open("entrada.txt");
    while (archivo >> tipoDato) { 
        if (tipoDato == "Pil" ) { 
            archivo >> nombre >> nacionalidad >> numeroLicencia;
            Piloto piloto(nombre, nacionalidad, numeroLicencia);
            if(tipoNave == "Avion"){
                naves[cantDatos] = new Avion(fabricante, precio, piloto, alturaMaxima);
            }else if(tipoNave == "Barco"){
                naves[cantDatos] = new Barco(fabricante, precio, piloto, largo);
            }else if(tipoNave == "Auto"){
                naves[cantDatos] = new Auto(fabricante, precio, piloto, color);
            }
            cantDatos ++;
        }
        else { 
            tipoNave = tipoDato;
            archivo >> fabricante >> precio;
            if(tipoNave == "Avion"){
                archivo >> alturaMaxima;
            }else if(tipoNave == "Barco"){
                archivo >> largo;
            }else if(tipoNave == "Auto"){
                archivo >> color;
            }
        }
    }
    archivo.close();

    for (int c = 0; c < cantDatos; c++) {
        naves[c]->imprime();
    }
    return 0;
}
