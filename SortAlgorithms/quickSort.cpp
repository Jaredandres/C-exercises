#include <iostream>
#include <vector>
#include <utility>
#include <cstdlib>
#include <ctime>


//{2,5,6,7,1,3,4,8,9,10}

void quickSort(std::vector<int>& v, int low, int high){
    
    


}

void printVec(std::vector<int>& v){

    for (int i = 0; i < v.size(); i++)
    {
        std::cout<<v[i]<<" ";
    }


    std::cout<<std::endl;

}





int main()
{

    std::vector<int> vec = {5,7,2,6,1,3,4,8,9,10};


    printVec(vec);

    quickSort(vec);

    printVec(vec);
    
    return 0;
}
