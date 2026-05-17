/***********************************************************************
 * Module:  Turno.cpp
 * Author:  sacoe
 * Modified: martes, 12 de mayo de 2026 17:59:30
 * Purpose: Implementation of the class Turno
 ***********************************************************************/

#include "Turno.h"

////////////////////////////////////////////////////////////////////////
// Name:       Turno::getCedula()
// Purpose:    Implementation of Turno::getCedula()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Turno::getCedula(void)
{
   return cedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::setCedula(std::string newCedula)
// Purpose:    Implementation of Turno::setCedula()
// Parameters:
// - newCedula
// Return:     void
////////////////////////////////////////////////////////////////////////

void Turno::setCedula(std::string newCedula)
{
   cedula = newCedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::getNombre()
// Purpose:    Implementation of Turno::getNombre()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Turno::getNombre(void)
{
   return nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::setNombre(std::string newNombre)
// Purpose:    Implementation of Turno::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Turno::setNombre(std::string newNombre)
{
   nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::getApellido()
// Purpose:    Implementation of Turno::getApellido()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Turno::getApellido(void)
{
   return apellido;
}


////////////////////////////////////////////////////////////////////////
// Name:       Turno::setNombre(std::string newApellido)
// Purpose:    Implementation of Turno::setApellido()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Turno::setApellido(std::string newApellido)
{
   nombre = newApellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::getPlaca()
// Purpose:    Implementation of Turno::getPlaca()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Turno::getPlaca(void)
{
   return placa;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::setPlaca(std::string newPlaca)
// Purpose:    Implementation of Turno::setPlaca()
// Parameters:
// - newPlaca
// Return:     void
////////////////////////////////////////////////////////////////////////

void Turno::setPlaca(std::string newPlaca)
{
   placa = newPlaca;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::getMatricula()
// Purpose:    Implementation of Turno::getMatricula()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Turno::getMatricula(void)
{
   return matricula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::setMatricula(std::string newMatricula)
// Purpose:    Implementation of Turno::setMatricula()
// Parameters:
// - newMatricula
// Return:     void
////////////////////////////////////////////////////////////////////////

void Turno::setMatricula(std::string newMatricula)
{
   matricula = newMatricula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::getHora()
// Purpose:    Implementation of Turno::getHora()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Turno::getHora(void)
{
   return hora;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::setHora(std::string newHora)
// Purpose:    Implementation of Turno::setHora()
// Parameters:
// - newHora
// Return:     void
////////////////////////////////////////////////////////////////////////

void Turno::setHora(std::string newHora)
{
   hora = newHora;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::getFecha()
// Purpose:    Implementation of Turno::getFecha()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Turno::getFecha(void)
{
   return fecha;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::setFecha(std::string newFecha)
// Purpose:    Implementation of Turno::setFecha()
// Parameters:
// - newFecha
// Return:     void
////////////////////////////////////////////////////////////////////////

void Turno::setFecha(std::string newFecha)
{
   fecha = newFecha;
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::Turno(std::string cedula, std::string nombre, std::string placa, std::string matricula, std::string hora, std::string fecha)
// Purpose:    Implementation of Turno::Turno()
// Parameters:
// - cedula
// - nombre
// - placa
// - matricula
// - hora
// - fecha
// Return:     
////////////////////////////////////////////////////////////////////////

Turno::Turno(std::string cedula, std::string nombre, std::string apellido, std::string placa, std::string matricula, std::string hora, std::string fecha)
{
   this->cedula = cedula;
   this->nombre = nombre;
   this->apellido = apellido;
   this->placa = placa;
   this->matricula = matricula;
   this->hora = hora;
   this->fecha = fecha;
}

Turno::Turno()
{
   this->cedula = "";
   this->nombre = "";
   this->placa = "";
   this->matricula = "";
   this->hora = "";
   this->fecha = "";
}

////////////////////////////////////////////////////////////////////////
// Name:       Turno::~Turno()
// Purpose:    Implementation of Turno::~Turno()
// Return:     
////////////////////////////////////////////////////////////////////////

Turno::~Turno()
{
   // TODO : implement
}