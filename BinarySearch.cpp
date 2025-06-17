#include <iostream>


void binarySearch(int arr[],int num ,int tam){

    int inicio = 0; // 0
    int final = tam - 1; // 10 - 1 = 9

    while(inicio <= final){
        int medio = inicio + (final - inicio) / 2;

        if(arr[medio] == num){
            std::cout<<"El numero fue encontrado";
            return;
        }else if(arr[medio] > num ){
            final = medio - 1;
        }else{
            inicio = medio + 1;
        }


    }
    std::cout<<"Numero no encontrado";

}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int num = 8;
    int tam = sizeof(arr) / sizeof(arr[0]);

    binarySearch(arr, num, tam);




    return 0;
}
