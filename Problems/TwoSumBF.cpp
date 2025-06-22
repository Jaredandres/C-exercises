#include <iostream>
#include <vector>



void findTarget(std::vector<int>& v, int target){

    std::vector<int> v2;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 1; j < v.size(); j++)
        {
            
            if(i != j && v[i] + v[j] == target){

                v2.push_back(i);
                v2.push_back(j);
                break;
                

            }


        }
        
    }
    

    for (int i = 0; i < v2.size(); i++)
    {
        std::cout<<v2[i]<<" ";
    }
    


}




int main()
{
    int target = 6;
    std::vector<int> v1 = {3,3};




    findTarget(v1,target);




    return 0;
}
