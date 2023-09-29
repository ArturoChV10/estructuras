#ifndef COLCHON_H
#define COLCHON_H

#include "lista.h"
#include <string>

using namespace std;

class colchon {
    private:
        string name;
        int peso;
        string medidas;


    public:
        colchon(string pName, int pPeso, string pMedidas) {
            name = pName;
            peso = pPeso;
            medidas = pMedidas;
        }

        string getName() {
            return name;
        }

        int getPeso() {
            return peso;
        }
};

#endif