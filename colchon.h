#ifndef _COLCHON_
#define _COLCHON_

#include "lista.h"
#include <string>

using namespace std;

class colchon {
private:
/*
    metodos pilaColchon;  //Esto sobra, debido a que esta clase solo debe crear el objeto colchón,
                           para que después pueda ser manejado dentro de pilas o colas
*/
    string name;
    int peso;
    string medidas;


public:
    colchon(const string pName, int pPeso, const string pMedidas) {
        //Constructor para definir parámetros
        name = pName;
        peso = pPeso;
        medidas = pMedidas;
    }
};

#endif