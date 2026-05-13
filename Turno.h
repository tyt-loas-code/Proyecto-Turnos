/***********************************************************************
 * Module:  Turno.h
 * Author:  sacoe
 * Modified: martes, 12 de mayo de 2026 17:59:30
 * Purpose: Declaration of the class Turno
 ***********************************************************************/

#if !defined(__ProyetoEstructura_Turno_h)
#define __ProyetoEstructura_Turno_h
#include <string>

class Turno
{
public:
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getPlaca(void);
   void setPlaca(std::string newPlaca);
   std::string getMatricula(void);
   void setMatricula(std::string newMatricula);
   std::string getHora(void);
   void setHora(std::string newHora);
   std::string getFecha(void);
   void setFecha(std::string newFecha);
   Turno(std::string cedula, std::string nombre, std::string placa, std::string matricula, std::string hora, std::string fecha);
   Turno();
   ~Turno();

protected:
private:
   std::string cedula;
   std::string nombre;
   std::string placa;
   std::string matricula;
   std::string hora;
   std::string fecha;


};

#endif