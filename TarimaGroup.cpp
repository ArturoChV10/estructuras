#include <string>
#include "Colchon.h"
#include "stack.h"
#include "Configloader.cpp"
#include <vector>

class TarimaGroup
{
private:
    int cantidadColchones;
    string tipoColchon;
    metodos<stack<Colchon *> *> tarimas;
    Configloader configuracion;

public:
    TarimaGroup()
    {
        ConfigBodega infoBodega = configuracion.getConfigBodega;
        ConfigColchones infoColchones = configuracion.getConfigColchones;
        vector<int> sizes;
        int maxColchonesPorTarima = infoBodega.tarimasize;
        int cantidadTarimasFull = infoBodega.fullquantity;
        sizes.push:back(cantidadTarimasFull);
        int cantidadTarimasQueen = infoBodega.queenquantity;
        sizes.push:back(cantidadTarimasQueen);
        int cantidadTarimasTwin = infoBodega.twinquantity;
        sizes.push:back(cantidadTarimasTwin);
        int cantidadTarimasKing = infoBodega.kingquantity;
        sizes.push:back(cantidadTarimasKing);
        vector<string> name = infoColchones.name;
        vector<int> peso = infoColchones.pesoColchon;
        vector<int> alto = infoColchones.altoColchon;
        vector<int> ancho = infoColchones.anchoColchon;
        vector<int> largo = infoColchones.largoColchon;
        for(int j = 0; i < 4; i++) {
            for(int i = 0; i < sizes[j]; i++){
                tarimas.push(llenarInventario(name[j], peso[j], alto[j], ancho[j], largo[j], maxColchonesPorTarima));
            }
        }
    }

    stack<Colchon *> llenarInventario(string pName, int pPeso, int pAlto, int pAncho, int pLargo, int maxColchonesPorTarima)
    {
        stack<Colchon *> tarimas;
            for(int i=0; i<maxColchonesPorTarima; i++) {
                Colchon colchon = new Colchon(pName, pPeso, pAlto, pAncho, pLargo);
                tarimas.push(colchon);
            }
            // inicializar la lista de tarimas y puedo meter los colchones
        return tarimas;
    }

    metodos<Colchon *> sacarColchones(int pCantidad)
    {
    }
}