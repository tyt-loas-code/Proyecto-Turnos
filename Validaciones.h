/***********************************************************************
 * Module:  Validaciones.h
 * Author:  sacoe
 * Modified: martes, 12 de mayo de 2026 20:23:24
 * Purpose: Declaration of the class Validaciones
 ***********************************************************************/

#if !defined(__ProyetoEstructura_Validaciones_h)
#define __ProyetoEstructura_Validaciones_h
#include <string>

class Validaciones
{
public:
   virtual bool validarCedula(std::string)=0;
   virtual bool validarNombre(std::string)=0;
   virtual bool validarMatricula(std::string)=0;
   virtual bool validarPlaca(std::string)=0;
   virtual bool validarHora(std::string)=0;
   virtual bool validarFecha(std::string)=0;

protected:
private:

};

#endif