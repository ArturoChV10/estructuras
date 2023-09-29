#ifndef _NODOGENERICO_
#define _NODOGENERICO_ 1

#include "colchon.h"

struct nodo {
    colchon* data = nullptr;
    struct nodo* next = nullptr;
    struct nodo* previous = nullptr;
};


#endif