#include "ConfigLoader.cpp"

class Bodega
{
private:
    Configbodega configBodega;
    ConfigPedidos configPedidos;
    List<TarimaGroup> inventario; // crearia un objeto mejor
    Queue<Pedido *> *pedidos;

public:
    Bodega(Configbodega pConfiguracionBodega, ConfigPedidos pConfigPedidos, Flotilla *flotillaManager)
    {
        initBodega();
        // start al hilo de refill
        // start al hilo de generar pedidos
    }

    void initBodega()
    {
        // inicializar esas listas
        // inicializar las pilas de esas listas tambien segun la cantidad que dice configBodega
    }

    // seguro esto va a ser un thread
    void refillInventory()
    {
        while(true){
            //Manera de llenar inventario
            this_thread::sleep_for(configBodega.refilltime);
            //En el main de simulador deberá haber algún tipo de creación de
            //thread que llame este método, para hacerlo nada más se debe
            //debe escribir thread <nombre del thread>(<nombre de este método>);
        }
        // ir a revisar la lista de TarimaGroups para rellenar las pilas con colchones nuevos
    }

    // puede ser un hilo
    // o podria ser que haya solo un hilo y ese hilo controle a refill y al generar
    void generarPedidos()
    {
        // while true
        // genero el random en el rango para saber la cantidad de pedidos a generar
        // para cada pedido a generar, genero el random en el rango para saber cuantos colchones van en el pedido
        // crear el pedido, nuevoPedido
        //
        // una vez que termino
        // hago sleep de ConfigPedidos.tiempoEntreGeneracion
    }

    // thread o bien todo dentro de un thread en bodega
    void atenderPedidos()
    {
        // Pedido currentPedido = pedidos->dequeue();
        // revisar mi lista de tarimasgroup para los tipos de colchon que hay en el pedido puedo armar el pedido
        // si no puedo armar el pedido, lo vuelvo a encolar
        // si si lo puedo armar
        // saco los colchones que sean necesario de los TarimaGroup
        // segun la cantidad asi los voy tirando a los cambiones
        // flotillaManager->enviar(lista de colchones que arme de la orden);
        // sleep de tiempoEntreEnvioDePedidos
    }
};