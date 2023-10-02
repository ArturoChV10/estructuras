class Simulador
{
private:
    Configloader configloader;
    Bodega *labogeda;

public:
    Simulador()
    {
        initSimulation();
    }

    void initSimulation()
    {

        labogeda = new Bodega(configloader.getConfiguracionDeBodega());
    }
}