#include <iostream>
#include<vector>
#include<unordered_map>
#include<map>




int main()
{
    std::map<std::string, int> m = {{"Jared",34 },{"Paulina",21}};


    for (int i = 0; i < 2; i++)
    {
        std::cout<<m["Jared"];
    }
    
     
    




    return 0;
}
