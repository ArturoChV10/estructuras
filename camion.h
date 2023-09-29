#ifndef CAMION_H
#define CAMION_H 

#include "lista.h"

class camion {
private:
/*
    metodos pilaCamion;  //Esto sobra, debido a que esta clase solo debe crear el objeto camión,
                           para lo que es donde guardar, se crea una nueva instancia para la pila
*/
    int capacidad;
    int ancho;
    int largo;


public:
    camion(int pCapacidad, int pAncho, int pLargo) {
        capacidad = pCapacidad;
        ancho = pAncho;
        largo = pLargo;
    }
};

#endif