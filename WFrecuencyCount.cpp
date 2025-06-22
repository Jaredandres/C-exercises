#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <cctype> 


void countWords(std::map<int, int>& m, std::string s) {
    std::stringstream se(s); 

    std::string word;

    while (se >> word) {
        int len = word.length();
        m[len]++;  
    }
}

int main() {
    std::map<int, int> m1;
    std::string sentence;

    std::cout << "Enter the sentence: ";
    std::getline(std::cin, sentence);

    
    for (char& c : sentence) {
        c = std::tolower(c);
    }

   
    countWords(m1, sentence);

    for (auto pair : m1) {
        std::cout << "Words of length " << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
