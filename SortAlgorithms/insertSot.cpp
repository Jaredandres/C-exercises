#include <iostream>
#include <vector>

//{2,5,6,7,1,3,4,8,9,10}

void insertSort(std::vector<int>& v){

    int pos; //4
    int aux; //1

    for (int i = 0; i < v.size(); i++)
    {
        pos = i; //4
        aux = v[i]; //1

        while ((pos > 0)   && (v[pos - 1] > aux) )
        {
            v[pos] = v[pos - 1];
            pos--;
        }
        
        v[pos] = aux;
        


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

    insertSort(vec);

    printVec(vec);
    
    return 0;
}
