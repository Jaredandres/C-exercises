#include <iostream>

#include<string>

struct Persona
{
    int edad;
    std::string nombre;

};

Persona p1;

void mostraDatos(Persona p1){
    std::cout<<"name: "<<p1.nombre<<std::endl;
    p1.edad = 3;
    std::cout<<"age: "<<p1.edad;
}


int main()
{
    p1.nombre = " Jared";
    p1.edad = 23;

    mostraDatos(p1);
    return 0;
}
