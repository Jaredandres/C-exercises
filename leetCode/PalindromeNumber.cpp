#include <iostream>

bool isPlaindome(int x){

    int  xReverse = 0;
    int digit;
    int xOrigin = x;

    while (x > 0)
    {
        digit = x % 10;
        x = x / 10;
        xReverse  = xReverse * 10 + digit ;

    };
    

    std::cout<<x;
    std::cout<<digit;

    if (xReverse == xOrigin)
    {
        return true;
    }else
    {
        return false;
    }
    
    


};

int main()
{
    
    int x = 121;

    if(isPlaindome(x)){
        std::cout<<"YES";
    }else{
        std::cout<<"NO";
    }

    return 0;
}
