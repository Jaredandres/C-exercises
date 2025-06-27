#include <iostream>
#include<map>
#include<vector>

std::string logestP(std::vector<std::string>& s){

    if(s.empty()){
        return "";
    }

    std::string prefix = s[0]; //flower

    for (int i = 1; i < s.size(); i++)
    {          //flow     //flowe
        while (s[i].find(prefix) != 0)
        {
            prefix = prefix.substr(0,prefix.length() - 1);
            if(prefix.empty()){
                return "";
            }
        }
        
    }
    
    return prefix;

}

int main()
{
    std::vector<std::string> v = {"flower","flow","flight"};

    std::string a = logestP(v);


    std::cout<< a;
    return 0;
}
