#include <iostream>


void sumaPointer(int* a, int* b ){

    int suma = *a + *b;

    std::cout<<suma;

}


int main()
{

    int a, *d_a;
    int b, *d_b;

    a = 5;
    b = 6;

    d_a = &a;
    d_b = &b;

    

    sumaPointer(d_a,d_b);

    
    return 0;
}
