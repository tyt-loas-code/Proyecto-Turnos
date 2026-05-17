/***********************************************************************
 * Module:  Lista.cpp
 * Author:  sacoe
 * Modified: martes, 12 de mayo de 2026 19:07:16
 * Purpose: Implementation of the class Lista
 ***********************************************************************/

#include "Lista.h"
#include <iostream>

////////////////////////////////////////////////////////////////////////
// Name:       Lista::Lista()
// Purpose:    Implementation of Lista::Lista()
// Return:     
////////////////////////////////////////////////////////////////////////

Lista::Lista()
{
   this->cabeza = nullptr;
   this->cola = nullptr;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::~Lista()
// Purpose:    Implementation of Lista::~Lista()
// Return:     
////////////////////////////////////////////////////////////////////////

Lista::~Lista()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::getCabeza()
// Purpose:    Implementation of Lista::getCabeza()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo* Lista::getCabeza()
{
   return this->cabeza;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::setCabeza(Nodo newCabeza)
// Purpose:    Implementation of Lista::setCabeza()
// Parameters:
// - newCabeza
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::setCabeza(Nodo* newCabeza)
{
   this->cabeza = newCabeza;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::getCola()
// Purpose:    Implementation of Lista::getCola()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo* Lista::getCola()
{
   return this->cola;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::setCola(Nodo newCola)
// Purpose:    Implementation of Lista::setCola()
// Parameters:
// - newCola
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::setCola(Nodo* newCola)
{
   this->cola = newCola;
}

void Lista::insertar(std::string cedula, std::string nombre, std::string apellido, std::string placa, std::string matricula, std::string hora, std::string fecha)
{
   Nodo* nuevo = new Nodo(Turno(cedula,nombre,apellido,placa,matricula,hora,fecha),nullptr);

   if(cabeza==nullptr){
        cabeza=nuevo;
        cola=nuevo;
        cola->setSiguiente(cabeza);
    }else{
        nuevo->setSiguiente(cabeza);
        cabeza=nuevo;
        cola->setSiguiente(cabeza);
    }
}

void Lista::eliminar(std::string cedula)
{
   if (cabeza==nullptr)
   {
      return;
   }
   
   Nodo* actual = cabeza;
   Nodo* anterior = cola;
   do
   {
      if (actual->getTurno().getCedula() == cedula)
      {
         if(actual == cabeza && actual == cola){
            delete actual;
            cabeza = nullptr;
            cola = nullptr;
            return;
         } else {
            if (actual == cabeza)
            {
               cabeza = cabeza->getSiguiente();
               cola->setSiguiente(cabeza);
            } else if (actual == cola)
            {
               cola = anterior;
               cola->setSiguiente(cabeza);
            } else {
               anterior->setSiguiente(actual->getSiguiente());
            }
            delete actual;
            return;
         }
      }
      anterior = actual;
      actual = actual->getSiguiente();
   } while (actual != cabeza);
   std::cout<<"Turno no registrado con la cedula"<<std::endl;
}

Nodo* Lista::buscarTurno(std::string cedula)
{
   Nodo* actual = cabeza;
   do
   {
      if (actual->getTurno().getCedula() == cedula)
      {
         return actual;      
      }
      actual = actual->getSiguiente();
   } while (actual->getSiguiente() != cabeza);
   
   return nullptr;
}