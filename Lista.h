/***********************************************************************
 * Module:  Lista.h
 * Author:  sacoe
 * Modified: martes, 12 de mayo de 2026 19:07:16
 * Purpose: Declaration of the class Lista
 ***********************************************************************/

#if !defined(__ProyetoEstructura_Lista_h)
#define __ProyetoEstructura_Lista_h

#include "Nodo.h"
#include "Operaciones.h"

class Lista
{
public:
   Lista();
   ~Lista();
   Nodo* getCabeza();
   void setCabeza(Nodo*);
   Nodo* getCola();
   void setCola(Nodo*);
   void insertar(std::string cedula, std::string nombre, std::string apellido, std::string placa, std::string matricula, std::string hora, std::string fecha);
   void eliminar(std::string);
   Nodo* buscarTurno(std::string);

protected:
private:
   Nodo* cabeza;
   Nodo* cola;


};

#endif