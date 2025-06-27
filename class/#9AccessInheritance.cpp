#include<iostream>



class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    
};

int main() {
  Programmer myObj;
  myObj.salary = 56
  myObj.bonus = 15000;
  std::cout << "Salary: " << myObj.salary << "\n";
  std::cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}