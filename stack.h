#ifndef _STACK_
#define _STACK_ 0

#include "lista.h"
//#include "colchon.h"

struct stack {
    struct metodos pila;

    /*
    "el camion como tal , podria verse tal vez como pila, como por ejemplo los camiones que son cerrados,
    tenes que llenarnos de adentro hacia afuera y cuando se descargan se sacan del frente hacia adentro"
    */

    bool estaVacio() {
        return pila.isEmpty();
    };

    void push(colchon* pElement) {
        pila.addToBegining(pElement);
    };

    colchon* pop() {
        return pila.removeFirst();
    }

};

#endif