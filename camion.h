#ifndef _COLADESCARGA_
#define COLADESCARGA 0

#include "lista.h"

class camion {
    private:
/*
    metodos pilaCamion;  //Esto sobra, debido a que esta clase solo debe crear el objeto camión,
                           para lo que es donde guardar, se crea una nueva instancia para la pila
*/
    int capacidad;
    int longitud;
    int ancho;
    int largo;


    public:
    camion(int pCapacidad, int pLongitud, int pAncho, int pLargo) {
        //Constructor para definir parámetros
        
        capacidad = pCapacidad;
        longitud = pLongitud;
        ancho = pAncho;
        largo = pLargo;
    }
};

#endif