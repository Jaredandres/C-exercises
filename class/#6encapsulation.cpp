#include <iostream>

class Employee
{
private:
    int salary;
public:

    void setSalary(int s){
        salary = s;
    }
    void getSalary(){
        std::cout<<salary;
    }
};




int main() {
  
    Employee em1;
    em1.setSalary(50);
    em1.getSalary();
   
  return 0;
}