#include <iostream>
#include <map>

int main() {
    

    std::map<std::string, int> m1;

    m1["Jared"] = 5;

    m1.insert({"Paulina" , 22});

    m1.insert({"YO",45});

    for(auto i : m1){
        std::cout<<i.first<<std::endl;
    }

    std::cout<<std::endl;


    m1.erase("Paulina");


    for(auto i : m1){
        std::cout<<i.first<<std::endl;
    }


}
