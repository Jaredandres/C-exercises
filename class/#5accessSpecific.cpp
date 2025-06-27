#include <iostream>


class Myclasstest {
  public:
  int x;
  protected:
  int y;

};

int main() {
  
    Myclasstest c1;
    c1.x = 56;
    c1.y = 57;

    std::cout<<c1.x<<"   "<<c1.y;

  return 0;
}