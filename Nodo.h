/***********************************************************************
 * Module:  Nodo.h
 * Author:  sacoe
 * Modified: martes, 12 de mayo de 2026 18:39:21
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__ProyetoEstructura_Nodo_h)
#define __ProyetoEstructura_Nodo_h

#include "Turno.h"

class Nodo
{
public:
   Nodo* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);
   Nodo(Turno,Nodo*);
   Turno getTurno();
   void setTurno(Turno);
   Nodo();
   ~Nodo();

protected:
private:
   Turno turno;
   Nodo* siguiente;
};

#endif