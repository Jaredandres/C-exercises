#include <iostream>
#include <vector>

//{2,5,6,7,1,3,4,8,9,10}

void BubbleSort(std::vector<int>& v){
    

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size() - 1; j++)
        {
            if(v[j] > v[j + 1]){
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
        
    }
    




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

    BubbleSort(vec);

    printVec(vec);
    
    return 0;
}
