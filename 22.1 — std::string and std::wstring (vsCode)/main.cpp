#include <iostream>
#include <cstring> // for strcpy()
#include <string>

int main()
{
    std::cout << "Hello World, my name is Sophie\n";

    //Motivation for a string class:
    char *strHello = new char[7]; // C-style ctrin, ingeneral NEVER USE IT.. instead go to use std::string :)
    strcpy(strHello, "hello!");
    delete[] strHello;

    //String overview:
    
    
    



    return 0;
}