/***********************************************************************
 * Module:  Operaciones.h
 * Author:  sacoe
 * Modified: martes, 12 de mayo de 2026 19:19:11
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/

#if !defined(__ProyetoEstructura_Operaciones_h)
#define __ProyetoEstructura_Operaciones_h

#include "Nodo.h"

class Operaciones
{
public:
   virtual void insertar(std::string,std::string,std::string,std::string,std::string,std::string)=0;
   virtual Nodo* buscar(void)=0;
   virtual void eliminar(std::string)=0;
   virtual void imprimir(void)=0;

protected:
private:

};

#endif