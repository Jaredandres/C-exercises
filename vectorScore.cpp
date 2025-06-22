#include <iostream>
#include <vector>


/*

💡 Problem: "Clean and Organize Scores"
Write a C++ program that:

Asks the user to enter any number of test scores (integers).

Stops when the user enters -1.

Stores the scores in a vector<int>.

Removes any score lower than 50.

Sorts the remaining scores in descending order.

Inserts 100 at the beginning and 0 at the end of the vector.

Prints:

The original scores.

The cleaned and sorted scores.

The final size of the vector.



*/


void printVec(std::vector<int>& v){

    for (int i = 0; i < v.size(); i++)
    {
        std::cout<<v[i]<<" ";
    }
    
    std::cout<<std::endl;


};

void removeVec(std::vector<int>& v){


    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] < 50){
            v.erase(v.begin() + i);
            i--;
        }
    }
    

};

// {5,6,2,1,7,8,10}

void sortVec(std::vector<int>& v){

    for (int i = 0; i < v.size(); i++)
    {
        int indexMax = i;

        for (int j = i + 1; j < v.size(); j++)
        {

            if(v[j] > v[indexMax]){
                indexMax = j;
            }
  
        }

        int aux = v[indexMax];
        v[indexMax] = v[i];
        v[i] = aux;
        


    }
    


};



int main()
{

    int a = 0;
    std::vector<int> vec1;


    do{
    
        std::cout<<"Ente a number: (enter -1 to stop): ";
        std::cin >> a;

        if(a != -1){

            vec1.push_back(a);

        }

    }while(a != -1);

    printVec(vec1);

    removeVec(vec1);

    sortVec(vec1);


    vec1.insert(vec1.begin(),100);

    vec1.push_back(0);

    printVec(vec1);

    std::cout<<"The size of final vector is: "<<vec1.size();





    
    
    return 0;
}
