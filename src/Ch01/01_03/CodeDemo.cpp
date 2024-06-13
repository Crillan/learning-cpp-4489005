// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Please enter your user name:" << std::endl << std::flush;
    std::cin >> str;
    std::cout << "Thank you, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}