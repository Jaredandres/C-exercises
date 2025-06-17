#include<iostream>

/* Write a time function with an int parameter named totalSeconds 
and three int reference parameters named hours, minutes, and seconds.

The function converts the number of seconds into hours, minutes, and seconds.
*/

void convert(int totalSeconds,int& h,int& m, int& s){

    h = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    m = totalSeconds / 60;
    s = totalSeconds % 60;



}


int main()
{
    int totalSeconds,hours,min,sec;

    std::cout<<"Give me the number to convert: ";
    std::cin>> totalSeconds;

    convert(totalSeconds,hours,min,sec);
    
    std::cout<<"Total hours: "<<hours<<std::endl;
    std::cout<<"Total minutes: "<<min<<std::endl;
    std::cout<<"Total seconds: "<<sec;

    return 0;
}
