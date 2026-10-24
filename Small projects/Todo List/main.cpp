#include <iostream>
#include "source.h"

int main()
{
    char Input;
    std::string Title;
    std::cout << "Enter Title: "; std::getline(std::cin, Title);

    clearTerminal();
    while(true)
    {    
        std::cout <<
           Title << "\n";
        List();

        std::cout << std::endl <<
            "A{Add}, E{Edit}, R{Remove}, L{Leave} Input: ";

        std::cin >> Input;
        Input = (char)tolower(Input);

        if(Input == 'a') Add();
        else if(Input == 'e') Edit();
        else if(Input == 'r') Remove();
        else{break;}
    }



    return 0; 

}
