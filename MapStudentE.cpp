#include <iostream>
#include <map>


/*
Problem:

Write a C++ program that:

Asks the user to enter a name and a grade (int).

Stores this information in a std::map<std::string, int>.

Repeat this process until the user types "done" as the name.

After input:

Print all the students and their grades.

Show the student with the highest grade.

Show the average grade of the class.




*/


void printStudents(std::map<std::string, int>& m1){


    for(auto i : m1){


        std::cout<<"Name: "<<i.first<<std::endl;
        std::cout<<"Grades: "<<i.second<<std::endl;

        std::cout<<std::endl;


    }




}

void maxGrade(std::map<std::string, int>& m1){
    
    int max = 0;
    std::string topstudent;

    for (auto i : m1)
    {
        if(i.second > max){
            max = i.second;
            topstudent = i.first;
        }
        
    }
    
    std::cout<<"The max grade is: "<<max<<" from:"<<topstudent <<std::endl;


}


void average(std::map<std::string,int>& m1){

    int average = 0;


    for(auto i : m1){
        average = average + i.second;

    }

    average = average / m1.size();

    std::cout<<"The average is: "<<average;
}

int main()
{


    std::map<std::string, int> m1;

    std::string name;
    int grade;



    do
    {

        std::cout<<"Enter the name: ";
        std::cin>>name;


        if(name != "done"){
        std::cout<<"Enter the grade: ";
        std::cin>>grade;

        
            m1.insert({name,grade});
        }
 
    } while (name != "done");
    



    printStudents(m1);

    maxGrade(m1);

    average(m1);

    
    return 0;
}
