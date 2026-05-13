#include "AccionesMenu.h"
#include <iostream>
#include <regex>
#include <fstream>

void AccionesMenu::ingresarTurno(Lista* milista)
{
    Validar v;
    std::cout<<"INGRESAR UN TURNO"<<std::endl;
    bool validar=false;
    std::string cedula, nombre, placa, matricula, hora, fecha;
    while (!validar)
    {
        std::cout<<"Ingrese la cedula"<<std::endl;
        std::cin >> cedula;
        validar = v.validarCedula(cedula);
    }
    
    milista->insertar(cedula,nombre,placa,matricula,hora,fecha);
}

void AccionesMenu::eliminarTurno(Lista* miLista)
{
    std::string cedula;
    std::cout<<"ELIMINAR TURNO"<<std::endl;
    std::cout<<"Ingrese la cedula del turno que desea eliminar"<<std::endl;
    std::cin>>cedula;
    miLista->eliminar(cedula);
}

void AccionesMenu::imprimirTurno(Lista* miLista)
{
    std::string cedula;
    std::cout<<"IMPRIMIR TURNO"<<std::endl;
    std::cout<<"Ingrese la cedula"<<std::endl;
    std::cin >> cedula;
    Nodo* nodo = miLista->buscarTurno(cedula);
    if (nodo != nullptr)
    {
        Turno t = nodo->getTurno();
        std::cout<<"TURNO"<<std::endl;
        std::cout<<"Cedula: "<<t.getCedula()<<std::endl;
        std::cout<<"Nombre: "<<t.getNombre()<<std::endl;
        std::cout<<"Placa: "<<t.getPlaca()<<std::endl;
        std::cout<<"Matricula: "<<t.getMatricula()<<std::endl;
        std::cout<<"Hora: "<<t.getHora()<<std::endl;
        std::cout<<"Fecha: "<<t.getFecha()<<std::endl;
    } else {
        std::cout<<"No se encontro ningun turno registrado"<< std::endl;
    }
    std::cin.ignore();
    std::cin.get();
    system ("cls");
}
