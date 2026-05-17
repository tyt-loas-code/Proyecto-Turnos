#include "Lista.h"
#include "Validar.h"

class AccionesMenu
{
private:
public:
    void cargarDatos(Lista*);
    void ingresarTurno(Lista*);
    void eliminarTurno(Lista*);
    void imprimirTurno(Lista*);
    void generarCorreos(Lista*);
    AccionesMenu();
    ~AccionesMenu();
};

