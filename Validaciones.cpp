#include "Validar.h"
#include <regex>
#include <iostream>
#include <fstream>

bool verificarExistencia(std::string cedula)
{
    std::ifstream archivo("C:/Programas/ProyectoTurnos/datos.txt");
    if (archivo.is_open()){
    } else {
        std::cout<<"No se encontro el archivo"<< std::endl;
        archivo.close();
        return false;
    }
    std::string nombre, ced;
    while (archivo >> ced) {
      if (ced == cedula){
         std::cout<<"Cedula ya existe en la lista"<<std::endl;
         return true;
      }
    }
    archivo.close();
    return false;
}

bool codigoProvincia(std::string cod)
{
   std::ifstream archivo("C:/Programas/ProyectoTurnos/Provincias.txt");
   if (!archivo.is_open())
   {
      std::cout<<"No se pudo abrir el arhivo"<<std::endl;
      return true;
   }
   std::string codigo;
   while (archivo >> codigo)
   {
      if (codigo == cod)
      {
         return true;
      }
   }
   return false;   
}

int obtenerSize(std::string palabra)
{
   int size=0;
   const char *pal= palabra.c_str();
   while (*(pal + size) != '\0')
   {
      size++;
   }
   return size;
}

bool Validar::validarCedula(std::string cedula)
{
    std::regex patron("^[0-9]+$");
   if (!std::regex_match(cedula, patron)){
      std::cout<<"Ingrese cedula sin letras o caracteres especiales"<<std::endl;
      return false;
   }
   if (obtenerSize(cedula) != 10)
   {
      std::cout<<"Solo se permiten 10 digitos"<<std::endl;
      return false;
   }
   std::string codProvincia = cedula.substr(0,2);
   if(!codigoProvincia(codProvincia))
   {
      return false;
   }

   if (verificarExistencia(cedula))
   {
    std::cout<<"Cedula con turno registrado"<<std::endl;
   }
   return true;
}

bool Validar::validarPalabra(std::string palabra)
{
       std::regex patron("^[a-zA-ZáéíóúÁÉÍÓÚñÑ ]+$");
       if(!std::regex_match(palabra,patron))
       {
        std::cout<<"Nombre solo debe contener letras"<<std::endl;
        return false;
       }
       return true;
}

bool Validar::validarPlaca(std::string placa)
{
    std::regex patron("^[a-zA-Z]{3}([0-9]{4})$");
    if (!std::regex_match(placa, patron))
    {
        std::cout<<"Placa invalida, ingrese una placa correcta"<<std::endl;
        return false;
    }
    return true;
}

bool Validar::validarMatricula(std::string matricula)
{
   return true;
}

bool Validar::validarHora(std::string hora)
{
   return true;
}

bool Validar::validarFecha(std::string fecha)
{
   return true;
}