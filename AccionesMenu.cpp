#include "AccionesMenu.h"
#include <iostream>
#include <regex>
#include <fstream>

AccionesMenu::AccionesMenu()
{
}

AccionesMenu::~AccionesMenu()
{
}

void AccionesMenu::cargarDatos(Lista* milista)
{
    std::ifstream archivo("C:/Programas/ListaSimples/datos.txt");
    if (!archivo.is_open()){
        std::cout<<"No se encontro el archivo"<<std::endl;
        return;
    }

    std::string c, n, a, p, m, h, f;
    while (archivo >> c >> n >> a >> p >> m >> h >> f)
    {
        milista->insertar(c,n,a,p,m,h,f);
    }
    std::cout<<"Archibos cargados" <<std::endl;
    archivo.close();
}

void AccionesMenu::ingresarTurno(Lista* milista)
{
    Validar v;
    std::cout<<"INGRESAR UN TURNO"<<std::endl;
    bool validar=false;
    std::string cedula, nombre, apellido, placa, matricula, hora, fecha;
    while (!validar)
    {
        std::cout<<"Ingrese la cedula"<<std::endl;
        std::cin >> cedula;
        validar = v.validarCedula(cedula);
    }
    
    milista->insertar(cedula,nombre,apellido,placa,matricula,hora,fecha);
    std::cin.ignore();
    std::cin.get();
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
        std::cout<<"Apellido: "<<t.getApellido()<<std::endl;
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

void AccionesMenu::generarCorreos(Lista* milista)
{

}
