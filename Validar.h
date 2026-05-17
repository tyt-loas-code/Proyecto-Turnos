#include "Validaciones.h"

class Validar : public Validaciones
{
    public:
        bool validarCedula(std::string cedula) override;
        bool validarPalabra(std::string palabra) override;
        bool validarPlaca(std::string placa) override;
        bool validarMatricula(std::string matricula) override;
        bool validarHora(std::string hora) override;
        bool validarFecha(std::string fecha) override;
};