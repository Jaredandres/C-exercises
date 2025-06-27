#include <iostream>


class Car {
  public:
    std::string brand;
    std::string model;

    Car() {
      brand = "Unknown";
      model = "Unknown";
    }

    Car(std::string b, std::string m) {
      brand = b;
      model = m;
    }
};

int main() {
  Car car1;
  Car car2("BMW", "X5");
  Car car3("Ford", "Mustang");

  std::cout << "Car1: " << car1.brand << " " << car1.model << "\n";
  std::cout << "Car2: " << car2.brand << " " << car2.model << "\n";
  std::cout << "Car3: " << car3.brand << " " << car3.model;
  return 0;
}