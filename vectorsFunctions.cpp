#include <iostream>
#include <vector>

/*      

Escribe un programa que reciba números enteros positivos ingresados 
por el usuario hasta que escriba -1. Luego:

Guarda todos los números en un vector.

Elimina los números que sean múltiplos de 3.

Inserta un 0 al principio y un 100 al final del vector.

Imprime el vector original, el modificado y su tamaño final.


*/

void deleteMult3(std::vector<int>& vec1){

    for (int i = 0; i < vec1.size(); i++)
    {
        if(vec1[i] % 3 == 0){
            vec1.erase(vec1.begin() + i);
            i--;
        }
        
    }
    


}

void impriVect(std::vector<int>& vec1){

    for (int i = 0; i < vec1.size(); i++)
    {
        std::cout<<vec1[i]<<" ";
    }
    
}


int main()
{

    int a = 0;
    std::vector<int> vec1;

    do
    {
        std::cout<<"Digita un numero que estra en el vector: ";
        std::cin>>a;
        
        if (a != -1)
        {
            vec1.push_back(a);
        }

    } while (a != -1);
    

    deleteMult3(vec1);

    vec1.insert(vec1.begin(),0);
    vec1.push_back(100);
    
    impriVect(vec1);


    std::cout<<"El tama;o final es:"<<vec1.size();
    
    return 0;
}
