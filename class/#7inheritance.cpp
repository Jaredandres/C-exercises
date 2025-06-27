#include <iostream>

class Vehicle{
    public:
    std::string model;

    void honk(){

        std::cout<<"pipipipipi";
    }

};

class Car: public Vehicle{

    public:
    std::string brand;

};



int main() {
    

    Car c1;
    c1.brand = "Ford";
    c1.model = "Mustang";
    c1.honk();

    std::cout<<"\n"<<c1.brand<<" "<<c1.model;
   
  return 0;
}