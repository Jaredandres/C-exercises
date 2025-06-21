#include <iostream>



int factorial(int n){

    if(n == 0){
        n = 1;
        
    }else{
        n = n * factorial(n-1);
    }

    return n;
}


int main()
{

    int n;

    do
    {
        std::cout<<"Digite un numero positivo: ";
        std::cin>>n;
    } while (n < 1);
    
    

   int  m = factorial(n);


    std::cout<<"El factorial es: " << m;
    return 0;
}
