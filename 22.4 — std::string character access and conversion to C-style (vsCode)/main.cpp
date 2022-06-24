#include <iostream>
#include <string>

int main()
{
    //Character access:

    /*
    char& string::operator[] (size_type nIndex)
    const char& string::operator[] (size_type nIndex) const

        Both of these functions return the character with index nIndex
        Passing an invalid index results in undefined behavior
        Because char& is the return type, you can use this to edit characters in the array

    Sample code:
    */

    std::string sSource{ "abcdefg" };
    std::cout << sSource[5] << '\n'; // print f
    sSource[5] = 'X';
    std::cout << sSource << '\n'; // print abcdeXg

    /*
    char& string::at (size_type nIndex)
    const char& string::at (size_type nIndex) const

        Both of these functions return the character with index nIndex
        Passing an invalid index results in an out_of_range exception
        Because char& is the return type, you can use this to edit characters in the array

    Sample code:
    */
    std::cout << sSource.at(3) << '\n';
    sSource.at(3) = 'Y';
    std::cout << sSource << '\n';

    //Conversion to C-style arrays:
    

    return 0;
}