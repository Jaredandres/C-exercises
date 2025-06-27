#include <iostream>
#include<map>

int romanToInt(std::string s){

    std::map<char ,int> m = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',100},
        {'M',1000},
    };

    int sum = 0;

    //IV
 for (int i = 0; i < s.length(); i++) {
    if (i + 1 < s.length() && m[s[i]] < m[s[i + 1]]) {
        sum += m[s[i + 1]] - m[s[i]];
        i++;  
    } else {
        sum += m[s[i]];
    }
}

    

    std::cout<<sum;
    



}

int main()
{
    std::string s = "MCMXCIV";

    romanToInt(s);
    return 0;
}
