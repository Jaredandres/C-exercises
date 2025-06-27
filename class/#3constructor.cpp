#include <iostream>


class Book{

    public:
        std::string title;
        std::string autho;
        int year;

    Book(std::string t,std::string a, int y){
        title = t;
        autho = a;
        year = y;
    }



};


int main()
{

    Book b1("Hola","paulina",23);
    Book b2("HOLA2","Jared",23);

    

    std::cout<<b1.title<<", "<<b1.autho<<", "<<b1.year<<"\n";
    std::cout<<b2.title<<", "<<b2.autho<<", "<<b2.year;

    
    return 0;
}
