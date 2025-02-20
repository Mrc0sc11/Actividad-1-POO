#include <iostream>
#include "Cliente.cpp"
using namespace std;

main(){
    string nit, nombres, apellidos, direccion;
    int telefono;

    cout<<"Ingresar Nit: ";
    cin>>nit;
    cout<<"Ingresar Nombres: ";
    cin>>nombres;
    cout<<"Ingrear Apellidos: ";
    cin>>apellidos;
    cout<<"Ingresar Direccion: ";
    cin>>direccion;
    cout<<"Ingresar Telefono: ";
    cin>>telefono;
    //Instancia de un objeto
    Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
    obj.mostrar();
    
    /*
    cout<<"Ingresar Nit: ";
    cin>>nit;
    obj.setNit(nit);
    cout<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<endl;
    */
   
    /*
    Cliente obj = Cliente();
    obj.setNit(nit);
    obj.setNombres(nombres);
    obj.setApellido(apellidos);
    obj.setDireccion(direccion);
    obj.setTelefono(telefono);
    obj.mostrar();
    */
}