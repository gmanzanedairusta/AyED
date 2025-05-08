#include<iostream>
 
int main(){
    std::string Nombre;
    std::string Apellido;
    getline(std::cin,Nombre);
    getline(std::cin,Apellido);
    std::cout<<"Hola "<<Nombre<<" "<<Apellido;

    return 0;
}