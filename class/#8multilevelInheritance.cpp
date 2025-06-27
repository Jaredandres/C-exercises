#include<iostream>


class MyClass {
  public:
    int s;
    void myFunction() {
      std::cout << "Some content in parent class." ;
    }
};


class MyChild: public MyClass {
};


class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.s = 65;
  std::cout<<myObj.s;
  myObj.myFunction();
  return 0;
}