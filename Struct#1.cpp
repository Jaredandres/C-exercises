#include <iostream>
struct date
    {
        int year,month,day;
    }d1,d2;


void fillData(){
    std::cout<<"Give me the fist date "<<std::endl;
    std::cout<<"Give me the anio "; std::cin>> d1.year;
    std::cout<<"\nGive me the month "; std::cin>> d1.month;
    std::cout<<"\nGive me the day "; std::cin>> d1.day;


    std::cout<<"Give me the second date";
    std::cout<<"Give me the anio"; std::cin>> d2.year;
    std::cout<<"\n Give me the month"; std::cin>> d2.month;
    std::cout<<"\n Give me the day"; std::cin>> d2.day;

}



    

int main()
{

    fillData();

    

    


    
    
    return 0;
}
