#include <string>
#include "list.h"

class Pedido
{
private:
    int number;
    struct t_date fecha;
    List<Colchon *> colchones;

public:
    Pedido(int pCantidad)
    {
        // numero de orden puede ser un random grande
        colchones = new List<Colchon *>();
    }

    void addColchon(Colchon *pColchon)
    {
        // agrego colchones a la lista
    }

    int getCantidadColchones()
    {
        return colchones->size();
    }
}