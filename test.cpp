#include <iostream>
#include<vector>
#include<unordered_map>




int main()
{
    std::vector<int> v = {2,3,4,5};


    v.erase(v.begin());

    for (int i = 0; i < v.size(); i++)
    {
        std::cout<<v[i]<<" ";
    }

    std::unordered_map<int, int> m;

    m[5] = 0;
    m[7] = 1;

    
    for(auto i : m){

        if(i.first == 5){

            std::cout<<"ok";
        }


    }
    

    return 0;
}
