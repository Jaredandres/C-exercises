#include <iostream>


class Book{

    public:
        std::string title;
        std::string autho;
        int year;



};


int main()
{

    Book b1;
    Book b2;

    b1.title = "Ready player one";
    b1.autho = "Miguel";
    b1.year = 1964;

    b2.title = "The Giving Tree";
    b2.autho = "Shel Silverstein";
    b2.year = 1964;

    std::cout<<b1.title<<", "<<b1.autho<<", "<<b1.year<<"\n";
    std::cout<<b2.title<<", "<<b2.autho<<", "<<b2.year;

    
    return 0;
}
